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

function setColor(i, numbers, prefix)
    if numbers[4] == nil then
        numbers[4] = '' .. 255
    end
    SKIN:Bang('!SetVariable', prefix .. 'r' .. i, trim(numbers[1]))
    SKIN:Bang('!SetVariable', prefix .. 'g' .. i, trim(numbers[2]))
    SKIN:Bang('!SetVariable', prefix .. 'b' .. i, trim(numbers[3]))
    SKIN:Bang('!SetVariable', prefix .. 'a' .. i, trim(numbers[4]))
end

function Initialize()

    for i = 1, 5, 1 do
        color = SKIN:GetVariable('StandbyColor' .. i)
        setColor(i, split(color), '')
    end

    for i = 1, 5, 1 do
        color = SKIN:GetVariable('ActiveColor' .. i)
        setColor(i, split(color), '_')
    end

end
