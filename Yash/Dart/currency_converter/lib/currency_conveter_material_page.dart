import 'package:flutter/material.dart';

class MaterialHomePage extends StatefulWidget {
  const MaterialHomePage({super.key});

  @override
  State<MaterialHomePage> createState() =>
      _MaterialHomePageState();
}

class _MaterialHomePageState extends State<MaterialHomePage> {

  double result = 0;
  final TextEditingController textEditingController =
      TextEditingController();

  /// Conversion Function
  void convertCurrency() {
    setState(() {
      result =
          double.parse(textEditingController.text) * 90.63;
    });

    // Close keyboard after pressing enter or button
    FocusScope.of(context).unfocus();
  }

  @override
  Widget build(BuildContext context) {

    final border = OutlineInputBorder(
      borderSide: const BorderSide(
        color: Colors.black,
        width: 2,
      ),
      borderRadius: BorderRadius.circular(8),
    );

    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.blueGrey,
        elevation: 0,
        title: const Text(
          'Currency Converter',
          style: TextStyle(color: Colors.white),
        ),
        centerTitle: true,
      ),
      backgroundColor: Colors.blueGrey,
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [

            /// Result Text
            Text(
              "₹ ${result.toStringAsFixed(2)}",
              style: const TextStyle(
                fontSize: 35,
                fontWeight: FontWeight.bold,
                color: Colors.white,
              ),
            ),

            /// Input Field
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: TextField(
                controller: textEditingController,
                keyboardType:
                    const TextInputType.numberWithOptions(
                        decimal: true),

                onSubmitted: (_) => convertCurrency(),

                style: const TextStyle(color: Colors.black),
                decoration: InputDecoration(
                  hintText: 'Enter amount in USD',
                  prefixIcon: const Icon(
                      Icons.monetization_on_outlined),
                  filled: true,
                  fillColor: Colors.white,
                  focusedBorder: border,
                  enabledBorder: border,
                ),
              ),
            ),

            /// Convert Button
            Padding(
              padding: const EdgeInsets.all(8.0),
              child: TextButton(
                onPressed: convertCurrency,
                style: const ButtonStyle(
                  backgroundColor:
                      WidgetStatePropertyAll(Colors.black),
                  foregroundColor:
                      WidgetStatePropertyAll(Colors.white),
                  minimumSize:
                      WidgetStatePropertyAll(
                          Size(double.infinity, 50)),
                ),
                child: const Text('Convert'),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
