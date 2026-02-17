import 'package:flutter/material.dart';

class MaterialHomePage extends StatelessWidget {
  const MaterialHomePage({super.key});
  @override
  Widget build(BuildContext context) {
    return const Scaffold(
      backgroundColor: Colors.black,
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              "0",
              style: TextStyle(
                fontSize: 35,
                fontWeight: FontWeight.bold,
                color: Colors.white,
              ),
            ),
            TextField(
              style: TextStyle(color: Colors.white),
              decoration: InputDecoration(
                hintText: 'Please enter the amount in USD',
                hintStyle: TextStyle(color: Colors.white),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
