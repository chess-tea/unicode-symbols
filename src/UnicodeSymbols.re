/**
 * This file is generated, do not modify it manually.
 *
 *   - Update `Gen.re`
 *   - Then run `esy gen`
 *
 * @generated
 */;

/** Converts an integer to a unicode character, example: fromInt(0x2500) */
let fromInt = n => {
  let char = Uchar.of_int(n);
  let buffer = Buffer.create(1);
  Buffer.add_utf_8_uchar(buffer, char);
  Buffer.contents(buffer);
};

/** ' ' (0x00A0) */
let noBreakSpace = fromInt(0x00A0);

module Block = {
  /** '▀' (0x2580) */
  let upperHalfBlock = fromInt(0x2580);

  /** '▁' (0x2581) */
  let lowerOneEighthBlock = fromInt(0x2581);

  /** '▂' (0x2582) */
  let lowerOneQuarterBlock = fromInt(0x2582);

  /** '▃' (0x2583) */
  let lowerThreeEighthsBlock = fromInt(0x2583);

  /** '▄' (0x2584) */
  let lowerHalfBlock = fromInt(0x2584);

  /** '▅' (0x2585) */
  let lowerFiveEighthsBlock = fromInt(0x2585);

  /** '▆' (0x2586) */
  let lowerThreeQuartersBlock = fromInt(0x2586);

  /** '▇' (0x2587) */
  let lowerSevenEighthsBlock = fromInt(0x2587);

  /** '█' (0x2588) */
  let fullBlock = fromInt(0x2588);

  /** '▉' (0x2589) */
  let leftSevenEighthsBlock = fromInt(0x2589);

  /** '▊' (0x258A) */
  let leftThreeQuartersBlock = fromInt(0x258A);

  /** '▋' (0x258B) */
  let leftFiveEighthsBlock = fromInt(0x258B);

  /** '▌' (0x258C) */
  let leftHalfBlock = fromInt(0x258C);

  /** '▍' (0x258D) */
  let leftThreeEighthsBlock = fromInt(0x258D);

  /** '▎' (0x258E) */
  let leftOneQuarterBlock = fromInt(0x258E);

  /** '▏' (0x258F) */
  let leftOneEighthBlock = fromInt(0x258F);

  /** '▐' (0x2590) */
  let rightHalfBlock = fromInt(0x2590);

  /** '░' (0x2591) */
  let lightShade = fromInt(0x2591);

  /** '▒' (0x2592) */
  let mediumShade = fromInt(0x2592);

  /** '▓' (0x2593) */
  let darkShade = fromInt(0x2593);

  /** '▔' (0x2594) */
  let upperOneEighthBlock = fromInt(0x2594);

  /** '▕' (0x2595) */
  let rightOneEighthBlock = fromInt(0x2595);

  /** '▖' (0x2596) */
  let quadrantLowerLeft = fromInt(0x2596);

  /** '▗' (0x2597) */
  let quadrantLowerRight = fromInt(0x2597);

  /** '▘' (0x2598) */
  let quadrantUpperLeft = fromInt(0x2598);

  /** '▙' (0x2599) */
  let quadrantUpperLeftAndLowerLeftAndLowerRight = fromInt(0x2599);

  /** '▚' (0x259A) */
  let quadrantUpperLeftAndLowerRight = fromInt(0x259A);

  /** '▛' (0x259B) */
  let quadrantUpperLeftAndUpperRightAndLowerLeft = fromInt(0x259B);

  /** '▜' (0x259C) */
  let quadrantUpperLeftAndUpperRightAndLowerRight = fromInt(0x259C);

  /** '▝' (0x259D) */
  let quadrantUpperRight = fromInt(0x259D);

  /** '▞' (0x259E) */
  let quadrantUpperRightAndLowerLeft = fromInt(0x259E);

  /** '▟' (0x259F) */
  let quadrantUpperRightAndLowerLeftAndLowerRight = fromInt(0x259F);
};

module BoxDrawings = {
  /** '─' (0x2500) */
  let lightHorizontal = fromInt(0x2500);

  /** '━' (0x2501) */
  let heavyHorizontal = fromInt(0x2501);

  /** '│' (0x2502) */
  let lightVertical = fromInt(0x2502);

  /** '┃' (0x2503) */
  let heavyVertical = fromInt(0x2503);

  /** '┄' (0x2504) */
  let lightTripleDashHorizontal = fromInt(0x2504);

  /** '┅' (0x2505) */
  let heavyTripleDashHorizontal = fromInt(0x2505);

  /** '┆' (0x2506) */
  let lightTripleDashVertical = fromInt(0x2506);

  /** '┇' (0x2507) */
  let heavyTripleDashVertical = fromInt(0x2507);

  /** '┈' (0x2508) */
  let lightQuadrupleDashHorizontal = fromInt(0x2508);

  /** '┉' (0x2509) */
  let heavyQuadrupleDashHorizontal = fromInt(0x2509);

  /** '┊' (0x250A) */
  let lightQuadrupleDashVertical = fromInt(0x250A);

  /** '┋' (0x250B) */
  let heavyQuadrupleDashVertical = fromInt(0x250B);

  /** '┌' (0x250C) */
  let lightDownAndRight = fromInt(0x250C);

  /** '┍' (0x250D) */
  let downLightAndRightHeavy = fromInt(0x250D);

  /** '┎' (0x250E) */
  let downHeavyAndRightLight = fromInt(0x250E);

  /** '┏' (0x250F) */
  let heavyDownAndRight = fromInt(0x250F);

  /** '┐' (0x2510) */
  let lightDownAndLeft = fromInt(0x2510);

  /** '┑' (0x2511) */
  let downLightAndLeftHeavy = fromInt(0x2511);

  /** '┒' (0x2512) */
  let downHeavyAndLeftLight = fromInt(0x2512);

  /** '┓' (0x2513) */
  let heavyDownAndLeft = fromInt(0x2513);

  /** '└' (0x2514) */
  let lightUpAndRight = fromInt(0x2514);

  /** '┕' (0x2515) */
  let upLightAndRightHeavy = fromInt(0x2515);

  /** '┖' (0x2516) */
  let upHeavyAndRightLight = fromInt(0x2516);

  /** '┗' (0x2517) */
  let heavyUpAndRight = fromInt(0x2517);

  /** '┘' (0x2518) */
  let lightUpAndLeft = fromInt(0x2518);

  /** '┙' (0x2519) */
  let upLightAndLeftHeavy = fromInt(0x2519);

  /** '┚' (0x251A) */
  let upHeavyAndLeftLight = fromInt(0x251A);

  /** '┛' (0x251B) */
  let heavyUpAndLeft = fromInt(0x251B);

  /** '├' (0x251C) */
  let lightVerticalAndRight = fromInt(0x251C);

  /** '┝' (0x251D) */
  let verticalLightAndRightHeavy = fromInt(0x251D);

  /** '┞' (0x251E) */
  let upHeavyAndRightDownLight = fromInt(0x251E);

  /** '┟' (0x251F) */
  let downHeavyAndRightUpLight = fromInt(0x251F);

  /** '┠' (0x2520) */
  let verticalHeavyAndRightLight = fromInt(0x2520);

  /** '┡' (0x2521) */
  let downLightAndRightUpHeavy = fromInt(0x2521);

  /** '┢' (0x2522) */
  let upLightAndRightDownHeavy = fromInt(0x2522);

  /** '┣' (0x2523) */
  let heavyVerticalAndRight = fromInt(0x2523);

  /** '┤' (0x2524) */
  let lightVerticalAndLeft = fromInt(0x2524);

  /** '┥' (0x2525) */
  let verticalLightAndLeftHeavy = fromInt(0x2525);

  /** '┦' (0x2526) */
  let upHeavyAndLeftDownLight = fromInt(0x2526);

  /** '┧' (0x2527) */
  let downHeavyAndLeftUpLight = fromInt(0x2527);

  /** '┨' (0x2528) */
  let verticalHeavyAndLeftLight = fromInt(0x2528);

  /** '┩' (0x2529) */
  let downLightAndLeftUpHeavy = fromInt(0x2529);

  /** '┪' (0x252A) */
  let upLightAndLeftDownHeavy = fromInt(0x252A);

  /** '┫' (0x252B) */
  let heavyVerticalAndLeft = fromInt(0x252B);

  /** '┬' (0x252C) */
  let lightDownAndHorizontal = fromInt(0x252C);

  /** '┭' (0x252D) */
  let leftHeavyAndRightDownLight = fromInt(0x252D);

  /** '┮' (0x252E) */
  let rightHeavyAndLeftDownLight = fromInt(0x252E);

  /** '┯' (0x252F) */
  let downLightAndHorizontalHeavy = fromInt(0x252F);

  /** '┰' (0x2530) */
  let downHeavyAndHorizontalLight = fromInt(0x2530);

  /** '┱' (0x2531) */
  let rightLightAndLeftDownHeavy = fromInt(0x2531);

  /** '┲' (0x2532) */
  let leftLightAndRightDownHeavy = fromInt(0x2532);

  /** '┳' (0x2533) */
  let heavyDownAndHorizontal = fromInt(0x2533);

  /** '┴' (0x2534) */
  let lightUpAndHorizontal = fromInt(0x2534);

  /** '┵' (0x2535) */
  let leftHeavyAndRightUpLight = fromInt(0x2535);

  /** '┶' (0x2536) */
  let rightHeavyAndLeftUpLight = fromInt(0x2536);

  /** '┷' (0x2537) */
  let upLightAndHorizontalHeavy = fromInt(0x2537);

  /** '┸' (0x2538) */
  let upHeavyAndHorizontalLight = fromInt(0x2538);

  /** '┹' (0x2539) */
  let rightLightAndLeftUpHeavy = fromInt(0x2539);

  /** '┺' (0x253A) */
  let leftLightAndRightUpHeavy = fromInt(0x253A);

  /** '┻' (0x253B) */
  let heavyUpAndHorizontal = fromInt(0x253B);

  /** '┼' (0x253C) */
  let lightVerticalAndHorizontal = fromInt(0x253C);

  /** '┽' (0x253D) */
  let leftHeavyAndRightVerticalLight = fromInt(0x253D);

  /** '┾' (0x253E) */
  let rightHeavyAndLeftVerticalLight = fromInt(0x253E);

  /** '┿' (0x253F) */
  let verticalLightAndHorizontalHeavy = fromInt(0x253F);

  /** '╀' (0x2540) */
  let upHeavyAndDownHorizontalLight = fromInt(0x2540);

  /** '╁' (0x2541) */
  let downHeavyAndUpHorizontalLight = fromInt(0x2541);

  /** '╂' (0x2542) */
  let verticalHeavyAndHorizontalLight = fromInt(0x2542);

  /** '╃' (0x2543) */
  let leftUpHeavyAndRightDownLight = fromInt(0x2543);

  /** '╄' (0x2544) */
  let rightUpHeavyAndLeftDownLight = fromInt(0x2544);

  /** '╅' (0x2545) */
  let leftDownHeavyAndRightUpLight = fromInt(0x2545);

  /** '╆' (0x2546) */
  let rightDownHeavyAndLeftUpLight = fromInt(0x2546);

  /** '╇' (0x2547) */
  let downLightAndUpHorizontalHeavy = fromInt(0x2547);

  /** '╈' (0x2548) */
  let upLightAndDownHorizontalHeavy = fromInt(0x2548);

  /** '╉' (0x2549) */
  let rightLightAndLeftVerticalHeavy = fromInt(0x2549);

  /** '╊' (0x254A) */
  let leftLightAndRightVerticalHeavy = fromInt(0x254A);

  /** '╋' (0x254B) */
  let heavyVerticalAndHorizontal = fromInt(0x254B);

  /** '╌' (0x254C) */
  let lightDoubleDashHorizontal = fromInt(0x254C);

  /** '╍' (0x254D) */
  let heavyDoubleDashHorizontal = fromInt(0x254D);

  /** '╎' (0x254E) */
  let lightDoubleDashVertical = fromInt(0x254E);

  /** '╏' (0x254F) */
  let heavyDoubleDashVertical = fromInt(0x254F);

  /** '═' (0x2550) */
  let doubleHorizontal = fromInt(0x2550);

  /** '║' (0x2551) */
  let doubleVertical = fromInt(0x2551);

  /** '╒' (0x2552) */
  let downSingleAndRightDouble = fromInt(0x2552);

  /** '╓' (0x2553) */
  let downDoubleAndRightSingle = fromInt(0x2553);

  /** '╔' (0x2554) */
  let doubleDownAndRight = fromInt(0x2554);

  /** '╕' (0x2555) */
  let downSingleAndLeftDouble = fromInt(0x2555);

  /** '╖' (0x2556) */
  let downDoubleAndLeftSingle = fromInt(0x2556);

  /** '╗' (0x2557) */
  let doubleDownAndLeft = fromInt(0x2557);

  /** '╘' (0x2558) */
  let upSingleAndRightDouble = fromInt(0x2558);

  /** '╙' (0x2559) */
  let upDoubleAndRightSingle = fromInt(0x2559);

  /** '╚' (0x255A) */
  let doubleUpAndRight = fromInt(0x255A);

  /** '╛' (0x255B) */
  let upSingleAndLeftDouble = fromInt(0x255B);

  /** '╜' (0x255C) */
  let upDoubleAndLeftSingle = fromInt(0x255C);

  /** '╝' (0x255D) */
  let doubleUpAndLeft = fromInt(0x255D);

  /** '╞' (0x255E) */
  let verticalSingleAndRightDouble = fromInt(0x255E);

  /** '╟' (0x255F) */
  let verticalDoubleAndRightSingle = fromInt(0x255F);

  /** '╠' (0x2560) */
  let doubleVerticalAndRight = fromInt(0x2560);

  /** '╡' (0x2561) */
  let verticalSingleAndLeftDouble = fromInt(0x2561);

  /** '╢' (0x2562) */
  let verticalDoubleAndLeftSingle = fromInt(0x2562);

  /** '╣' (0x2563) */
  let doubleVerticalAndLeft = fromInt(0x2563);

  /** '╤' (0x2564) */
  let downSingleAndHorizontalDouble = fromInt(0x2564);

  /** '╥' (0x2565) */
  let downDoubleAndHorizontalSingle = fromInt(0x2565);

  /** '╦' (0x2566) */
  let doubleDownAndHorizontal = fromInt(0x2566);

  /** '╧' (0x2567) */
  let upSingleAndHorizontalDouble = fromInt(0x2567);

  /** '╨' (0x2568) */
  let upDoubleAndHorizontalSingle = fromInt(0x2568);

  /** '╩' (0x2569) */
  let doubleUpAndHorizontal = fromInt(0x2569);

  /** '╪' (0x256A) */
  let verticalSingleAndHorizontalDouble = fromInt(0x256A);

  /** '╫' (0x256B) */
  let verticalDoubleAndHorizontalSingle = fromInt(0x256B);

  /** '╬' (0x256C) */
  let doubleVerticalAndHorizontal = fromInt(0x256C);

  /** '╭' (0x256D) */
  let lightArcDownAndRight = fromInt(0x256D);

  /** '╮' (0x256E) */
  let lightArcDownAndLeft = fromInt(0x256E);

  /** '╯' (0x256F) */
  let lightArcUpAndLeft = fromInt(0x256F);

  /** '╰' (0x2570) */
  let lightArcUpAndRight = fromInt(0x2570);

  /** '╱' (0x2571) */
  let lightDiagonalUpperRightToLowerLeft = fromInt(0x2571);

  /** '╲' (0x2572) */
  let lightDiagonalUpperLeftToLowerRight = fromInt(0x2572);

  /** '╳' (0x2573) */
  let lightDiagonalCross = fromInt(0x2573);

  /** '╴' (0x2574) */
  let lightLeft = fromInt(0x2574);

  /** '╵' (0x2575) */
  let lightUp = fromInt(0x2575);

  /** '╶' (0x2576) */
  let lightRight = fromInt(0x2576);

  /** '╷' (0x2577) */
  let lightDown = fromInt(0x2577);

  /** '╸' (0x2578) */
  let heavyLeft = fromInt(0x2578);

  /** '╹' (0x2579) */
  let heavyUp = fromInt(0x2579);

  /** '╺' (0x257A) */
  let heavyRight = fromInt(0x257A);

  /** '╻' (0x257B) */
  let heavyDown = fromInt(0x257B);

  /** '╼' (0x257C) */
  let lightLeftAndHeavyRight = fromInt(0x257C);

  /** '╽' (0x257D) */
  let lightUpAndHeavyDown = fromInt(0x257D);

  /** '╾' (0x257E) */
  let heavyLeftAndLightRight = fromInt(0x257E);

  /** '╿' (0x257F) */
  let heavyUpAndLightDown = fromInt(0x257F);
};

module Currency = {
  /** '$' (0x0024) */
  let dollarSign = fromInt(0x0024);

  /** '¢' (0x00A2) */
  let centSign = fromInt(0x00A2);

  /** '£' (0x00A3) */
  let poundSign = fromInt(0x00A3);

  /** '¤' (0x00A4) */
  let currencySign = fromInt(0x00A4);

  /** '¥' (0x00A5) */
  let yenSign = fromInt(0x00A5);

  /** '₠' (0x20A0) - Not the Euro. Not widely used. */
  let euroCurrencySign = fromInt(0x20A0);

  /** '₡' (0x20A1) */
  let colonSign = fromInt(0x20A1);

  /** '₢' (0x20A2) */
  let cruzeiroSign = fromInt(0x20A2);

  /** '₣' (0x20A3) */
  let frenchFrancSign = fromInt(0x20A3);

  /** '₤' (0x20A4) - Not widely used. Preferred character for lira is `pound`. */
  let liraSign = fromInt(0x20A4);

  /** '₥' (0x20A5) */
  let millSign = fromInt(0x20A5);

  /** '₦' (0x20A6) */
  let nairaSign = fromInt(0x20A6);

  /** '₧' (0x20A7) */
  let pesetaSign = fromInt(0x20A7);

  /** '₨' (0x20A8) - India, unofficial legacy practice. See `indianRupee`. */
  let rupeeSign = fromInt(0x20A8);

  /** '₩' (0x20A9) */
  let wonSign = fromInt(0x20A9);

  /** '₪' (0x20AA) */
  let newSheqelSign = fromInt(0x20AA);

  /** '₫' (0x20AB) */
  let dongSign = fromInt(0x20AB);

  /** '€' (0x20AC) */
  let euroSign = fromInt(0x20AC);

  /** '₭' (0x20AD) */
  let kipSign = fromInt(0x20AD);

  /** '₮' (0x20AE) */
  let tugrikSign = fromInt(0x20AE);

  /** '₯' (0x20AF) */
  let drachmaSign = fromInt(0x20AF);

  /** '₰' (0x20B0) */
  let germanPennySign = fromInt(0x20B0);

  /** '₱' (0x20B1) */
  let pesoSign = fromInt(0x20B1);

  /** '₲' (0x20B2) */
  let guaraniSign = fromInt(0x20B2);

  /** '₳' (0x20B3) */
  let australSign = fromInt(0x20B3);

  /** '₴' (0x20B4) */
  let hryvniaSign = fromInt(0x20B4);

  /** '₵' (0x20B5) */
  let cediSign = fromInt(0x20B5);

  /** '₶' (0x20B6) */
  let livreTournoisSign = fromInt(0x20B6);

  /** '₷' (0x20B7) */
  let spesmiloSign = fromInt(0x20B7);

  /** '₸' (0x20B8) */
  let tengeSign = fromInt(0x20B8);

  /** '₹' (0x20B9) */
  let indianRupeeSign = fromInt(0x20B9);

  /** '₺' (0x20BA) */
  let turkishLiraSign = fromInt(0x20BA);

  /** '₻' (0x20BB) */
  let nordicMarkSign = fromInt(0x20BB);

  /** '₼' (0x20BC) */
  let manatSign = fromInt(0x20BC);

  /** '₽' (0x20BD) */
  let rubleSign = fromInt(0x20BD);

  /** '₾' (0x20BE) */
  let lariSign = fromInt(0x20BE);
};
