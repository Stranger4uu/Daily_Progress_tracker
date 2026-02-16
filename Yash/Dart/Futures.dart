/* 
A Future means “work is happening now, result will come later.”

This is called asynchronous programming.

✅ Real Life Example

You order food 🍔

Food is being prepared (time passes)

You receive food later

The order is like a Future.

✅ Why Futures are Needed

Some operations take time:

Fetching data from internet (API)

Reading files

Database operations

Waiting for user input

If Dart waits for these tasks normally, the app will freeze.
So Dart uses Future to continue work while waiting.


Future<String> fetchData() {
  return Future.delayed(
    Duration(seconds: 2),
    () => "Data Loaded",
  );
}

void main() {
  print("Start");

  fetchData().then((value) {
    print(value);
  });

  print("End");
}
*/

//Future using async & await (Most Common Way)

Future<String> fetchData() async {
  await Future.delayed(Duration(seconds: 2));
  return "Data Loaded";
}

void main() async {
  print("Start");

  String data = await fetchData();
  print(data);

  print("End");
}
