function trim(s)
    return s:match "^%s*(.-)%s*$"
end

function split(color)
    local sep = ","
    local t = {}
    for str in string.gmatch(color, "([^" .. sep .. "]+)") do
        table.insert(t, str)
    end
    return t
end

standby = {}
active = {}
bands = {}

function Initialize()
    for i = 1, 6, 1 do
        local standbyColor = SKIN:GetVariable('StandbyColor' .. i)
        table.insert(standby, sanitizeColor(standbyColor))
        local activeColor = SKIN:GetVariable('ActiveColor' .. i)
        table.insert(active, sanitizeColor(activeColor))
        table.insert(bands, SKIN:GetMeasure('MeasureBand' .. i))
    end
end

function sanitizeColor(string)
    local color = split(string)
    if color[4] == nil then
        color[4] = '' .. 255
    end

    for i = 1, 4, 1 do
        color[i] = tonumber(trim(color[i]))
    end

    return color
end

function component(i, band, s, a)
    local color = math.floor(s - ((s - a) * band))
    local comma = ','
    if i == 4 then
        comma = ''
    end
    return color .. comma
end

function calculateColor(n)
    local s = standby[n]
    local a = active[n]
    local band = bands[n]:GetRelativeValue()

    local color = ''
    for i = 1, 4, 1 do
        color = color .. component(i, band, s[i], a[i])
    end

    return color
end

function Update()
    for i = 1, 6, 1 do
        SKIN:Bang('!SetVariable', 'Color' .. i, calculateColor(i))
    end
    -- SKIN:Bang('!UpdateMeterGroup', 'Vis')
    -- SKIN:Bang('!Redraw')
end
