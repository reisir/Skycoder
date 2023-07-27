function trim(s)
    return s:match "^%s*(.-)%s*$"
end

function split(color)
    sep = ","
    local t = {}
    for str in string.gmatch(color, "([^" .. sep .. "]+)") do
        table.insert(t, str)
    end
    return t
end

standby = {}
active = {}

function Initialize()
    for i = 1, 6, 1 do
        color = SKIN:GetVariable('StandbyColor' .. i)
        table.insert(standby, sanitizeColor(color))
        color = SKIN:GetVariable('ActiveColor' .. i)
        table.insert(active, sanitizeColor(color))
    end
end

function sanitizeColor(color)
    color = split(color)
    if color[4] == nil then
        color[4] = '' .. 255
    end

    for i = 1, 4, 1 do
        color[i] = tonumber(trim(color[i]))
    end

    return color
end

function component(i, s, a)
    MeasureBand = SKIN:GetMeasure('MeasureBand' .. i)
    band = MeasureBand:GetValue()
    color = (s - (s - a) * band)

    comma = ','
    if i == 4 then
        comma = ''
    end

    return color .. comma    
end

function calculateColor(n)
    s = standby[n]
    a = active[n]

    color = ''
    for i = 1, 4, 1 do
        color = color .. component(i, s[i], a[i])
    end

    return color
end

function Update()
    for i = 1, 6, 1 do
        color = calculateColor(i)
        SKIN:Bang('!SetVariable', 'Color' .. i, color)
    end
end
