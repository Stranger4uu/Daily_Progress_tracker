import 'package:flutter/material.dart';

class MaterialHomePage extends StatelessWidget{
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
                  "Yash", // Replace "Yash" with a variable or parameter if needed
                  style: TextStyle(
                    fontSize: 35,
                    fontWeight: FontWeight.bold,
                    color: Colors.white,
                  ),
                ),
            ],
          )
        ),
      );
  }

}