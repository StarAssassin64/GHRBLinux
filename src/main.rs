struct GamepadInfo {
    gpd_button0 : u8,    // Usage 0x00090001: Button 0 Primarry, Value = 0 to 1, Physical = Value
    gpd_button1 : u8,    // Usage 0x00090002: Button 1 Seconday, Value = 0 to 1, Physical = Value 
    gpd_button2 : u8,    // Usage 0x00090003: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button3 : u8,    // Usage 0x00090004: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button4 : u8,    // Usage 0x00090005: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button5 : u8,    // Usage 0x00090006: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button6 : u8,    // Usage 0x00090007: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button7 : u8,    // Usage 0x00090008: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button8 : u8,    // Usage 0x00090009: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button9 : u8,    // Usage 0x0009000a: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button10 : u8,   // Usage 0x0009000b: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button11 : u8,   // Usage 0x0009000c: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button12 : u8,   // Usage 0x0009000d: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button13 : u8,   // Usage 0x0009000e: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_button14 : u8,   // Usage 0x0009000f: Button 1 Seconday, Value = 0 to 1, Physical = Value
    gpd_hatswitch : u8,  // Usage 0x00010039: Hat Switch, Value = 0 to 7, Physical = Value x 45
}

fn main() {
    for device in rusb::devices().unwrap().iter() {
        let device_desc = device.device_descriptor().unwrap();

        println!("Bus {:03} Device {:03} ID {:04x}:{:04x}",
        device.bus_number(),
        device.address(),
        device_desc.vendor_id(),
        device_desc.product_id());
    }
}
