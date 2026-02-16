void main() async{

  countDown().listen((val){
    print(val);
  }, onDone: (){
    print('Completed it...');
  }, );
  print('Hiii....');
}

Stream<int> countDown() async*{

  for(int i = 5;i>0;i--){
    yield i;
    await Future.delayed(Duration(seconds: 1));
  }

}
// difference between stream and future 

/*

Why it is a Stream?

Because:

✅ It returns multiple values over time
✅ It uses async*
✅ It uses yield
✅ You are listening using .listen()

Output comes like this:

Hiii....
5
4
3
2
1
Completed it...


So values are coming one by one, not all at once.

✅ Difference Between Future and Stream (Simple)
🔹 Future

Gives only one value in future

Completes once

Example: downloading a file, API response

Example:

Future<int> getNumber() async {
  await Future.delayed(Duration(seconds: 2));
  return 10;
}


Only one result → 10

🔹 Stream

Gives multiple values over time

Can emit many events

Example: countdown, live chat messages, sensor data

Your countdown:

5 → 4 → 3 → 2 → 1


Multiple values → Stream

✅ Easy Way to Remember
Feature	Future	Stream
Number of values	One	Many
Keyword	async	async*
Return	return	yield
Receive using	await / .then()	.listen()
*/