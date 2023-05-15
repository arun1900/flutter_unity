import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class ArcherGame extends StatefulWidget {
  const ArcherGame({super.key});

  @override
  State<ArcherGame> createState() => _ArcherGameState();
}

class _ArcherGameState extends State<ArcherGame> {
  void onCreated(controller) {}

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: WillPopScope(
        onWillPop: null,
        child: Container(
          child: UnityWidget(onUnityCreated: onCreated),
        ),
      ),
    );
  }
}
