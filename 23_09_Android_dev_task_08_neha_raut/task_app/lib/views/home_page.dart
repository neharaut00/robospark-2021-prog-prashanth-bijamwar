import 'package:flutter/material.dart';

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    double width = MediaQuery.of(context).size.width;
    double height = MediaQuery.of(context).size.height;

    return Stack(
      fit: StackFit.expand,
      children: [
        Container(
          decoration: BoxDecoration(
            gradient: LinearGradient(
              colors: [
                Color.fromRGBO(4, 9, 35, 1),
                Color.fromRGBO(39, 105, 171, 1),
              ],
              begin: FractionalOffset.bottomCenter,
              end: FractionalOffset.topCenter,
            ),
          ),
        ),
        Scaffold(
          backgroundColor: Colors.transparent,
          body: SingleChildScrollView(
            child: Padding(
              padding: const EdgeInsets.symmetric(horizontal: 16, vertical: 73),
              child: Column(
                children: [
                  Container(
                    height: height * 0.7,
                    child: LayoutBuilder(
                      builder: (context, constraints) {
                        double innerHeight = constraints.maxHeight;
                        double innerWidth = constraints.maxWidth;
                        return Stack(
                          fit: StackFit.expand,
                          children: [
                            Positioned(
                              bottom: 0,
                              left: 0,
                              right: 0,
                              child: Container(
                                height: innerHeight * 0.72,
                                width: innerWidth,
                                decoration: BoxDecoration(
                                  borderRadius: BorderRadius.circular(30),
                                  color: Colors.white,
                                ),
                                child: Column(
                                  children: [
                                    SizedBox(
                                      height: 20,
                                    ),
                                    name_row(),
                                    SizedBox(
                                      height: 5,
                                    ),
                                    info(),
                                    quote(),
                                    like_and_follow()
                                  ],
                                ),
                              ),
                            ),
                            image(innerWidth: innerWidth),
                          ],
                        );
                      },
                    ),
                  ),
                ],
              ),
            ),
          ),
        )
      ],
    );
  }
}

class image extends StatelessWidget {
  const image({
    Key? key,
    required this.innerWidth,
  }) : super(key: key);

  final double innerWidth;

  @override
  Widget build(BuildContext context) {
    return Positioned(
      top: 5,
      left: 0,
      right: 0,
      child: Center(
        child: Container(
          child: Image.asset(
            'assets/images/neha.jpg',
            width: innerWidth * 0.45,
            fit: BoxFit.fitWidth,
          ),
        ),
      ),
    );
  }
}

class like_and_follow extends StatelessWidget {
  const like_and_follow({
    Key? key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Row(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [
        Container(
          margin: EdgeInsets.all(25),
          child: TextButton(
            child: Text(
              'Like',
              style: TextStyle(fontSize: 20.0, fontWeight: FontWeight.bold),
            ),
            style: TextButton.styleFrom(
              primary: Colors.white,
              backgroundColor: Colors.blue,
              shadowColor: Colors.orange,
              elevation: 5,
            ),
            onPressed: () {},
          ),
        ),
        Container(
          margin: EdgeInsets.all(25),
          child: TextButton(
            child: Text(
              'Follow',
              style: TextStyle(fontSize: 20.0, fontWeight: FontWeight.bold),
            ),
            style: TextButton.styleFrom(
              primary: Colors.white,
              backgroundColor: Colors.blue,
              shadowColor: Colors.orange,
              elevation: 5,
            ),
            onPressed: () {},
          ),
        ),
      ],
    );
  }
}

class quote extends StatelessWidget {
  const quote({
    Key? key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.all(16.0),
      child: Text("We have tomorrows \nfor reason.",
          textAlign: TextAlign.center,
          style: TextStyle(
            color: Colors.black,
            fontFamily: 'Nunito',
            fontSize: 24,
            fontWeight: FontWeight.bold,
          )),
    );
  }
}

class info extends StatelessWidget {
  const info({
    Key? key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Row(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [
        Padding(
          padding: const EdgeInsets.all(16.0),
          child: Column(
            children: [
              Text(
                'Posts',
                style: TextStyle(
                  color: Colors.deepOrange,
                  fontFamily: 'Nunito',
                  fontSize: 20,
                ),
              ),
              Text(
                '49',
                style: TextStyle(
                    color: Color.fromRGBO(39, 105, 171, 1),
                    fontFamily: 'Nunito',
                    fontSize: 25,
                    fontWeight: FontWeight.bold),
              ),
            ],
          ),
        ),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Column(
            children: [
              Text(
                'Followers',
                style: TextStyle(
                  color: Colors.deepOrange,
                  fontFamily: 'Nunito',
                  fontSize: 20,
                ),
              ),
              Text(
                '641',
                style: TextStyle(
                    color: Color.fromRGBO(39, 105, 171, 1),
                    fontFamily: 'Nunito',
                    fontSize: 25,
                    fontWeight: FontWeight.bold),
              ),
            ],
          ),
        ),
        Padding(
          padding: const EdgeInsets.all(8.0),
          child: Column(
            children: [
              Text(
                'Following',
                style: TextStyle(
                  color: Colors.deepOrange,
                  fontFamily: 'Nunito',
                  fontSize: 20,
                ),
              ),
              Text(
                '498',
                style: TextStyle(
                    color: Color.fromRGBO(39, 105, 171, 1),
                    fontFamily: 'Nunito',
                    fontSize: 25,
                    fontWeight: FontWeight.bold),
              ),
            ],
          ),
        ),
      ],
    );
  }
}

class name_row extends StatelessWidget {
  const name_row({
    Key? key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Text(
      'Neha Raut',
      style: TextStyle(
          color: Color.fromRGBO(39, 105, 171, 1),
          fontFamily: 'Nunito',
          fontSize: 37,
          fontWeight: FontWeight.bold),
    );
  }
}
