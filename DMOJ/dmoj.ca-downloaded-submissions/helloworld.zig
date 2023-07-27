const std=@import("std");
pub fn main() !void {
    @setRuntimeSafety(false);
    const stdout = std.io.getStdOut().outStream();
    try stdout.writeAll("Hello, World!");
}