module ColorSets = Map.Make({type t = string; let compare = compare});
module ColorSet = Map.Make({type t = int; let compare = compare});

let makeColors = ((c50, c100, c200, c300, c400, c500, c600, c700, c800, c900)) => {
  ColorSet.(
    ColorSet.empty
    |> add(50,  c50)
    |> add(100, c100)
    |> add(200, c200)
    |> add(300, c300)
    |> add(400, c400)
    |> add(500, c500)
    |> add(600, c600)
    |> add(700, c700)
    |> add(800, c800)
    |> add(900, c900)
  )
}

let makeAccentColors = ((c100, c200, c400, c700)) => {
  ColorSet.(
    ColorSet.empty
    |> add(100, c100)
    |> add(200, c200)
    |> add(400, c400)
    |> add(700, c700)
  )
}

let colorSets = ColorSets.(
  ColorSets.empty
  |> add("red",         makeColors(("FFEBEE", "FFCDD2", "EF9A9A", "E57373", "EF5350", "F44336", "E53935", "D32F2F", "C62828", "B71C1C")))
  |> add("pink",        makeColors(("FCE4EC", "F8BBD0", "F48FB1", "F06292", "EC407A", "E91E63", "D81B60", "C2185B", "AD1457", "880E4F")))
  |> add("purple",      makeColors(("F3E5F5", "E1BEE7", "CE93D8", "BA68C8", "AB47BC", "9C27B0", "8E24AA", "7B1FA2", "6A1B9A", "4A148C")))
  |> add("deep_purple", makeColors(("EDE7F6", "D1C4E9", "B39DDB", "9575CD", "7E57C2", "673AB7", "5E35B1", "512DA8", "4527A0", "311B92")))
  |> add("indigo",      makeColors(("E8EAF6", "C5CAE9", "9FA8DA", "7986CB", "5C6BC0", "3F51B5", "3949AB", "303F9F", "283593", "1A237E")))
  |> add("blue",        makeColors(("E3F2FD", "BBDEFB", "90CAF9", "64B5F6", "42A5F5", "2196F3", "1E88E5", "1976D2", "1565C0", "0D47A1")))
  |> add("light_blue",  makeColors(("E1F5FE", "B3E5FC", "81D4FA", "4FC3F7", "29B6F6", "03A9F4", "039BE5", "0288D1", "0277BD", "01579B")))
  |> add("cyan",        makeColors(("E0F7FA", "B2EBF2", "80DEEA", "4DD0E1", "26C6DA", "00BCD4", "00ACC1", "0097A7", "00838F", "006064")))
  |> add("teal",        makeColors(("E0F2F1", "B2DFDB", "80CBC4", "4DB6AC", "26A69A", "009688", "00897B", "00796B", "00695C", "004D40")))
  |> add("green",       makeColors(("E8F5E9", "C8E6C9", "A5D6A7", "81C784", "66BB6A", "4CAF50", "43A047", "388E3C", "2E7D32", "1B5E20")))
  |> add("light_green", makeColors(("F1F8E9", "DCEDC8", "C5E1A5", "AED581", "9CCC65", "8BC34A", "7CB342", "689F38", "558B2F", "33691E")))
  |> add("lime",        makeColors(("F9FBE7", "F0F4C3", "E6EE9C", "DCE775", "D4E157", "CDDC39", "C0CA33", "AFB42B", "9E9D24", "827717")))
  |> add("yellow",      makeColors(("FFFDE7", "FFF9C4", "FFF59D", "FFF176", "FFEE58", "FFEB3B", "FDD835", "FBC02D", "F9A825", "F57F17")))
  |> add("amber",       makeColors(("FFF8E1", "FFECB3", "FFE082", "FFD54F", "FFCA28", "FFC107", "FFB300", "FFA000", "FF8F00", "FF6F00")))
  |> add("orange",      makeColors(("FFF3E0", "FFE0B2", "FFCC80", "FFB74D", "FFA726", "FF9800", "FB8C00", "F57C00", "EF6C00", "E65100")))
  |> add("deep_orange", makeColors(("FBE9E7", "FFCCBC", "FFAB91", "FF8A65", "FF7043", "FF5722", "F4511E", "E64A19", "D84315", "BF360C")))
  |> add("brown",       makeColors(("EFEBE9", "D7CCC8", "BCAAA4", "A1887F", "8D6E63", "795548", "6D4C41", "5D4037", "4E342E", "3E2723")))
  |> add("grey",        makeColors(("FAFAFA", "F5F5F5", "EEEEEE", "E0E0E0", "BDBDBD", "9E9E9E", "757575", "616161", "424242", "212121")))
  |> add("blue_grey",   makeColors(("ECEFF1", "CFD8DC", "B0BEC5", "90A4AE", "78909C", "607D8B", "546E7A", "455A64", "37474F", "263238")))
);

let accentColorSets = ColorSets.(
  ColorSets.empty
  |> add("red",          makeAccentColors(("FF8A80", "FF5252", "FF1744", "D50000")))
  |> add("pink",         makeAccentColors(("FF80AB", "FF4081", "F50057", "C51162")))
  |> add("purple",       makeAccentColors(("EA80FC", "E040FB", "D500F9", "AA00FF")))
  |> add("deep_purple",  makeAccentColors(("B388FF", "7C4DFF", "651FFF", "6200EA")))
  |> add("indigo",       makeAccentColors(("8C9EFF", "536DFE", "3D5AFE", "304FFE")))
  |> add("blue",         makeAccentColors(("82B1FF", "448AFF", "2979FF", "2962FF")))
  |> add("light_blue",   makeAccentColors(("80D8FF", "40C4FF", "00B0FF", "0091EA")))
  |> add("cyan",         makeAccentColors(("84FFFF", "18FFFF", "00E5FF", "00B8D4")))
  |> add("teal",         makeAccentColors(("A7FFEB", "64FFDA", "1DE9B6", "00BFA5")))
  |> add("green",        makeAccentColors(("B9F6CA", "69F0AE", "00E676", "00C853")))
  |> add("light_green",  makeAccentColors(("CCFF90", "B2FF59", "76FF03", "64DD17")))
  |> add("lime",         makeAccentColors(("F4FF81", "EEFF41", "C6FF00", "AEEA00")))
  |> add("yellow",       makeAccentColors(("FFFF8D", "FFFF00", "FFEA00", "FFD600")))
  |> add("amber",        makeAccentColors(("FFE57F", "FFD740", "FFC400", "FFAB00")))
  |> add("orange",       makeAccentColors(("FFD180", "FFAB40", "FF9100", "FF6D00")))
  |> add("deep_orange",  makeAccentColors(("FF9E80", "FF6E40", "FF3D00", "DD2C00")))
);

let base = (~weight=500, name) => {
  colorSets
  |> ColorSets.find(name)
  |> ColorSet.find(weight);
}

let accent = (~weight=200, name) => {
  accentColorSets
  |> ColorSets.find(name)
  |> ColorSet.find(weight);
}
