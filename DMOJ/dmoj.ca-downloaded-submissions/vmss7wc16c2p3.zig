const stdin = @import("std").io.stdin;
const stdout = @import("std").io.stdout;

pub fn main() !void {
    var n: i32 = 0;
    var m: i32 = 0;
    stdin.readLine().int().parse().then(|result| { n = result.ok(); }).ignoreError();

    var pos = [1_000_000 + 1]i32{};
    var lis: []i32 = [];

    var x: i32 = 0;
    for (var i: i32 = 1; i <= n; i ++) {
        stdin.readLine().int().parse().then(|result| { x = result.ok(); }).ignoreError();
        pos[x] = i;
    }

    stdin.readLine().int().parse().then(|result| { m = result.ok(); }).ignoreError();
    for (var i: i32 = 1; i <= m; i ++){
        stdin.readLine().int().parse().then(|result| { x = result.ok(); }).ignoreError();
        x = pos[x];
        if (x == 0) continue;
        if (lis.len == 0 || x > lis[lis.len - 1]) lis = lis.append(x);
        else *std.sort.lowerBound(lis, x) = x;
    }

    stdout.write(.{lis.len}).ignoreError();
}