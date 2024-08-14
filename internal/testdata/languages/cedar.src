@hello("world")
// a comment here
permit (
    // another comment here
    principal == Demo::User::"test",
    action in [Action::"demo", Action::"other"],
    resource == Thing::"foo"
)
when { context.device_properties.contains({"os": "Windows", "version": 11}) };
