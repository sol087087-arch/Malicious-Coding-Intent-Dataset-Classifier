

void FUN_180001010(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_180057480;
  if (0x7fffffffffffffff - DAT_180057480 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_180057480 + 2;
  puVar7 = &DAT_180059620;
  puVar8 = &DAT_180057470;
  if (0xf < DAT_180057488) {
    puVar8 = DAT_180057470;
  }
  DAT_180059620 = (undefined8 *)0x0;
  uRam0000000180059628 = 0;
  DAT_180059630 = 0;
  DAT_180059638 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined8 *)0x0;
          DAT_180059620 = puVar7;
        }
        else {
          puVar7 = (undefined8 *)FUN_180007d94(uVar2);
          DAT_180059620 = puVar7;
        }
        goto LAB_180001104;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
    DAT_180059620 = puVar7;
  }
LAB_180001104:
  DAT_180059630 = uVar1;
  DAT_180059638 = uVar6;
  *(undefined2 *)puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)((longlong)puVar7 + 2),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180022c80);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001170(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_1800574c0 = 0x19;
  DAT_1800574c8 = 0x1f;
  DAT_1800574b0 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180022cf0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800011d0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_180059630;
  uVar3 = DAT_1800574c0;
  if (0x7fffffffffffffff - DAT_1800574c0 < DAT_180059630) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_180059630 + DAT_1800574c0;
  puVar8 = &DAT_180059600;
  puVar10 = &DAT_1800574b0;
  if (0xf < DAT_1800574c8) {
    puVar10 = DAT_1800574b0;
  }
  DAT_180059600 = (undefined8 *)0x0;
  uRam0000000180059608 = 0;
  puVar9 = &DAT_180059620;
  if (0xf < DAT_180059638) {
    puVar9 = DAT_180059620;
  }
  _DAT_180059610 = 0;
  DAT_180059618 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059600 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059600 = puVar8;
        }
        goto LAB_1800012e8;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059600 = puVar8;
  }
LAB_1800012e8:
  _DAT_180059610 = uVar2;
  DAT_180059618 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180022d60);
  return;
}




void FUN_1800013a0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_1800574e0;
  if (0x7fffffffffffffff - DAT_1800574e0 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_1800574e0 + 2;
  puVar7 = &DAT_180059660;
  puVar8 = &DAT_1800574d0;
  if (0xf < DAT_1800574e8) {
    puVar8 = DAT_1800574d0;
  }
  DAT_180059660 = (undefined8 *)0x0;
  uRam0000000180059668 = 0;
  DAT_180059670 = 0;
  DAT_180059678 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined8 *)0x0;
          DAT_180059660 = puVar7;
        }
        else {
          puVar7 = (undefined8 *)FUN_180007d94(uVar2);
          DAT_180059660 = puVar7;
        }
        goto LAB_180001494;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
    DAT_180059660 = puVar7;
  }
LAB_180001494:
  DAT_180059670 = uVar1;
  DAT_180059678 = uVar6;
  *(undefined2 *)puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)((longlong)puVar7 + 2),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180022eb0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001500(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_180057520 = 0x19;
  DAT_180057528 = 0x1f;
  DAT_180057510 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180022f20);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001560(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_180059670;
  uVar3 = DAT_180057520;
  if (0x7fffffffffffffff - DAT_180057520 < DAT_180059670) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_180059670 + DAT_180057520;
  puVar8 = &DAT_180059640;
  puVar10 = &DAT_180057510;
  if (0xf < DAT_180057528) {
    puVar10 = DAT_180057510;
  }
  DAT_180059640 = (undefined8 *)0x0;
  uRam0000000180059648 = 0;
  puVar9 = &DAT_180059660;
  if (0xf < DAT_180059678) {
    puVar9 = DAT_180059660;
  }
  _DAT_180059650 = 0;
  DAT_180059658 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059640 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059640 = puVar8;
        }
        goto LAB_180001678;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059640 = puVar8;
  }
LAB_180001678:
  _DAT_180059650 = uVar2;
  DAT_180059658 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180022f90);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001730(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_180057540;
  if (0x7fffffffffffffff - DAT_180057540 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_180057540 + 2;
  puVar7 = &DAT_1800596a0;
  puVar8 = &DAT_180057530;
  if (0xf < DAT_180057548) {
    puVar8 = DAT_180057530;
  }
  _DAT_1800596a0 = (undefined2 *)0x0;
  uRam00000001800596a8 = 0;
  DAT_1800596b0 = 0;
  DAT_1800596b8 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined2 *)0x0;
          _DAT_1800596a0 = puVar7;
        }
        else {
          puVar7 = (undefined2 *)FUN_180007d94(uVar2);
          _DAT_1800596a0 = puVar7;
        }
        goto LAB_180001824;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined2 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar7 + -4) = lVar5;
    _DAT_1800596a0 = puVar7;
  }
LAB_180001824:
  DAT_1800596b0 = uVar1;
  DAT_1800596b8 = uVar6;
  *puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)(puVar7 + 1),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_1800230e0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001890(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_180057580 = 0x19;
  DAT_180057588 = 0x1f;
  DAT_180057570 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180023150);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800018f0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_1800596b0;
  uVar3 = DAT_180057580;
  if (0x7fffffffffffffff - DAT_180057580 < DAT_1800596b0) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_1800596b0 + DAT_180057580;
  puVar8 = &DAT_180059680;
  puVar10 = &DAT_180057570;
  if (0xf < DAT_180057588) {
    puVar10 = DAT_180057570;
  }
  DAT_180059680 = (undefined8 *)0x0;
  uRam0000000180059688 = 0;
  puVar9 = (undefined8 *)&DAT_1800596a0;
  if (0xf < DAT_1800596b8) {
    puVar9 = _DAT_1800596a0;
  }
  _DAT_180059690 = 0;
  DAT_180059698 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059680 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059680 = puVar8;
        }
        goto LAB_180001a08;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059680 = puVar8;
  }
LAB_180001a08:
  _DAT_180059690 = uVar2;
  DAT_180059698 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_1800231c0);
  return;
}




void FUN_180001ac0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_1800575a0;
  if (0x7fffffffffffffff - DAT_1800575a0 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_1800575a0 + 2;
  puVar7 = &DAT_1800596e0;
  puVar8 = &DAT_180057590;
  if (0xf < DAT_1800575a8) {
    puVar8 = DAT_180057590;
  }
  DAT_1800596e0 = (undefined8 *)0x0;
  uRam00000001800596e8 = 0;
  DAT_1800596f0 = 0;
  DAT_1800596f8 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined8 *)0x0;
          DAT_1800596e0 = puVar7;
        }
        else {
          puVar7 = (undefined8 *)FUN_180007d94(uVar2);
          DAT_1800596e0 = puVar7;
        }
        goto LAB_180001bb4;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
    DAT_1800596e0 = puVar7;
  }
LAB_180001bb4:
  DAT_1800596f0 = uVar1;
  DAT_1800596f8 = uVar6;
  *(undefined2 *)puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)((longlong)puVar7 + 2),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180023310);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001c20(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_1800575e0 = 0x19;
  DAT_1800575e8 = 0x1f;
  DAT_1800575d0 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180023380);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001c80(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_1800596f0;
  uVar3 = DAT_1800575e0;
  if (0x7fffffffffffffff - DAT_1800575e0 < DAT_1800596f0) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_1800596f0 + DAT_1800575e0;
  puVar8 = &DAT_1800596c0;
  puVar10 = &DAT_1800575d0;
  if (0xf < DAT_1800575e8) {
    puVar10 = DAT_1800575d0;
  }
  DAT_1800596c0 = (undefined8 *)0x0;
  uRam00000001800596c8 = 0;
  puVar9 = &DAT_1800596e0;
  if (0xf < DAT_1800596f8) {
    puVar9 = DAT_1800596e0;
  }
  _DAT_1800596d0 = 0;
  DAT_1800596d8 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_1800596c0 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_1800596c0 = puVar8;
        }
        goto LAB_180001d98;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_1800596c0 = puVar8;
  }
LAB_180001d98:
  _DAT_1800596d0 = uVar2;
  DAT_1800596d8 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_1800233f0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001e50(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_180057600;
  if (0x7fffffffffffffff - DAT_180057600 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_180057600 + 2;
  puVar7 = &DAT_180059720;
  puVar8 = &DAT_1800575f0;
  if (0xf < DAT_180057608) {
    puVar8 = DAT_1800575f0;
  }
  _DAT_180059720 = (undefined2 *)0x0;
  uRam0000000180059728 = 0;
  DAT_180059730 = 0;
  DAT_180059738 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined2 *)0x0;
          _DAT_180059720 = puVar7;
        }
        else {
          puVar7 = (undefined2 *)FUN_180007d94(uVar2);
          _DAT_180059720 = puVar7;
        }
        goto LAB_180001f44;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined2 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar7 + -4) = lVar5;
    _DAT_180059720 = puVar7;
  }
LAB_180001f44:
  DAT_180059730 = uVar1;
  DAT_180059738 = uVar6;
  *puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)(puVar7 + 1),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180023540);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001fb0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_180057700 = 0x19;
  DAT_180057708 = 0x1f;
  DAT_1800576f0 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_1800235b0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002010(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_180059730;
  uVar3 = DAT_180057700;
  if (0x7fffffffffffffff - DAT_180057700 < DAT_180059730) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_180059730 + DAT_180057700;
  puVar8 = &DAT_180059700;
  puVar10 = &DAT_1800576f0;
  if (0xf < DAT_180057708) {
    puVar10 = DAT_1800576f0;
  }
  DAT_180059700 = (undefined8 *)0x0;
  uRam0000000180059708 = 0;
  puVar9 = (undefined8 *)&DAT_180059720;
  if (0xf < DAT_180059738) {
    puVar9 = _DAT_180059720;
  }
  _DAT_180059710 = 0;
  DAT_180059718 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059700 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059700 = puVar8;
        }
        goto LAB_180002128;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059700 = puVar8;
  }
LAB_180002128:
  _DAT_180059710 = uVar2;
  DAT_180059718 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180023620);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800021d0(void)

{
  _DAT_180057610 = DAT_18002f400;
  DAT_180057614 = DAT_18002f404;
  uRam0000000180057638 = 0;
  _DAT_180057640 = 5;
  _DAT_180057648 = 0xf;
  _DAT_180057630 = (ulonglong)CONCAT14(DAT_18002f40c,DAT_18002f408);
  uRam0000000180057658 = 0;
  _DAT_180057660 = 7;
  _DAT_180057668 = 0xf;
  _DAT_180057650 =
       (ulonglong)
       CONCAT16(s_CONFIG__18002f410[6],CONCAT24(s_CONFIG__18002f410._4_2_,s_CONFIG__18002f410._0_4_)
               );
  _DAT_180057680 = 9;
  _DAT_180057688 = 0xf;
  _DAT_180057670 = s_EXTERNAL__18002f498._0_8_;
  _DAT_180057678 = (ulonglong)(byte)s_EXTERNAL__18002f498[8];
  _DAT_1800576a0 = 9;
  _DAT_1800576a8 = 0xf;
  _DAT_180057690 = s_INTERNAL__18002f4a8._0_8_;
  _DAT_180057698 = (ulonglong)(byte)s_INTERNAL__18002f4a8[8];
  uRam00000001800576b8 = 0;
  _DAT_1800576c0 = 7;
  _DAT_1800576c8 = 0xf;
  _DAT_1800576b0 =
       (ulonglong)
       CONCAT16(s_INLINE__18002f4b8[6],CONCAT24(s_INLINE__18002f4b8._4_2_,s_INLINE__18002f4b8._0_4_)
               );
  atexit((_func_5014 *)&LAB_180023700);
  return;
}




void FUN_180002370(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_180057720;
  if (0x7fffffffffffffff - DAT_180057720 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_180057720 + 2;
  puVar7 = &DAT_180059760;
  puVar8 = &DAT_180057710;
  if (0xf < DAT_180057728) {
    puVar8 = DAT_180057710;
  }
  DAT_180059760 = (undefined8 *)0x0;
  uRam0000000180059768 = 0;
  DAT_180059770 = 0;
  DAT_180059778 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined8 *)0x0;
          DAT_180059760 = puVar7;
        }
        else {
          puVar7 = (undefined8 *)FUN_180007d94(uVar2);
          DAT_180059760 = puVar7;
        }
        goto LAB_180002464;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
    DAT_180059760 = puVar7;
  }
LAB_180002464:
  DAT_180059770 = uVar1;
  DAT_180059778 = uVar6;
  *(undefined2 *)puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)((longlong)puVar7 + 2),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180023790);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800024d0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_180057760 = 0x19;
  DAT_180057768 = 0x1f;
  DAT_180057750 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180023800);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002530(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_180059770;
  uVar3 = DAT_180057760;
  if (0x7fffffffffffffff - DAT_180057760 < DAT_180059770) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_180059770 + DAT_180057760;
  puVar8 = &DAT_180059740;
  puVar10 = &DAT_180057750;
  if (0xf < DAT_180057768) {
    puVar10 = DAT_180057750;
  }
  DAT_180059740 = (undefined8 *)0x0;
  uRam0000000180059748 = 0;
  puVar9 = &DAT_180059760;
  if (0xf < DAT_180059778) {
    puVar9 = DAT_180059760;
  }
  _DAT_180059750 = 0;
  DAT_180059758 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059740 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059740 = puVar8;
        }
        goto LAB_180002648;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059740 = puVar8;
  }
LAB_180002648:
  _DAT_180059750 = uVar2;
  DAT_180059758 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180023870);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002700(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_180057780;
  if (0x7fffffffffffffff - DAT_180057780 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_180057780 + 2;
  puVar7 = &DAT_1800597a0;
  puVar8 = &DAT_180057770;
  if (0xf < DAT_180057788) {
    puVar8 = DAT_180057770;
  }
  _DAT_1800597a0 = (undefined2 *)0x0;
  uRam00000001800597a8 = 0;
  DAT_1800597b0 = 0;
  DAT_1800597b8 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined2 *)0x0;
          _DAT_1800597a0 = puVar7;
        }
        else {
          puVar7 = (undefined2 *)FUN_180007d94(uVar2);
          _DAT_1800597a0 = puVar7;
        }
        goto LAB_1800027f4;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined2 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar7 + -4) = lVar5;
    _DAT_1800597a0 = puVar7;
  }
LAB_1800027f4:
  DAT_1800597b0 = uVar1;
  DAT_1800597b8 = uVar6;
  *puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)(puVar7 + 1),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_1800239c0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002860(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_1800577c0 = 0x19;
  DAT_1800577c8 = 0x1f;
  DAT_1800577b0 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180023a30);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800028c0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_1800597b0;
  uVar3 = DAT_1800577c0;
  if (0x7fffffffffffffff - DAT_1800577c0 < DAT_1800597b0) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_1800597b0 + DAT_1800577c0;
  puVar8 = &DAT_180059780;
  puVar10 = &DAT_1800577b0;
  if (0xf < DAT_1800577c8) {
    puVar10 = DAT_1800577b0;
  }
  DAT_180059780 = (undefined8 *)0x0;
  uRam0000000180059788 = 0;
  puVar9 = (undefined8 *)&DAT_1800597a0;
  if (0xf < DAT_1800597b8) {
    puVar9 = _DAT_1800597a0;
  }
  _DAT_180059790 = 0;
  DAT_180059798 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059780 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059780 = puVar8;
        }
        goto LAB_1800029d8;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059780 = puVar8;
  }
LAB_1800029d8:
  _DAT_180059790 = uVar2;
  DAT_180059798 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180023aa0);
  return;
}




void FUN_180002a90(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_1800577e0;
  if (0x7fffffffffffffff - DAT_1800577e0 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_1800577e0 + 2;
  puVar7 = &DAT_1800597e0;
  puVar8 = &DAT_1800577d0;
  if (0xf < DAT_1800577e8) {
    puVar8 = DAT_1800577d0;
  }
  DAT_1800597e0 = (undefined8 *)0x0;
  uRam00000001800597e8 = 0;
  DAT_1800597f0 = 0;
  DAT_1800597f8 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined8 *)0x0;
          DAT_1800597e0 = puVar7;
        }
        else {
          puVar7 = (undefined8 *)FUN_180007d94(uVar2);
          DAT_1800597e0 = puVar7;
        }
        goto LAB_180002b84;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
    DAT_1800597e0 = puVar7;
  }
LAB_180002b84:
  DAT_1800597f0 = uVar1;
  DAT_1800597f8 = uVar6;
  *(undefined2 *)puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)((longlong)puVar7 + 2),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180023bf0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002bf0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_180057820 = 0x19;
  DAT_180057828 = 0x1f;
  DAT_180057810 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180023c60);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002c50(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_1800597f0;
  uVar3 = DAT_180057820;
  if (0x7fffffffffffffff - DAT_180057820 < DAT_1800597f0) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_1800597f0 + DAT_180057820;
  puVar8 = &DAT_1800597c0;
  puVar10 = &DAT_180057810;
  if (0xf < DAT_180057828) {
    puVar10 = DAT_180057810;
  }
  DAT_1800597c0 = (undefined8 *)0x0;
  uRam00000001800597c8 = 0;
  puVar9 = &DAT_1800597e0;
  if (0xf < DAT_1800597f8) {
    puVar9 = DAT_1800597e0;
  }
  _DAT_1800597d0 = 0;
  DAT_1800597d8 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_1800597c0 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_1800597c0 = puVar8;
        }
        goto LAB_180002d68;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_1800597c0 = puVar8;
  }
LAB_180002d68:
  _DAT_1800597d0 = uVar2;
  DAT_1800597d8 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180023cd0);
  return;
}




void FUN_180002e20(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_180057840;
  if (0x7fffffffffffffff - DAT_180057840 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_180057840 + 2;
  puVar7 = &DAT_180059820;
  puVar8 = &DAT_180057830;
  if (0xf < DAT_180057848) {
    puVar8 = DAT_180057830;
  }
  DAT_180059820 = (undefined8 *)0x0;
  uRam0000000180059828 = 0;
  DAT_180059830 = 0;
  DAT_180059838 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined8 *)0x0;
          DAT_180059820 = puVar7;
        }
        else {
          puVar7 = (undefined8 *)FUN_180007d94(uVar2);
          DAT_180059820 = puVar7;
        }
        goto LAB_180002f14;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
    DAT_180059820 = puVar7;
  }
LAB_180002f14:
  DAT_180059830 = uVar1;
  DAT_180059838 = uVar6;
  *(undefined2 *)puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)((longlong)puVar7 + 2),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180023e20);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002f80(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_180057880 = 0x19;
  DAT_180057888 = 0x1f;
  DAT_180057870 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_180023e90);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180002fe0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_180059830;
  uVar3 = DAT_180057880;
  if (0x7fffffffffffffff - DAT_180057880 < DAT_180059830) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_180059830 + DAT_180057880;
  puVar8 = &DAT_180059800;
  puVar10 = &DAT_180057870;
  if (0xf < DAT_180057888) {
    puVar10 = DAT_180057870;
  }
  DAT_180059800 = (undefined8 *)0x0;
  uRam0000000180059808 = 0;
  puVar9 = &DAT_180059820;
  if (0xf < DAT_180059838) {
    puVar9 = DAT_180059820;
  }
  _DAT_180059810 = 0;
  DAT_180059818 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059800 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059800 = puVar8;
        }
        goto LAB_1800030f8;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059800 = puVar8;
  }
LAB_1800030f8:
  _DAT_180059810 = uVar2;
  DAT_180059818 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180023f00);
  return;
}




void FUN_1800031b0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_1800578a0;
  if (0x7fffffffffffffff - DAT_1800578a0 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = 0xf;
  uVar1 = DAT_1800578a0 + 2;
  puVar7 = &DAT_180059860;
  puVar8 = &DAT_180057890;
  if (0xf < DAT_1800578a8) {
    puVar8 = DAT_180057890;
  }
  DAT_180059860 = (undefined8 *)0x0;
  uRam0000000180059868 = 0;
  DAT_180059870 = 0;
  DAT_180059878 = 0;
  if (0xf < uVar1) {
    uVar6 = uVar1 | 0xf;
    if (uVar6 < 0x8000000000000000) {
      if (uVar6 < 0x16) {
        uVar6 = 0x16;
      }
      uVar2 = uVar6 + 1;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          puVar7 = (undefined8 *)0x0;
          DAT_180059860 = puVar7;
        }
        else {
          puVar7 = (undefined8 *)FUN_180007d94(uVar2);
          DAT_180059860 = puVar7;
        }
        goto LAB_1800032a4;
      }
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
      uVar4 = 0x8000000000000027;
    }
    lVar5 = FUN_180007d94(uVar4);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
    DAT_180059860 = puVar7;
  }
LAB_1800032a4:
  DAT_180059870 = uVar1;
  DAT_180059878 = uVar6;
  *(undefined2 *)puVar7 = 0x920;
  FUN_1800217d0((undefined8 *)((longlong)puVar7 + 2),puVar8,uVar3);
  *(undefined1 *)((longlong)puVar7 + uVar1) = 0;
  atexit(FUN_180024050);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003310(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_180007d94(0x20);
  uVar1 = _UNK_18002f360;
  DAT_1800578e0 = 0x19;
  DAT_1800578e8 = 0x1f;
  DAT_1800578d0 = puVar2;
  *puVar2 = _DAT_18002f358;
  puVar2[1] = uVar1;
  puVar2[2] = DAT_18002f368;
  *(undefined1 *)(puVar2 + 3) = DAT_18002f370;
  *(undefined1 *)((longlong)puVar2 + 0x19) = 0;
  atexit(FUN_1800240c0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003370(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  uVar4 = DAT_180059870;
  uVar3 = DAT_1800578e0;
  if (0x7fffffffffffffff - DAT_1800578e0 < DAT_180059870) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar7 = 0xf;
  uVar2 = DAT_180059870 + DAT_1800578e0;
  puVar8 = &DAT_180059840;
  puVar10 = &DAT_1800578d0;
  if (0xf < DAT_1800578e8) {
    puVar10 = DAT_1800578d0;
  }
  DAT_180059840 = (undefined8 *)0x0;
  uRam0000000180059848 = 0;
  puVar9 = &DAT_180059860;
  if (0xf < DAT_180059878) {
    puVar9 = DAT_180059860;
  }
  _DAT_180059850 = 0;
  DAT_180059858 = 0;
  if (0xf < uVar2) {
    uVar7 = uVar2 | 0xf;
    if (uVar7 < 0x8000000000000000) {
      if (uVar7 < 0x16) {
        uVar7 = 0x16;
      }
      uVar1 = uVar7 + 1;
      if (uVar1 < 0x1000) {
        if (uVar1 == 0) {
          puVar8 = (undefined8 *)0x0;
          DAT_180059840 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)FUN_180007d94(uVar1);
          DAT_180059840 = puVar8;
        }
        goto LAB_180003488;
      }
      uVar5 = uVar7 + 0x28;
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
      uVar5 = 0x8000000000000027;
    }
    lVar6 = FUN_180007d94(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    puVar8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = lVar6;
    DAT_180059840 = puVar8;
  }
LAB_180003488:
  _DAT_180059850 = uVar2;
  DAT_180059858 = uVar7;
  FUN_1800217d0(puVar8,puVar10,uVar3);
  FUN_1800217d0((undefined8 *)((longlong)puVar8 + uVar3),puVar9,uVar4);
  *(undefined1 *)((longlong)puVar8 + uVar2) = 0;
  atexit(FUN_180024130);
  return;
}




void FUN_180003528(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_180057e20);
  atexit((_func_5014 *)&LAB_180024204);
  return;
}




void FUN_180003560(void)

{
  FUN_180006760(&DAT_180058060,&DAT_1800580d0,'\0',1);
  atexit(FUN_1800242ac);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003590(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_18000fbb0(1);
  FUN_1800058e0((undefined8 *)&DAT_1800580d0);
  _DAT_1800580d0 = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  FUN_180005610(0x1800580d0,(longlong)puVar1,0);
  atexit((_func_5014 *)&LAB_180024300);
  return;
}




void FUN_180003628(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_180058050);
  atexit((_func_5014 *)&LAB_18002430c);
  return;
}




void FUN_180003648(void)

{
  std::_Init_locks::_Init_locks((_Init_locks *)&DAT_1800581d0);
  atexit((_func_5014 *)&LAB_180024358);
  return;
}




/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(longlong *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}




char * FUN_1800036c0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}




undefined8 * FUN_1800036e0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003750(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




void FUN_180003780(void)

{
  longlong local_28 [5];
  
  FUN_180003750(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_180009ce8(local_28,&DAT_180033618);
}




undefined8 * FUN_1800037a0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




undefined8 * FUN_1800037e0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_180003820(void)

{
  code *pcVar1;
  
  FUN_1800070a8(0x18002f348);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




undefined8 * FUN_180003840(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}




undefined4 * FUN_180003880(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}




undefined8 FUN_180003890(longlong *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  uint7 uVar2;
  undefined1 local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  uVar2 = (uint7)((ulonglong)piVar1 >> 8);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}




longlong FUN_1800038d0(longlong param_1,int *param_2,int param_3)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)*(longlong *)(param_2 + 2) >> 8);
  if ((*(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8)) &&
     (*param_2 == param_3)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}




undefined4 * FUN_1800038f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_180034c60;
  return param_1;
}




undefined8 * FUN_180003910(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***local_78;
  undefined1 local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 ***local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38 [6];
  
  plVar4 = FUN_180005240(local_38,param_3);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar1 = plVar4[2];
  if (lVar1 != 0) {
    if ((ulonglong)(plVar4[3] - lVar1) < 2) {
      FUN_180005fc0(plVar4,2,param_3,(undefined8 *)&DAT_18002f37c,2);
    }
    else {
      plVar4[2] = lVar1 + 2;
      plVar5 = plVar4;
      if (0xf < (ulonglong)plVar4[3]) {
        plVar5 = (longlong *)*plVar4;
      }
      *(undefined2 *)((longlong)plVar5 + lVar1) = 0x203a;
      *(undefined1 *)((longlong)plVar5 + lVar1 + 2) = 0;
    }
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_78,uVar2 & 0xffffffff);
  ppppuVar6 = &local_78;
  if (0xf < local_60) {
    ppppuVar6 = (undefined8 ****)local_78;
  }
  FUN_180005830(plVar4,ppppuVar6,local_68);
  if (0xf < local_60) {
    ppppuVar6 = (undefined8 ****)local_78;
    if ((0xfff < local_60 + 1) &&
       (ppppuVar6 = (undefined8 ****)local_78[-1],
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar6)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(ppppuVar6);
  }
  local_58 = (undefined8 ***)*plVar4;
  lStack_50 = plVar4[1];
  local_48 = plVar4[2];
  uStack_40 = plVar4[3];
  plVar4[2] = 0;
  plVar4[3] = 0xf;
  *(undefined1 *)plVar4 = 0;
  local_78 = &local_58;
  if (0xf < uStack_40) {
    local_78 = local_58;
  }
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_70 = 1;
  __std_exception_copy((longlong *)&local_78,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  if (0xf < uStack_40) {
    ppppuVar6 = (undefined8 ****)local_58;
    if ((0xfff < uStack_40 + 1) &&
       (ppppuVar6 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar6)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(ppppuVar6);
  }
  *param_1 = std::_System_error::vftable;
  param_1[3] = uVar2;
  param_1[4] = plVar3;
  return param_1;
}




undefined8 * FUN_180003b10(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003b60(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}




undefined8 * FUN_180003bc0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}




char * FUN_180003c10(void)

{
  return "iostream";
}




undefined8 * FUN_180003c20(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_3 == 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    pcVar2 = (char *)FUN_180007d94(0x20);
    *param_2 = pcVar2;
    param_2[2] = 0x15;
    param_2[3] = 0x1f;
    uVar1 = s_iostream_stream_error_18002f458._8_8_;
    *(undefined8 *)pcVar2 = s_iostream_stream_error_18002f458._0_8_;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    *(undefined4 *)(pcVar2 + 0x10) = s_iostream_stream_error_18002f458._16_4_;
    pcVar2[0x14] = s_iostream_stream_error_18002f458[0x14];
    pcVar2[0x15] = '\0';
    return param_2;
  }
  pcVar2 = FUN_1800076c8(param_3);
  uVar3 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    uVar3 = uVar3 + 1;
  } while (pcVar2[uVar3] != '\0');
  FUN_180005d40(param_2,(undefined8 *)pcVar2,uVar3);
  return param_2;
}




LPVOID FUN_180003ce0(LPVOID param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




undefined8 * FUN_180003d10(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




void FUN_180003d40(void)

{
  longlong local_28 [5];
  
  FUN_180003d10(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_180009ce8(local_28,&DAT_180033490);
}




undefined8 * FUN_180003d60(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}




undefined8 * FUN_180003da0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




void FUN_180003dd0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}




longlong FUN_180003de0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lVar2 = 0;
  if (*piVar1 == 0) {
    lVar2 = param_1;
  }
  return lVar2;
}




void FUN_180003df0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180003e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}




undefined8 FUN_180003e20(void)

{
  return 1;
}




undefined8 FUN_180003e30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  _Lockit local_a8 [8];
  LPVOID local_a0;
  undefined1 local_98;
  LPVOID local_90;
  undefined1 local_88;
  LPVOID local_80;
  undefined2 local_78;
  LPVOID local_70;
  undefined2 local_68;
  LPVOID local_60;
  undefined1 local_58;
  LPVOID local_50;
  undefined1 local_48;
  undefined4 local_40 [10];
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined8 *)FUN_180007d94(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = *(char **)(lVar1 + 0x28);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)(lVar1 + 0x30);
      }
    }
    std::_Lockit::_Lockit(local_a8,0);
    local_a0 = (LPVOID)0x0;
    local_98 = 0;
    local_90 = (LPVOID)0x0;
    local_88 = 0;
    local_80 = (LPVOID)0x0;
    local_78 = 0;
    local_70 = (LPVOID)0x0;
    local_68 = 0;
    local_60 = (LPVOID)0x0;
    local_58 = 0;
    local_50 = (LPVOID)0x0;
    local_48 = 0;
    if (pcVar6 == (char *)0x0) {
      FUN_1800070cc(0x18002f3a0);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_a8,pcVar6);
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = std::ctype<char>::vftable;
    puVar4 = (undefined8 *)FUN_1800076f0(local_40);
    uVar5 = puVar4[1];
    puVar3[2] = *puVar4;
    puVar3[3] = uVar5;
    uVar5 = puVar4[3];
    puVar3[4] = puVar4[2];
    puVar3[5] = uVar5;
    *param_1 = (longlong)puVar3;
    std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_a8);
    if (local_50 != (LPVOID)0x0) {
      FUN_180010434(local_50);
    }
    local_50 = (LPVOID)0x0;
    if (local_60 != (LPVOID)0x0) {
      FUN_180010434(local_60);
    }
    local_60 = (LPVOID)0x0;
    if (local_70 != (LPVOID)0x0) {
      FUN_180010434(local_70);
    }
    local_70 = (LPVOID)0x0;
    if (local_80 != (LPVOID)0x0) {
      FUN_180010434(local_80);
    }
    local_80 = (LPVOID)0x0;
    if (local_90 != (LPVOID)0x0) {
      FUN_180010434(local_90);
    }
    local_90 = (LPVOID)0x0;
    if (local_a0 != (LPVOID)0x0) {
      FUN_180010434(local_a0);
    }
    local_a0 = (LPVOID)0x0;
    std::_Lockit::~_Lockit(local_a8);
  }
  return 2;
}




void FUN_180003fc0(longlong param_1,byte param_2)

{
  FUN_1800077b0((uint)param_2,(UINT *)(param_1 + 0x10));
  return;
}




byte * FUN_180003fd0(longlong param_1,byte *param_2,byte *param_3)

{
  ulonglong uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1800077b0((uint)*param_2,(UINT *)(param_1 + 0x10));
      *param_2 = (byte)uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}




void FUN_180004020(longlong param_1,byte param_2)

{
  FUN_1800078e4((uint)param_2,(UINT *)(param_1 + 0x10));
  return;
}




byte * FUN_180004030(longlong param_1,byte *param_2,byte *param_3)

{
  ulonglong uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_1800078e4((uint)*param_2,(UINT *)(param_1 + 0x10));
      *param_2 = (byte)uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}




undefined1 FUN_180004080(undefined8 param_1,undefined1 param_2)

{
  return param_2;
}




longlong FUN_180004090(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_1800217d0(param_4,param_2,param_3 - (longlong)param_2);
  return param_3;
}




longlong FUN_1800040b0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                      undefined8 *param_5)

{
  FUN_1800217d0(param_5,param_2,param_3 - (longlong)param_2);
  return param_3;
}




/* Library Function - Single Match
    protected: virtual void * __ptr64 __cdecl std::ctype<char>::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall std::ctype<char>::_scalar_deleting_destructor_(ctype<char> *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x20) < 1) {
    if (*(int *)(this + 0x20) < 0) {
      thunk_FUN_180010434(*(LPVOID *)(this + 0x18));
    }
  }
  else {
    FUN_180010434(*(LPVOID *)(this + 0x18));
  }
  FUN_180010434(*(LPVOID *)(this + 0x28));
  *(undefined ***)this = _Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    thunk_FUN_180010434(this);
  }
  return this;
}




undefined8 * FUN_180004140(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  ulonglong local_48;
  ulonglong uStack_40;
  LPVOID local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_38 = (LPVOID)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)((longlong)param_2 + uVar4) != '\0');
  FUN_180005d40(&local_38,param_2,uVar4);
  local_48 = uVar1;
  uStack_40 = uVar2;
  FUN_180003910(param_1,&local_48,&local_38);
  if (0xf < uStack_20) {
    pvVar3 = local_38;
    if ((0xfff < uStack_20 + 1) &&
       (pvVar3 = *(LPVOID *)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar3);
  }
  *param_1 = std::ios_base::failure::vftable;
  return param_1;
}




undefined8 * FUN_180004200(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = std::ios_base::failure::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}




/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl std::ios_base::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2019 Release */

void * __thiscall std::ios_base::_scalar_deleting_destructor_(ios_base *this,uint param_1)

{
  *(undefined ***)this = vftable;
  _Ios_base_dtor(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_180010434(this);
  }
  return this;
}




void FUN_1800042a0(longlong param_1,longlong param_2)

{
  _Facet_base *p_Var1;
  
  p_Var1 = FUN_180005c30(param_2);
  FUN_1800054c0(param_1,(longlong *)p_Var1);
  return;
}




int FUN_1800042d0(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar1) - 1;
    }
  }
  return 0;
}




longlong FUN_180004320(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18 [2];
  
  if ((param_2 != 0) || (iVar3 = 4, param_3 != 0)) {
    iVar3 = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar2 = FUN_1800102fc(*(longlong *)(param_1 + 0x80),param_2,iVar3,param_3);
    if ((int)uVar2 == 0) {
      *(undefined1 *)(param_1 + 0x7c) = 1;
      *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
      *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
      *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
      *(undefined1 *)(param_1 + 0x71) = 0;
      lVar1 = *(longlong *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (lVar1 != 0) {
        local_res8 = 0;
        local_res10 = 0;
        local_res18[0] = 0;
        _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
        *(longlong *)(param_1 + 0x18) = local_res8;
        *(longlong *)(param_1 + 0x20) = local_res8;
        *(longlong *)(param_1 + 0x38) = local_res10;
        *(longlong *)(param_1 + 0x40) = local_res10;
        *(longlong *)(param_1 + 0x50) = local_res18[0];
        *(longlong *)(param_1 + 0x58) = local_res18[0];
      }
      *(longlong *)(param_1 + 0x80) = lVar1;
      *(undefined8 *)(param_1 + 0x74) = DAT_1800595e8;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return param_1;
    }
  }
  return 0;
}




longlong * FUN_180004440(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_3[1] + *param_3;
  if (param_1[0x10] != 0) {
    bVar2 = FUN_180005540(param_1);
    if (bVar2) {
      iVar3 = fsetpos((FILE *)param_1[0x10],&local_res8);
      if (iVar3 == 0) {
        *(longlong *)((longlong)param_1 + 0x74) = param_3[2];
        if (*(longlong **)param_1[3] == param_1 + 0xe) {
          lVar4 = param_1[0x11];
          lVar1 = param_1[0x12];
          *(longlong *)param_1[3] = lVar4;
          *(longlong *)param_1[7] = lVar4;
          *(int *)param_1[10] = (int)lVar1 - (int)lVar4;
        }
        lVar4 = *(longlong *)((longlong)param_1 + 0x74);
        *param_2 = local_res8;
        goto LAB_1800044d8;
      }
    }
  }
  *param_2 = -1;
  lVar4 = 0;
LAB_1800044d8:
  param_2[1] = 0;
  param_2[2] = lVar4;
  return param_2;
}




fpos_t * FUN_180004500(longlong *param_1,fpos_t *param_2,LARGE_INTEGER param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  fpos_t fVar5;
  fpos_t local_res8;
  
  if (((*(longlong **)param_1[7] == param_1 + 0xe) && (param_4 == 1)) && (param_1[0xd] == 0)) {
    param_3.QuadPart = param_3.QuadPart + -1;
  }
  if (param_1[0x10] != 0) {
    bVar3 = FUN_180005540(param_1);
    if (bVar3) {
      if ((param_3.QuadPart != 0) || (param_4 != 1)) {
        iVar4 = FUN_180010b90((longlong *)param_1[0x10],param_3,param_4);
        if (iVar4 != 0) goto LAB_1800045ba;
      }
      iVar4 = fgetpos((FILE *)param_1[0x10],&local_res8);
      if (iVar4 == 0) {
        if (*(longlong **)param_1[3] == param_1 + 0xe) {
          lVar1 = param_1[0x11];
          lVar2 = param_1[0x12];
          *(longlong *)param_1[3] = lVar1;
          *(longlong *)param_1[7] = lVar1;
          *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
        }
        fVar5 = *(fpos_t *)((longlong)param_1 + 0x74);
        *param_2 = local_res8;
        goto LAB_1800045c3;
      }
    }
  }
LAB_1800045ba:
  *param_2 = -1;
  fVar5 = 0;
LAB_1800045c3:
  param_2[1] = 0;
  param_2[2] = fVar5;
  return param_2;
}




longlong FUN_1800045f0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_3;
  if (param_1[0xd] == 0) {
    if (*(undefined8 **)param_1[8] == (undefined8 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)param_1[0xb];
    }
    if (0 < (longlong)param_3) {
      if (0 < iVar2) {
        uVar3 = (longlong)iVar2;
        if ((longlong)param_3 < (longlong)iVar2) {
          uVar3 = param_3;
        }
        FUN_1800217d0(*(undefined8 **)param_1[8],param_2,uVar3);
        param_2 = (undefined8 *)((longlong)param_2 + uVar3);
        uVar5 = param_3 - uVar3;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar3;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar3;
        if ((longlong)uVar5 < 1) goto LAB_180004706;
      }
      if (param_1[0x10] != 0) {
        uVar3 = FUN_18000fff0(param_2,1,uVar5,param_1[0x10]);
        uVar5 = uVar5 - uVar3;
      }
    }
  }
  else {
    for (; 0 < (longlong)uVar5; uVar5 = uVar5 + lVar1) {
      uVar3 = FUN_1800057f0((longlong)param_1);
      if ((longlong)uVar3 < 1) {
        iVar2 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined1 *)param_2);
        if (iVar2 == -1) break;
        lVar1 = -1;
        uVar4 = 1;
      }
      else {
        uVar4 = uVar5;
        if ((longlong)uVar3 <= (longlong)uVar5) {
          uVar4 = uVar3;
        }
        FUN_1800217d0(*(undefined8 **)param_1[8],param_2,uVar4);
        lVar1 = -uVar4;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar4;
        *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar4;
      }
      param_2 = (undefined8 *)((longlong)param_2 + uVar4);
    }
  }
LAB_180004706:
  return param_3 - uVar5;
}




longlong FUN_180004720(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong _Count;
  
  if ((longlong)param_3 < 1) {
    return 0;
  }
  _Count = param_3;
  if (param_1[0xd] == 0) {
    if (*(undefined8 **)param_1[7] == (undefined8 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1[10];
    }
    if (iVar3 != 0) {
      uVar4 = param_3;
      if ((ulonglong)(longlong)iVar3 < param_3) {
        uVar4 = (longlong)iVar3;
      }
      FUN_1800217d0(param_2,*(undefined8 **)param_1[7],uVar4);
      param_2 = (undefined8 *)((longlong)param_2 + uVar4);
      _Count = param_3 - uVar4;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar4;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar4;
    }
    if (param_1[0x10] != 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar1 = param_1[0x11];
        lVar2 = param_1[0x12];
        *(longlong *)param_1[3] = lVar1;
        *(longlong *)param_1[7] = lVar1;
        *(int *)param_1[10] = (int)lVar2 - (int)lVar1;
      }
      do {
        if (_Count < 0x1000) {
          if (_Count != 0) {
            sVar5 = fread(param_2,1,_Count,(FILE *)param_1[0x10]);
            _Count = _Count - sVar5;
          }
          break;
        }
        sVar5 = fread(param_2,1,0xfff,(FILE *)param_1[0x10]);
        param_2 = (undefined8 *)((longlong)param_2 + sVar5);
        _Count = _Count - sVar5;
      } while (sVar5 == 0xfff);
    }
  }
  else {
    do {
      uVar4 = FUN_180005810((longlong)param_1);
      if ((longlong)uVar4 < 1) {
        iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
        if (iVar3 == -1) break;
        *(char *)param_2 = (char)iVar3;
        lVar1 = -1;
        uVar6 = 1;
      }
      else {
        uVar6 = _Count;
        if ((longlong)uVar4 <= (longlong)_Count) {
          uVar6 = uVar4;
        }
        FUN_1800217d0(param_2,*(undefined8 **)param_1[7],uVar6);
        lVar1 = -uVar6;
        *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar6;
        *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar6;
      }
      _Count = _Count + lVar1;
      param_2 = (undefined8 *)((longlong)param_2 + uVar6);
    } while (0 < (longlong)_Count);
  }
  return param_3 - _Count;
}




ulonglong FUN_1800048d0(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char *****pppppcVar6;
  ulonglong uVar7;
  char *pcVar8;
  char cVar9;
  longlong local_res8;
  byte *local_res10;
  byte local_48;
  undefined1 local_47 [7];
  char ****local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  uVar7 = **(ulonglong **)(param_1 + 0x38);
  if (uVar7 != 0) {
    iVar4 = **(int **)(param_1 + 0x50);
    if (uVar7 < uVar7 + (longlong)iVar4) {
      **(int **)(param_1 + 0x50) = iVar4 + -1;
      pbVar1 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar1 + 1);
      return (ulonglong)*pbVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0xffffffff;
  }
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    lVar3 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar3;
    **(longlong **)(param_1 + 0x38) = lVar3;
    **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar3;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar5 = FUN_18000f97c(*(undefined8 **)(param_1 + 0x80));
    uVar7 = 0xffffffff;
    if ((int)uVar5 != -1) {
      uVar7 = uVar5 & 0xff;
    }
  }
  else {
    uStack_38 = 0;
    local_30 = 0;
    local_28 = 0xf;
    local_40 = (char ****)0x0;
    uVar7 = FUN_18000f97c(*(undefined8 **)(param_1 + 0x80));
    if ((int)uVar7 != -1) {
LAB_1800049d0:
      uVar5 = local_30;
      cVar9 = (char)(uVar7 & 0xffffffff);
      if (local_30 < local_28) {
        pppppcVar6 = &local_40;
        if (0xf < local_28) {
          pppppcVar6 = (char *****)local_40;
        }
        pcVar8 = (char *)((longlong)pppppcVar6 + local_30);
        local_30 = local_30 + 1;
        *pcVar8 = cVar9;
        *(char *)((longlong)pppppcVar6 + uVar5 + 1) = '\0';
      }
      else {
        FUN_180005e50(&local_40,local_28,uVar7 & 0xffffffff,cVar9);
      }
      pppppcVar6 = &local_40;
      if (0xf < local_28) {
        pppppcVar6 = (char *****)local_40;
      }
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                        (*(longlong **)(param_1 + 0x68),param_1 + 0x74,pppppcVar6,
                         (char *)((longlong)pppppcVar6 + local_30),&local_res8,&local_48,local_47,
                         &local_res10);
      if ((iVar4 == 0) || (iVar4 == 1)) {
        if (local_res10 == &local_48) goto code_r0x000180004a7b;
        pppppcVar6 = &local_40;
        if (0xf < local_28) {
          pppppcVar6 = (char *****)local_40;
        }
        pcVar8 = (char *)((longlong)pppppcVar6 + (local_30 - local_res8));
        while (0 < (longlong)pcVar8) {
          pcVar8 = pcVar8 + -1;
          ungetc((int)pcVar8[local_res8],*(FILE **)(param_1 + 0x80));
        }
        uVar7 = (ulonglong)local_48;
        goto LAB_180004ad8;
      }
      if (iVar4 == 3) {
        pppppcVar6 = &local_40;
        if (0xf < local_28) {
          pppppcVar6 = (char *****)local_40;
        }
        uVar7 = (ulonglong)(uint)(int)*(char *)pppppcVar6;
        goto LAB_180004ad8;
      }
    }
LAB_180004ad3:
    uVar7 = 0xffffffff;
LAB_180004ad8:
    if (0xf < local_28) {
      pppppcVar6 = (char *****)local_40;
      if ((0xfff < local_28 + 1) &&
         (pppppcVar6 = (char *****)local_40[-1],
         (char *)0x1f < (char *)((longlong)local_40 + (-8 - (longlong)pppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
        FUN_180010fcc();
      }
      thunk_FUN_180010434(pppppcVar6);
    }
  }
  return uVar7;
code_r0x000180004a7b:
  pppppcVar6 = &local_40;
  if (0xf < local_28) {
    pppppcVar6 = (char *****)local_40;
  }
  uVar7 = local_res8 - (longlong)pppppcVar6;
  if (local_30 < (ulonglong)(local_res8 - (longlong)pppppcVar6)) {
    uVar7 = local_30;
  }
  pppppcVar6 = &local_40;
  if (0xf < local_28) {
    pppppcVar6 = (char *****)local_40;
  }
  uVar5 = local_30 - uVar7;
  FUN_1800217d0(pppppcVar6,(undefined8 *)((longlong)pppppcVar6 + uVar7),uVar5 + 1);
  local_30 = uVar5;
  uVar7 = FUN_18000f97c(*(undefined8 **)(param_1 + 0x80));
  if ((int)uVar7 == -1) goto LAB_180004ad3;
  goto LAB_1800049d0;
}




ulonglong FUN_180004b90(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[10])) {
    return (ulonglong)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar2 & 0xffffffff);
  return uVar2 & 0xffffffff;
}




uint FUN_180004c00(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (iVar4 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80)), iVar4 != -1)) {
      return param_2;
    }
    puVar1 = (undefined1 *)(param_1 + 0x70);
    if ((undefined1 *)**(longlong **)(param_1 + 0x38) != puVar1) {
      *puVar1 = (char)param_2;
      puVar3 = (undefined1 *)**(longlong **)(param_1 + 0x18);
      if (puVar3 != puVar1) {
        *(undefined1 **)(param_1 + 0x88) = puVar3;
        *(longlong *)(param_1 + 0x90) =
             (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
      }
      **(longlong **)(param_1 + 0x18) = (longlong)puVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)puVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)puVar1) + 0x71;
      return param_2;
    }
  }
  return 0xffffffff;
}




int FUN_180004cf0(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong local_res18;
  byte *local_res20;
  byte local_38;
  undefined1 local_37 [7];
  undefined1 local_30 [32];
  undefined1 local_10 [8];
  
  if (param_2 == -1) {
    return 0;
  }
  uVar6 = **(ulonglong **)(param_1 + 0x40);
  bVar8 = (byte)param_2;
  if (uVar6 != 0) {
    iVar5 = **(int **)(param_1 + 0x58);
    if (uVar6 < uVar6 + (longlong)iVar5) {
      **(int **)(param_1 + 0x58) = iVar5 + -1;
      pbVar1 = (byte *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(pbVar1 + 1);
      *pbVar1 = bVar8;
      return param_2;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar2;
    }
    plVar4 = *(longlong **)(param_1 + 0x68);
    if (plVar4 == (longlong *)0x0) {
LAB_180004e03:
      uVar6 = FUN_18000ea40(bVar8,*(longlong **)(param_1 + 0x80));
      if ((int)uVar6 != -1) {
        return param_2;
      }
      return -1;
    }
    local_38 = bVar8;
    iVar5 = (**(code **)(*plVar4 + 0x38))
                      (plVar4,param_1 + 0x74,&local_38,local_37,&local_res20,local_30,local_10,
                       &local_res18);
    if ((iVar5 == 0) || (iVar5 == 1)) {
      uVar6 = local_res18 - (longlong)local_30;
      if ((uVar6 == 0) ||
         (uVar7 = FUN_18000fff0(local_30,1,uVar6,*(longlong *)(param_1 + 0x80)), uVar6 == uVar7)) {
        *(undefined1 *)(param_1 + 0x71) = 1;
        if (local_res20 == &local_38) {
          return -1;
        }
        return param_2;
      }
    }
    else {
      bVar8 = local_38;
      if (iVar5 == 3) goto LAB_180004e03;
    }
  }
  return -1;
}




void FUN_180004e90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000fc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x80) + 0x30));
  return;
}




void FUN_180004eb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000fc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x80) + 0x30));
  return;
}




void FUN_180004ed0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  *param_1 = (longlong)std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  if ((param_1[0x10] != 0) && (*(longlong **)param_1[3] == param_1 + 0xe)) {
    lVar1 = param_1[0x12];
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = (int)lVar1 - (int)lVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    FUN_1800056e0(param_1);
  }
  *param_1 = (longlong)std::basic_streambuf<char,struct_std::char_traits<char>_>::vftable;
  pvVar3 = (LPVOID)param_1[0xc];
  if (pvVar3 != (LPVOID)0x0) {
    if (*(longlong **)((longlong)pvVar3 + 8) != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar3 + 8) + 0x10))();
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    thunk_FUN_180010434(pvVar3);
    return;
  }
  return;
}




void _guard_check_icall(void)

{
  return;
}




undefined8 FUN_180004f90(void)

{
  return 0;
}




undefined8 FUN_180004fa0(undefined8 param_1)

{
  return param_1;
}




undefined8 * FUN_180004fb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}




longlong FUN_180004fd0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  for (uVar4 = param_3; 0 < (longlong)uVar4; uVar4 = uVar4 + lVar1) {
    uVar3 = FUN_1800057f0((longlong)param_1);
    if ((longlong)uVar3 < 1) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined1 *)param_2);
      if (iVar2 == -1) break;
      lVar1 = -1;
      uVar5 = 1;
    }
    else {
      uVar5 = uVar4;
      if ((longlong)uVar3 <= (longlong)uVar4) {
        uVar5 = uVar3;
      }
      FUN_1800217d0(*(undefined8 **)param_1[8],param_2,uVar5);
      lVar1 = -uVar5;
      *(int *)param_1[0xb] = *(int *)param_1[0xb] - (int)uVar5;
      *(longlong *)param_1[8] = *(longlong *)param_1[8] + (longlong)(int)uVar5;
    }
    param_2 = (undefined8 *)((longlong)param_2 + uVar5);
  }
  return param_3 - uVar4;
}




longlong FUN_180005090(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  for (uVar4 = param_3; 0 < (longlong)uVar4; uVar4 = uVar4 + lVar1) {
    uVar3 = FUN_180005810((longlong)param_1);
    if ((longlong)uVar3 < 1) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar2 == -1) break;
      *(char *)param_2 = (char)iVar2;
      lVar1 = -1;
      uVar5 = 1;
    }
    else {
      uVar5 = uVar4;
      if ((longlong)uVar3 <= (longlong)uVar4) {
        uVar5 = uVar3;
      }
      FUN_1800217d0(param_2,*(undefined8 **)param_1[7],uVar5);
      lVar1 = -uVar5;
      *(int *)param_1[10] = *(int *)param_1[10] - (int)uVar5;
      *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar5;
    }
    param_2 = (undefined8 *)((longlong)param_2 + uVar5);
  }
  return param_3 - uVar4;
}




ulonglong FUN_180005140(longlong *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((int)uVar2 == -1) {
    return uVar2;
  }
  *(int *)param_1[10] = *(int *)param_1[10] + -1;
  pbVar1 = *(byte **)param_1[7];
  *(byte **)param_1[7] = pbVar1 + 1;
  return (ulonglong)*pbVar1;
}




undefined8 FUN_180005180(void)

{
  return 0xffffffff;
}




void FUN_180005190(ios_base *param_1)

{
  *(undefined ***)param_1 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(param_1);
  return;
}




void FUN_1800051b0(undefined8 *param_1)

{
  if ((LPVOID)*param_1 != (LPVOID)0x0) {
    FUN_180010434((LPVOID)*param_1);
  }
  *param_1 = 0;
  return;
}




void FUN_1800051e0(longlong *param_1)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}




undefined8 * FUN_180005240(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  puVar6 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar2 = param_2[2];
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  param_1[3] = 0xf;
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    uVar3 = puVar8[1];
    *param_1 = *puVar8;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar7 = uVar2 | 0xf;
  if (uVar7 < 0x8000000000000000) {
    if (uVar7 < 0x16) {
      uVar7 = 0x16;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        puVar6 = (undefined8 *)FUN_180007d94(uVar1);
      }
      goto LAB_180005312;
    }
    uVar4 = uVar7 + 0x28;
    if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180003780();
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar7 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_180007d94(uVar4);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180010fcc();
  }
  puVar6 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  puVar6[-1] = lVar5;
LAB_180005312:
  *param_1 = puVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  FUN_1800217d0(puVar6,puVar8,uVar2 + 1);
  return param_1;
}




longlong * FUN_180005360(longlong *param_1,uint param_2)

{
  FUN_180004ed0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800053a0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = (LPVOID)param_1[0xc];
  *param_1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::vftable;
  if (pvVar1 != (LPVOID)0x0) {
    if (*(longlong **)((longlong)pvVar1 + 8) != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar1 + 8) + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_180010434(pvVar1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




ios_base * FUN_180005420(ios_base *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




ulonglong FUN_180005460(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  
  uVar1 = param_4 - param_3;
  if (0x7fffffff < (longlong)uVar1) {
    uVar1 = 0x7fffffff;
  }
  if (uVar1 < param_5) {
    param_5 = uVar1;
  }
  return param_5 & 0xffffffff;
}




undefined8
FUN_180005480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}




undefined8
FUN_180005490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}




undefined1 FUN_1800054b0(void)

{
  return 1;
}




void FUN_1800054c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(longlong **)(param_1 + 0x68) = param_2;
  *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}




bool FUN_180005540(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_res8;
  undefined1 local_28 [32];
  
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    return true;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar1 == -1) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                    ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_28,
                     &stack0xfffffffffffffff8,&local_res8);
  if (iVar1 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 3) {
      return false;
    }
    *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    return true;
  }
  uVar3 = local_res8 - (longlong)local_28;
  if ((uVar3 != 0) && (uVar2 = FUN_18000fff0(local_28,1,uVar3,param_1[0x10]), uVar3 != uVar2)) {
    return false;
  }
  return *(char *)((longlong)param_1 + 0x71) == '\0';
}




void FUN_180005610(longlong param_1,longlong param_2,int param_3)

{
  longlong local_res8;
  longlong local_res10 [2];
  longlong local_res20;
  
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x38) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x48);
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_2 != 0) {
    local_res8 = 0;
    local_res10[0] = 0;
    local_res20 = 0;
    _get_stream_buffer_pointers(param_2,&local_res8,local_res10,&local_res20);
    *(longlong *)(param_1 + 0x18) = local_res8;
    *(longlong *)(param_1 + 0x20) = local_res8;
    *(longlong *)(param_1 + 0x38) = local_res10[0];
    *(longlong *)(param_1 + 0x40) = local_res10[0];
    *(longlong *)(param_1 + 0x50) = local_res20;
    *(longlong *)(param_1 + 0x58) = local_res20;
  }
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x74) = DAT_1800595e8;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}




longlong * FUN_1800056e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_1[0x10] == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    if (*(longlong **)param_1[3] == param_1 + 0xe) {
      lVar1 = param_1[0x12];
      lVar2 = param_1[0x11];
      *(longlong *)param_1[3] = lVar2;
      *(longlong *)param_1[7] = lVar2;
      *(int *)param_1[10] = (int)lVar1 - (int)lVar2;
    }
    bVar4 = FUN_180005540(param_1);
    plVar6 = (longlong *)0x0;
    if (bVar4) {
      plVar6 = param_1;
    }
    uVar5 = FUN_18000f088((int *)param_1[0x10]);
    plVar7 = (longlong *)0x0;
    if ((int)uVar5 == 0) {
      plVar7 = plVar6;
    }
  }
  param_1[0xb] = (longlong)param_1 + 0x4c;
  param_1[3] = (longlong)(param_1 + 1);
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  param_1[7] = (longlong)(param_1 + 5);
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  param_1[10] = (longlong)(param_1 + 9);
  param_1[4] = (longlong)(param_1 + 2);
  param_1[8] = (longlong)(param_1 + 6);
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[10] = 0;
  param_1[0x10] = 0;
  uVar3 = DAT_1800595e8;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = uVar3;
  return plVar7;
}




longlong FUN_1800057f0(longlong param_1)

{
  if (**(longlong **)(param_1 + 0x40) != 0) {
    return (longlong)**(int **)(param_1 + 0x58);
  }
  return 0;
}




longlong FUN_180005810(longlong param_1)

{
  if (**(longlong **)(param_1 + 0x38) != 0) {
    return (longlong)**(int **)(param_1 + 0x50);
  }
  return 0;
}




longlong * FUN_180005830(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  lVar1 = param_1[2];
  uVar2 = param_1[3];
  if (param_3 <= uVar2 - lVar1) {
    param_1[2] = lVar1 + param_3;
    plVar3 = param_1;
    if (0xf < uVar2) {
      plVar3 = (longlong *)*param_1;
    }
    FUN_1800217d0((undefined8 *)((longlong)plVar3 + lVar1),param_2,param_3);
    *(undefined1 *)((longlong)plVar3 + lVar1 + param_3) = 0;
    return param_1;
  }
  plVar3 = FUN_180005fc0(param_1,param_3,uVar2,param_2,param_3);
  return plVar3;
}




undefined8 * FUN_1800058b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




undefined8 * FUN_1800058e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  _Locimp *p_Var8;
  
  *param_1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::vftable;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = param_1 + 5;
  *puVar3 = 0;
  puVar4 = param_1 + 6;
  *puVar4 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar5 = param_1 + 9;
  *(undefined4 *)puVar5 = 0;
  puVar6 = (undefined4 *)((longlong)param_1 + 0x4c);
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar7 = FUN_180007d94(0x10);
  p_Var8 = FUN_18000728c('\x01');
  *(_Locimp **)(lVar7 + 8) = p_Var8;
  param_1[0xc] = lVar7;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[7] = puVar3;
  param_1[8] = puVar4;
  param_1[10] = puVar5;
  param_1[0xb] = puVar6;
  *puVar2 = 0;
  *puVar4 = 0;
  *puVar6 = 0;
  *puVar1 = 0;
  *puVar3 = 0;
  *(undefined4 *)puVar5 = 0;
  return param_1;
}




void FUN_1800059c0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  _Locimp *p_Var5;
  _Facet_base *p_Var6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  char *pcVar9;
  undefined4 local_48 [2];
  longlong *local_40;
  longlong local_38 [6];
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  lVar4 = FUN_180007d94(0x10);
  p_Var5 = FUN_18000728c('\x01');
  *(_Locimp **)(lVar4 + 8) = p_Var5;
  *(longlong *)(param_1 + 0x40) = lVar4;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  plVar1 = *(longlong **)(lVar4 + 8);
  local_40 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  p_Var6 = FUN_180005b20((longlong)local_48);
  uVar2 = (**(code **)(*(longlong *)p_Var6 + 0x40))(p_Var6,0x20);
  puVar7 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  *(undefined1 *)(param_1 + 0x58) = uVar2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar3 = *(uint *)(param_1 + 0x10) & 0x13 | 4;
    *(uint *)(param_1 + 0x10) = uVar3;
    uVar3 = uVar3 & *(uint *)(param_1 + 0x14);
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        pcVar9 = "ios_base::failbit set";
        if ((uVar3 & 2) == 0) {
          pcVar9 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar9 = "ios_base::badbit set";
      }
      puVar8 = (ulonglong *)FUN_1800038f0(local_48,1);
      FUN_180004140(local_38,(undefined8 *)pcVar9,puVar8);
                    /* WARNING: Subroutine does not return */
      FUN_180009ce8(local_38,&DAT_1800334b0);
    }
  }
  if (param_3 != '\0') {
    FUN_180007558(param_1);
  }
  return;
}




_Facet_base * FUN_180005b20(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  _Facet_base *p_Var5;
  _Facet_base *p_Var6;
  _Facet_base *local_res8;
  _Lockit local_res10 [8];
  _Facet_base *local_res18 [2];
  
  std::_Lockit::_Lockit(local_res10,0);
  p_Var5 = DAT_1800595f8;
  local_res18[0] = DAT_1800595f8;
  if (DAT_180057f88 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_res8,0);
    if (DAT_180057f88 == 0) {
      DAT_180057f70 = DAT_180057f70 + 1;
      DAT_180057f88 = (ulonglong)DAT_180057f70;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_res8);
  }
  uVar2 = DAT_180057f88;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = DAT_180057f88 * 8;
  if (DAT_180057f88 < *(ulonglong *)(lVar3 + 0x18)) {
    p_Var6 = *(_Facet_base **)(lVar4 + *(longlong *)(lVar3 + 0x10));
    if (p_Var6 != (_Facet_base *)0x0) goto LAB_180005c10;
  }
  else {
    p_Var6 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_180005bcc:
    if (p_Var6 != (_Facet_base *)0x0) goto LAB_180005c10;
  }
  else {
    lVar3 = FUN_180007284();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      p_Var6 = *(_Facet_base **)(lVar4 + *(longlong *)(lVar3 + 0x10));
      goto LAB_180005bcc;
    }
  }
  p_Var6 = p_Var5;
  if (p_Var5 == (_Facet_base *)0x0) {
    lVar4 = FUN_180003e30((longlong *)local_res18,param_1);
    p_Var6 = local_res18[0];
    if (lVar4 == -1) {
      FUN_180003d40();
      pcVar1 = (code *)swi(3);
      p_Var5 = (_Facet_base *)(*pcVar1)();
      return p_Var5;
    }
    local_res8 = local_res18[0];
    std::_Facet_Register(local_res18[0]);
    (**(code **)(*(longlong *)p_Var6 + 8))(p_Var6);
    DAT_1800595f8 = p_Var6;
  }
LAB_180005c10:
  std::_Lockit::~_Lockit(local_res10);
  return p_Var6;
}




_Facet_base * FUN_180005c30(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  _Facet_base *p_Var5;
  _Facet_base *p_Var6;
  _Facet_base *local_res8;
  _Lockit local_res10 [8];
  _Facet_base *local_res18 [2];
  
  std::_Lockit::_Lockit(local_res10,0);
  p_Var5 = DAT_1800595f0;
  local_res18[0] = DAT_1800595f0;
  if (DAT_180059880 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_res8,0);
    if (DAT_180059880 == 0) {
      DAT_180057f70 = DAT_180057f70 + 1;
      DAT_180059880 = (ulonglong)DAT_180057f70;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_res8);
  }
  uVar2 = DAT_180059880;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = DAT_180059880 * 8;
  if (DAT_180059880 < *(ulonglong *)(lVar3 + 0x18)) {
    p_Var6 = *(_Facet_base **)(lVar4 + *(longlong *)(lVar3 + 0x10));
    if (p_Var6 != (_Facet_base *)0x0) goto LAB_180005d20;
  }
  else {
    p_Var6 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_180005cdc:
    if (p_Var6 != (_Facet_base *)0x0) goto LAB_180005d20;
  }
  else {
    lVar3 = FUN_180007284();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      p_Var6 = *(_Facet_base **)(lVar4 + *(longlong *)(lVar3 + 0x10));
      goto LAB_180005cdc;
    }
  }
  p_Var6 = p_Var5;
  if (p_Var5 == (_Facet_base *)0x0) {
    lVar4 = FUN_180006170((longlong *)local_res18,param_1);
    p_Var6 = local_res18[0];
    if (lVar4 == -1) {
      FUN_180003d40();
      pcVar1 = (code *)swi(3);
      p_Var5 = (_Facet_base *)(*pcVar1)();
      return p_Var5;
    }
    local_res8 = local_res18[0];
    std::_Facet_Register(local_res18[0]);
    (**(code **)(*(longlong *)p_Var6 + 8))(p_Var6);
    DAT_1800595f0 = p_Var6;
  }
LAB_180005d20:
  std::_Lockit::~_Lockit(local_res10);
  return p_Var6;
}




void FUN_180005d40(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  param_1[3] = 0xf;
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    FUN_1800217d0(param_1,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 0xf;
  if (uVar2 < 0x8000000000000000) {
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    uVar1 = uVar2 + 1;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = (undefined8 *)FUN_180007d94(uVar1);
      }
      goto LAB_180005e04;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180003780();
    }
  }
  else {
    uVar3 = 0x8000000000000027;
    uVar2 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_180007d94(uVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180010fcc();
  }
  puVar5 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  puVar5[-1] = lVar4;
LAB_180005e04:
  *param_1 = puVar5;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  FUN_1800217d0(puVar5,param_2,param_3);
  *(undefined1 *)((longlong)puVar5 + param_3) = 0;
  return;
}




undefined8 *
FUN_180005e50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar2 = param_1[2];
  uVar7 = 0x7fffffffffffffff;
  if (uVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar3 = param_1[3];
  uVar6 = uVar2 + 1 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (0xfff < uVar1) {
      uVar6 = uVar7 + 0x28;
      if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
      goto LAB_180005eed;
    }
    if (uVar1 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)FUN_180007d94(uVar1);
    }
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_180005eed:
    lVar5 = FUN_180007d94(uVar6);
    if (lVar5 == 0) goto LAB_180005fa8;
    puVar9 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar9[-1] = lVar5;
  }
  param_1[2] = uVar2 + 1;
  param_1[3] = uVar7;
  if (uVar3 < 0x10) {
    FUN_1800217d0(puVar9,param_1,uVar2);
    *(undefined1 *)((longlong)puVar9 + uVar2) = param_4;
    *(undefined1 *)((longlong)puVar9 + uVar2 + 1) = 0;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
    FUN_1800217d0(puVar9,puVar4,uVar2);
    *(undefined1 *)((longlong)puVar9 + uVar2) = param_4;
    *(undefined1 *)((longlong)puVar9 + uVar2 + 1) = 0;
    puVar8 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar8 = (undefined8 *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar8)))) {
LAB_180005fa8:
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(puVar8);
  }
  *param_1 = puVar9;
  return param_1;
}




undefined8 *
FUN_180005fc0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar2 = param_1[2];
  uVar7 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180003820();
  }
  uVar6 = uVar2 + param_2 | 0xf;
  uVar3 = param_1[3];
  if ((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (0xfff < uVar1) {
      uVar6 = uVar7 + 0x28;
      if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180003780();
      }
      goto LAB_18000605e;
    }
    if (uVar1 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)FUN_180007d94(uVar1);
    }
  }
  else {
    uVar6 = 0x8000000000000027;
LAB_18000605e:
    lVar5 = FUN_180007d94(uVar6);
    if (lVar5 == 0) goto LAB_180006138;
    puVar9 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar9[-1] = lVar5;
  }
  param_1[2] = uVar2 + param_2;
  puVar8 = (undefined8 *)((longlong)puVar9 + uVar2);
  param_1[3] = uVar7;
  if (uVar3 < 0x10) {
    FUN_1800217d0(puVar9,param_1,uVar2);
    FUN_1800217d0(puVar8,param_4,param_5);
    *(undefined1 *)((longlong)puVar8 + param_5) = 0;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
    FUN_1800217d0(puVar9,puVar4,uVar2);
    FUN_1800217d0(puVar8,param_4,param_5);
    *(undefined1 *)((longlong)puVar8 + param_5) = 0;
    puVar8 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar8 = (undefined8 *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar8)))) {
LAB_180006138:
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(puVar8);
  }
  *param_1 = puVar9;
  return param_1;
}




undefined8 FUN_180006170(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  _Lockit local_88 [8];
  LPVOID local_80;
  undefined1 local_78;
  LPVOID local_70;
  undefined1 local_68;
  LPVOID local_60;
  undefined2 local_58;
  LPVOID local_50;
  undefined2 local_48;
  LPVOID local_40;
  undefined1 local_38;
  LPVOID local_30;
  undefined1 local_28;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined8 *)FUN_180007d94(0x10);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = *(char **)(lVar1 + 0x28);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)(lVar1 + 0x30);
      }
    }
    std::_Lockit::_Lockit(local_88,0);
    local_80 = (LPVOID)0x0;
    local_78 = 0;
    local_70 = (LPVOID)0x0;
    local_68 = 0;
    local_60 = (LPVOID)0x0;
    local_58 = 0;
    local_50 = (LPVOID)0x0;
    local_48 = 0;
    local_40 = (LPVOID)0x0;
    local_38 = 0;
    local_30 = (LPVOID)0x0;
    local_28 = 0;
    if (pcVar5 == (char *)0x0) {
      FUN_1800070cc(0x18002f3a0);
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_88,pcVar5);
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = std::codecvt<char,char,struct__Mbstatet>::vftable;
    *param_1 = (longlong)puVar3;
    std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_88);
    if (local_30 != (LPVOID)0x0) {
      FUN_180010434(local_30);
    }
    local_30 = (LPVOID)0x0;
    if (local_40 != (LPVOID)0x0) {
      FUN_180010434(local_40);
    }
    local_40 = (LPVOID)0x0;
    if (local_50 != (LPVOID)0x0) {
      FUN_180010434(local_50);
    }
    local_50 = (LPVOID)0x0;
    if (local_60 != (LPVOID)0x0) {
      FUN_180010434(local_60);
    }
    local_60 = (LPVOID)0x0;
    if (local_70 != (LPVOID)0x0) {
      FUN_180010434(local_70);
    }
    local_70 = (LPVOID)0x0;
    if (local_80 != (LPVOID)0x0) {
      FUN_180010434(local_80);
    }
    local_80 = (LPVOID)0x0;
    std::_Lockit::~_Lockit(local_88);
  }
  return 2;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1800062f0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  int *piVar13;
  ulonglong uVar14;
  uint local_2808 [9];
  uint auStack_27e4 [5];
  undefined8 uStack_27d0;
  int local_27c8 [496];
  undefined8 local_2008 [512];
  undefined4 local_1008 [1022];
  undefined8 uStack_10;
  
  uStack_10 = 0x180006300;
  uVar11 = 0x10;
  uStack_27d0 = *(undefined8 *)(param_3 + 0x18);
  puVar10 = (uint *)&uStack_27d0;
  piVar13 = local_27c8;
  do {
    uVar8 = *puVar10;
    uVar1 = puVar10[-0xd];
    iVar7 = ((uVar8 >> 0x13 | uVar8 << 0xd) ^ (uVar8 >> 0x11 | uVar8 << 0xf) ^ uVar8 >> 10) +
            ((uVar1 >> 0x12 | uVar1 << 0xe) ^ (uVar1 >> 7 | uVar1 << 0x19) ^ uVar1 >> 3) +
            puVar10[-0xe] + puVar10[-5] + uVar11;
    uVar11 = uVar11 + 1;
    *piVar13 = iVar7;
    puVar10 = puVar10 + 1;
    piVar13 = piVar13 + 1;
  } while (uVar11 < 0xa00);
  lVar6 = 0x1000;
  FUN_1800217d0(param_1,local_2008,0x1000);
  lVar9 = 0x200;
  puVar2 = (undefined4 *)((longlong)param_1 + 0x1004);
  puVar4 = local_1008 + 1;
  do {
    puVar2[-1] = puVar4[-1];
    *puVar2 = *puVar4;
    lVar9 = lVar9 + -1;
    puVar2 = puVar2 + 2;
    puVar4 = puVar4 + 2;
  } while (lVar9 != 0);
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  do {
    uVar8 = uVar11 & 0x3ff;
    uVar12 = (ulonglong)(uVar8 - 10 & 0x3ff);
    uVar14 = (ulonglong)(uVar8 - 0xc & 0x3ff);
    uVar3 = (ulonglong)(uVar8 + 1 & 0x3ff);
    uVar5 = (ulonglong)(uVar8 - 3 & 0x3ff);
    puVar10 = (uint *)((longlong)param_1 + (ulonglong)uVar8 * 4);
    if (uVar11 < 0x400) {
      uVar11 = *(uint *)((longlong)param_1 + uVar5 * 4);
      uVar8 = *(uint *)((longlong)param_1 + uVar3 * 4);
      *puVar10 = *puVar10 +
                 ((uVar11 >> 10 | uVar11 << 0x16) ^ (uVar8 >> 0x17 | uVar8 << 9)) +
                 *(int *)((longlong)param_1 + (ulonglong)((uVar11 ^ uVar8) & 0x3ff) * 4 + 0x1000) +
                 *(int *)((longlong)param_1 + uVar12 * 4);
      uVar11 = *(uint *)((longlong)param_1 + uVar14 * 4);
      uVar11 = *(int *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x18) * 4 + 0x1c00) +
               *(int *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4 + 0x1800) +
               *(int *)((longlong)param_1 + (ulonglong)(uVar11 >> 8 & 0xff) * 4 + 0x1400) +
               *(int *)((longlong)param_1 + (ulonglong)(uVar11 & 0xff) * 4 + 0x1000) ^ *puVar10;
    }
    else {
      uVar11 = *(uint *)((longlong)param_1 + uVar5 * 4 + 0x1000);
      uVar8 = *(uint *)((longlong)param_1 + uVar3 * 4 + 0x1000);
      puVar10[0x400] =
           puVar10[0x400] +
           ((uVar11 >> 10 | uVar11 << 0x16) ^ (uVar8 >> 0x17 | uVar8 << 9)) +
           *(int *)((longlong)param_1 + (ulonglong)((uVar11 ^ uVar8) & 0x3ff) * 4) +
           *(int *)((longlong)param_1 + uVar12 * 4 + 0x1000);
      uVar11 = *(uint *)((longlong)param_1 + uVar14 * 4 + 0x1000);
      uVar11 = *(int *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x18) * 4 + 0xc00) +
               *(int *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x10 & 0xff) * 4 + 0x800) +
               *(int *)((longlong)param_1 + (ulonglong)(uVar11 >> 8 & 0xff) * 4 + 0x400) +
               *(int *)((longlong)param_1 + (ulonglong)(uVar11 & 0xff) * 4) ^ puVar10[0x400];
    }
    *(uint *)((longlong)param_1 + 0x2004) = uVar11;
    uVar11 = *(int *)(param_1 + 0x400) + 1U & 0x7ff;
    *(uint *)(param_1 + 0x400) = uVar11;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}




void FUN_180006550(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar9 = &DAT_180034c70;
  do {
    uVar8 = *(uint *)(param_1 + 0x2000) & 0x3ff;
    uVar5 = (ulonglong)(uVar8 - 10 & 0x3ff);
    uVar6 = (ulonglong)(uVar8 - 0xc & 0x3ff);
    uVar4 = (ulonglong)(uVar8 + 1 & 0x3ff);
    uVar7 = (ulonglong)(uVar8 - 3 & 0x3ff);
    puVar1 = (uint *)(param_1 + (ulonglong)uVar8 * 4);
    if (*(uint *)(param_1 + 0x2000) < 0x400) {
      uVar8 = *(uint *)(param_1 + uVar7 * 4);
      uVar2 = *(uint *)(param_1 + uVar4 * 4);
      *puVar1 = *puVar1 + ((uVar8 >> 10 | uVar8 << 0x16) ^ (uVar2 >> 0x17 | uVar2 << 9)) +
                          *(int *)(param_1 + 0x1000 + (ulonglong)((uVar8 ^ uVar2) & 0x3ff) * 4) +
                          *(int *)(param_1 + uVar5 * 4);
      uVar8 = *(uint *)(param_1 + uVar6 * 4);
      uVar8 = *(int *)(param_1 + 0x1c00 + (ulonglong)(uVar8 >> 0x18) * 4) +
              *(int *)(param_1 + 0x1800 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) +
              *(int *)(param_1 + 0x1400 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) +
              *(int *)(param_1 + 0x1000 + (ulonglong)(uVar8 & 0xff) * 4) ^ *puVar1;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x1000 + uVar7 * 4);
      uVar2 = *(uint *)(param_1 + 0x1000 + uVar4 * 4);
      puVar1[0x400] =
           puVar1[0x400] +
           ((uVar8 >> 10 | uVar8 << 0x16) ^ (uVar2 >> 0x17 | uVar2 << 9)) +
           *(int *)(param_1 + (ulonglong)((uVar8 ^ uVar2) & 0x3ff) * 4) +
           *(int *)(param_1 + 0x1000 + uVar5 * 4);
      uVar8 = *(uint *)(param_1 + 0x1000 + uVar6 * 4);
      uVar8 = *(int *)(param_1 + 0xc00 + (ulonglong)(uVar8 >> 0x18) * 4) +
              *(int *)(param_1 + 0x800 + (ulonglong)(uVar8 >> 0x10 & 0xff) * 4) +
              *(int *)(param_1 + 0x400 + (ulonglong)(uVar8 >> 8 & 0xff) * 4) +
              *(int *)(param_1 + (ulonglong)(uVar8 & 0xff) * 4) ^ puVar1[0x400];
    }
    *(uint *)(param_1 + 0x2004) = uVar8;
    iVar3 = *(int *)(param_1 + 0x2000);
    *puVar9 = *puVar9 ^ uVar8;
    *(uint *)(param_1 + 0x2000) = iVar3 + 1U & 0x7ff;
    puVar1 = puVar9 + -0x6000d31a;
    puVar9 = puVar9 + 1;
  } while (puVar1 < (uint *)0x22801);
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl std::basic_ostream<char,struct std::char_traits<char>
   >::`scalar deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::basic_ostream<unsigned short,struct
   std::char_traits<unsigned short> >::`scalar deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::basic_ostream<wchar_t,struct
   std::char_traits<wchar_t> >::`scalar deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2019 Release */

ios_base * FID_conflict__scalar_deleting_destructor_(ios_base *param_1,uint param_2)

{
  ios_base *piVar1;
  
  piVar1 = param_1 + -0x10;
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0x10) =
       std::basic_ostream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0x14) =
       *(int *)(*(longlong *)piVar1 + 4) + -0x10;
  *(undefined ***)param_1 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(piVar1);
  }
  return piVar1;
}




longlong * FUN_180006760(longlong *param_1,undefined8 param_2,char param_3,int param_4)

{
  if (param_4 != 0) {
    *param_1 = (longlong)&DAT_18002f488;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[2] = (longlong)std::basic_ios<char,struct_std::char_traits<char>_>::vftable;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  FUN_1800059c0((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_2,param_3);
  return param_1;
}




void FUN_180006800(longlong param_1,uint param_2)

{
  FID_conflict__scalar_deleting_destructor_((ios_base *)(param_1 - *(int *)(param_1 + -4)),param_2);
  return;
}




longlong * FUN_180006810(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  DWORD flNewProtect;
  LPVOID lpAddress;
  HANDLE pvVar5;
  longlong *lpMem;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [32];
  HMODULE hModule;
  LPVOID pvVar8;
  FARPROC pFVar9;
  code *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  LPCSTR lpProcName;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong *puVar19;
  SIZE_T dwSize;
  int iVar20;
  longlong lVar21;
  undefined8 local_res10;
  
  if ((((short)DAT_180034c70 != 0x5a4d) ||
      (lVar15 = (longlong)DAT_180034cac, *(int *)((longlong)&DAT_180034c70 + lVar15) != 0x4550)) ||
     ((local_res10 = param_2,
      lpAddress = VirtualAlloc(*(LPVOID *)(lVar15 + 0x180034ca0),
                               (ulonglong)*(uint *)(lVar15 + 0x180034cc0),0x2000,4),
      lpAddress == (LPVOID)0x0 &&
      (lpAddress = VirtualAlloc((LPVOID)0x0,(ulonglong)*(uint *)(lVar15 + 0x180034cc0),0x2000,4),
      lpAddress == (LPVOID)0x0)))) {
    return (longlong *)0x0;
  }
  pvVar5 = GetProcessHeap();
  lpMem = HeapAlloc(pvVar5,0,0x20);
  iVar20 = 0;
  lpMem[1] = (longlong)lpAddress;
  lpMem[3] = 0;
  lpMem[2] = 0;
  VirtualAlloc(lpAddress,(ulonglong)*(uint *)(lVar15 + 0x180034cc0),0x1000,4);
  puVar6 = VirtualAlloc(lpAddress,(ulonglong)*(uint *)(lVar15 + 0x180034cc4),0x1000,4);
  FUN_1800217d0(puVar6,(undefined8 *)&DAT_180034c70,
                (ulonglong)(uint)(*(int *)(lVar15 + 0x180034cc4) + DAT_180034cac));
  lVar11 = (longlong)DAT_180034cac;
  *lpMem = lVar11 + (longlong)puVar6;
  *(LPVOID *)(lVar11 + (longlong)puVar6 + 0x30) = lpAddress;
  lVar11 = *lpMem;
  lVar21 = lpMem[1];
  if (*(short *)(lVar11 + 6) != 0) {
    puVar18 = (uint *)((ulonglong)*(ushort *)(lVar11 + 0x14) + 0x28 + lVar11);
    do {
      if (*puVar18 == 0) {
        iVar3 = *(int *)(lVar15 + 0x180034ca8);
        if (0 < iVar3) {
          pauVar7 = VirtualAlloc((LPVOID)((ulonglong)puVar18[-1] + lVar21),(longlong)iVar3,0x1000,4)
          ;
          puVar18[-2] = (uint)pauVar7;
          FUN_180021e70(pauVar7,0,(longlong)iVar3);
        }
      }
      else {
        puVar6 = VirtualAlloc((LPVOID)((ulonglong)puVar18[-1] + lVar21),(ulonglong)*puVar18,0x1000,4
                             );
        FUN_1800217d0(puVar6,(undefined8 *)((longlong)&DAT_180034c70 + (ulonglong)puVar18[1]),
                      (ulonglong)*puVar18);
        puVar18[-2] = (uint)puVar6;
      }
      lVar11 = *lpMem;
      iVar20 = iVar20 + 1;
      puVar18 = puVar18 + 10;
    } while (iVar20 < (int)(uint)*(ushort *)(lVar11 + 6));
    lVar21 = lpMem[1];
  }
  uVar14 = 0;
  lVar15 = (longlong)lpAddress - *(longlong *)(lVar15 + 0x180034ca0);
  if ((lVar15 != 0) && (*(int *)(lVar11 + 0xb4) != 0)) {
    puVar18 = (uint *)((ulonglong)*(uint *)(lVar11 + 0xb0) + lVar21);
    uVar17 = *puVar18;
    while (uVar17 != 0) {
      uVar12 = (ulonglong)puVar18[1];
      puVar13 = puVar18 + 2;
      uVar16 = uVar14;
      if ((uVar12 - 8 & 0xfffffffffffffffe) != 0) {
        do {
          uVar4 = (ushort)*puVar13 >> 0xc;
          uVar12 = (ulonglong)((ushort)*puVar13 & 0xfff);
          if (uVar4 == 3) {
            piVar2 = (int *)(uVar12 + (ulonglong)uVar17 + lVar21);
            *piVar2 = *piVar2 + (int)lVar15;
          }
          else if (uVar4 == 10) {
            plVar1 = (longlong *)(uVar12 + (ulonglong)uVar17 + lVar21);
            *plVar1 = *plVar1 + lVar15;
          }
          uVar12 = (ulonglong)puVar18[1];
          uVar16 = (ulonglong)((int)uVar16 + 1);
          puVar13 = (uint *)((longlong)puVar13 + 2);
        } while (uVar16 < uVar12 - 8 >> 1);
      }
      puVar18 = (uint *)((longlong)puVar18 + uVar12);
      uVar17 = *puVar18;
    }
  }
  lVar15 = lpMem[1];
  if (*(int *)(*lpMem + 0x94) != 0) {
    puVar18 = (uint *)((ulonglong)*(uint *)(*lpMem + 0x90) + lVar15);
    iVar20 = IsBadReadPtr(puVar18,0x14);
    while ((iVar20 == 0 && (puVar18[3] != 0))) {
      hModule = LoadLibraryA((LPCSTR)(lVar15 + (ulonglong)puVar18[3]));
      if (hModule == (HMODULE)0xffffffffffffffff) goto LAB_180006c9e;
      pvVar8 = _realloc_base((LPVOID)lpMem[2],(longlong)(int)lpMem[3] * 8 + 8);
      lpMem[2] = (longlong)pvVar8;
      if (pvVar8 == (LPVOID)0x0) goto LAB_180006c9e;
      *(HMODULE *)((longlong)pvVar8 + (longlong)(int)lpMem[3] * 8) = hModule;
      *(int *)(lpMem + 3) = (int)lpMem[3] + 1;
      uVar17 = *puVar18;
      if (uVar17 == 0) {
        uVar17 = puVar18[4];
      }
      puVar19 = (ulonglong *)((ulonglong)uVar17 + lVar15);
      uVar16 = *puVar19;
      if (uVar16 != 0) {
        puVar6 = (undefined8 *)((ulonglong)puVar18[4] + lVar15);
        do {
          if ((longlong)uVar16 < 0) {
            lpProcName = (LPCSTR)(uVar16 & 0xffff);
          }
          else {
            lpProcName = (LPCSTR)(lVar15 + 2 + uVar16);
          }
          pFVar9 = GetProcAddress(hModule,lpProcName);
          *puVar6 = pFVar9;
          if (pFVar9 == (FARPROC)0x0) goto LAB_180006c9e;
          uVar16 = puVar19[1];
          puVar19 = puVar19 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar16 != 0);
      }
      puVar18 = puVar18 + 5;
      iVar20 = IsBadReadPtr(puVar18,0x14);
    }
  }
  lVar15 = *lpMem;
  uVar16 = *(ulonglong *)(lVar15 + 0x30) & 0xffffffff00000000;
  if (*(short *)(lVar15 + 6) != 0) {
    puVar18 = (uint *)((ulonglong)*(ushort *)(lVar15 + 0x14) + 0x28 + lVar15);
    uVar12 = uVar14;
    do {
      uVar17 = puVar18[5];
      dwSize = (SIZE_T)*puVar18;
      if ((uVar17 >> 0x19 & 1) == 0) {
        lVar11 = (ulonglong)(uVar17 >> 0x1f) +
                 ((ulonglong)(uVar17 >> 0x1e & 1) + (ulonglong)(uVar17 >> 0x1d & 1) * 2) * 2;
        flNewProtect = *(uint *)(&DAT_18002f430 + lVar11 * 4) | 0x200;
        if ((uVar17 >> 0x1a & 1) == 0) {
          flNewProtect = *(DWORD *)(&DAT_18002f430 + lVar11 * 4);
        }
        if (*puVar18 == 0) {
          if ((uVar17 & 0x40) == 0) {
            if (-1 < (char)uVar17) goto LAB_180006c3f;
            uVar17 = *(uint *)(lVar15 + 0x24);
          }
          else {
            uVar17 = *(uint *)(lVar15 + 0x20);
          }
          dwSize = (SIZE_T)uVar17;
          if (uVar17 == 0) goto LAB_180006c3f;
        }
        VirtualProtect((LPVOID)(puVar18[-2] | uVar16),dwSize,flNewProtect,(PDWORD)&local_res10);
      }
      else {
        VirtualFree((LPVOID)(puVar18[-2] | uVar16),dwSize,0x4000);
      }
LAB_180006c3f:
      lVar15 = *lpMem;
      uVar17 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar17;
      puVar18 = puVar18 + 10;
    } while ((int)uVar17 < (int)(uint)*(ushort *)(lVar15 + 6));
  }
  if (*(uint *)(lVar15 + 0x28) != 0) {
    pcVar10 = (code *)((ulonglong)*(uint *)(lVar15 + 0x28) + (longlong)lpAddress);
    if ((pcVar10 == (code *)0x0) || (iVar20 = (*pcVar10)(lpAddress,1), iVar20 == 0)) {
LAB_180006c9e:
      if (*(int *)((longlong)lpMem + 0x1c) != 0) {
        (*(code *)((ulonglong)*(uint *)(*lpMem + 0x28) + lpMem[1]))(lpMem[1],0,0);
        *(undefined4 *)((longlong)lpMem + 0x1c) = 0;
      }
      if (lpMem[2] != 0) {
        uVar16 = uVar14;
        if (0 < (int)lpMem[3]) {
          do {
            if (*(HMODULE *)(uVar14 + lpMem[2]) != (HMODULE)0xffffffffffffffff) {
              FreeLibrary(*(HMODULE *)(uVar14 + lpMem[2]));
            }
            uVar17 = (int)uVar16 + 1;
            uVar14 = uVar14 + 8;
            uVar16 = (ulonglong)uVar17;
          } while ((int)uVar17 < (int)lpMem[3]);
        }
        FUN_180010434((LPVOID)lpMem[2]);
      }
      if ((LPVOID)lpMem[1] != (LPVOID)0x0) {
        VirtualFree((LPVOID)lpMem[1],0,0x8000);
      }
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,lpMem);
      lpMem = (longlong *)0x0;
    }
    else {
      *(undefined4 *)((longlong)lpMem + 0x1c) = 1;
    }
  }
  return lpMem;
}




undefined8 FUN_180006d40(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_180006d60(param_1);
  }
  return 0;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180006d60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 local_res8 [4];
  undefined4 local_2048;
  undefined4 uStack_2044;
  undefined4 uStack_2040;
  undefined4 uStack_203c;
  undefined4 local_2038;
  undefined4 uStack_2034;
  undefined4 uStack_2030;
  undefined4 uStack_202c;
  undefined1 local_2028;
  undefined8 local_2018 [1025];
  undefined8 uStack_10;
  
  uStack_10 = 0x180006d70;
  local_res8[0] = param_1;
  FUN_180021e70((undefined1 (*) [32])local_2018,0,0x2008);
  local_2028 = DAT_18002f4f0;
  local_2048 = _DAT_18002f4d0;
  uStack_2044 = _UNK_18002f4d4;
  uStack_2040 = _UNK_18002f4d8;
  uStack_203c = _UNK_18002f4dc;
  iVar3 = ((int)Sleep_exref - (int)TerminateProcess_exref) + -9;
  local_2038 = _DAT_18002f4e0;
  uStack_2034 = _UNK_18002f4e4;
  uStack_2030 = _UNK_18002f4e8;
  uStack_202c = _UNK_18002f4ec;
  VirtualProtect((LPVOID)CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref),9,0x40,
                 (PDWORD)local_res8);
  *(undefined1 *)CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) = 0x48;
  *(undefined1 *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 1) = 0x83;
  *(undefined1 *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 2) = 0xc9;
  *(undefined1 *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 3) = 0xff;
  *(undefined1 *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 4) = 0xe9;
  *(char *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 5) = (char)iVar3;
  *(char *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 6) =
       (char)((uint)iVar3 >> 8);
  *(char *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 7) =
       (char)((uint)iVar3 >> 0x10);
  *(char *)(CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref) + 8) =
       (char)((uint)iVar3 >> 0x18);
  VirtualProtect((LPVOID)CONCAT44(TerminateProcess_exref._4_4_,(int)TerminateProcess_exref),9,
                 (DWORD)local_res8[0],(PDWORD)local_res8);
  puVar2 = &local_2048;
  FUN_1800062f0(local_2018,puVar2,(longlong)&local_2048);
  puVar1 = local_2018;
  FUN_180006550((longlong)puVar1);
  FUN_180006810(puVar1,puVar2);
  return 0;
}




/* Library Function - Single Match
    public: __cdecl std::_Init_locks::_Init_locks(void) __ptr64
   
   Library: Visual Studio 2019 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_180034000 = DAT_180034000 + 1;
  UNLOCK();
  if (DAT_180034000 == 0) {
    puVar1 = (undefined4 *)&DAT_180057e30;
    do {
      FUN_180007a30(puVar1);
      puVar1 = puVar1 + 10;
    } while (puVar1 != &DAT_180057f70);
  }
  return this;
}




/* Library Function - Single Match
    public: __cdecl std::_Lockit::_Lockit(int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1)

{
  *(int *)this = param_1;
  if (param_1 == 0) {
    _lock_locales();
  }
  else if (param_1 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180057e30 + (longlong)param_1 * 0x28));
  }
  return this;
}




void FUN_180006f10(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_180034000 + -1;
  UNLOCK();
  iVar1 = DAT_180034000 + -1;
  DAT_180034000 = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_180057e30;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_180057f70);
  }
  return;
}




/* Library Function - Single Match
    public: __cdecl std::_Lockit::~_Lockit(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall std::_Lockit::~_Lockit(_Lockit *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    FUN_1800116bc();
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180057e30 + (longlong)iVar1 * 0x28));
  }
  return;
}




undefined8 * FUN_180006f80(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined8 * FUN_180006fa0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_180006fdc(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_180007024(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::logic_error::vftable;
  return param_1;
}




undefined8 * FUN_180007060(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}




void FUN_1800070a8(longlong param_1)

{
  longlong local_28 [5];
  
  FUN_180006fdc(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_180009ce8(local_28,&DAT_180033330);
}




void FUN_1800070cc(longlong param_1)

{
  longlong local_28 [5];
  
  FUN_180007060(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_180009ce8(local_28,&DAT_180033398);
}




/* Library Function - Single Match
    private: __cdecl std::locale::_Locimp::_Locimp(bool) __ptr64
   
   Library: Visual Studio 2019 Release */

_Locimp * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = 1;
  this[0x24] = (_Locimp)param_1;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (_Locimp)0x0;
  pcVar1 = "*";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (pcVar3[1] != '\0');
  puVar2 = _malloc_base((ulonglong)(pcVar3 + -0x18002f47e));
  *(undefined8 **)(this + 0x28) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1800217d0(puVar2,(undefined8 *)&DAT_18002f480,(ulonglong)(pcVar3 + -0x18002f47e));
  }
  return this;
}




/* Library Function - Single Match
    public: class std::_Yarn<char> & __ptr64 __cdecl std::_Yarn<char>::operator=(char const *
   __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

_Yarn<char> * __thiscall std::_Yarn<char>::operator=(_Yarn<char> *this,char *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)this;
  if (pcVar3 != param_1) {
    if (pcVar3 != (char *)0x0) {
      FUN_180010434(pcVar3);
    }
    *(undefined8 *)this = 0;
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      pcVar3 = param_1;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      puVar2 = _malloc_base((ulonglong)(pcVar3 + (1 - (longlong)param_1)));
      *(undefined8 **)this = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_1800217d0(puVar2,(undefined8 *)param_1,(ulonglong)(pcVar3 + (1 - (longlong)param_1)));
      }
    }
  }
  return this;
}




/* Library Function - Single Match
    protected: virtual void * __ptr64 __cdecl std::locale::_Locimp::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2019 Release */

void * __thiscall std::locale::_Locimp::_scalar_deleting_destructor_(_Locimp *this,uint param_1)

{
  *(undefined ***)this = vftable;
  FUN_180007380((longlong)this);
  if (*(LPVOID *)(this + 0x28) != (LPVOID)0x0) {
    FUN_180010434(*(LPVOID *)(this + 0x28));
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = _Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    thunk_FUN_180010434(this);
  }
  return this;
}




/* Library Function - Single Match
    void __cdecl std::_Facet_Register(class std::_Facet_base * __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Facet_Register(_Facet_base *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180007d94(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_180057fb8;
    puVar1[1] = param_1;
  }
  DAT_180057fb8 = puVar1;
  return;
}




undefined8 FUN_180007284(void)

{
  return DAT_180057fc8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Locimp * FUN_18000728c(char param_1)

{
  undefined *puVar1;
  _Locimp *p_Var2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  _Lockit local_res8 [8];
  
  std::_Lockit::_Lockit(local_res8,0);
  p_Var2 = DAT_180057fc8;
  if (DAT_180057fc8 == (_Locimp *)0x0) {
    p_Var2 = std::locale::_Locimp::_New_Locimp(false);
    FUN_1800074b4(p_Var2);
    *(undefined4 *)(p_Var2 + 0x20) = 0x3f;
    puVar1 = *(undefined **)(p_Var2 + 0x28);
    if (puVar1 != &DAT_180025648) {
      if (puVar1 != (undefined *)0x0) {
        FUN_180010434(puVar1);
      }
      *(undefined8 *)(p_Var2 + 0x28) = 0;
      pcVar4 = "C";
      do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
      } while (*pcVar4 != '\0');
      pcVar5 = pcVar5 + -0x180025646;
      puVar3 = _malloc_base((ulonglong)pcVar5);
      *(undefined8 **)(p_Var2 + 0x28) = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_1800217d0(puVar3,(undefined8 *)&DAT_180025648,(ulonglong)pcVar5);
      }
    }
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(p_Var2);
    _DAT_180057f78 = p_Var2;
    DAT_180057fa8 = p_Var2;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(p_Var2);
  }
  std::_Lockit::~_Lockit(local_res8);
  return p_Var2;
}




void FUN_180007380(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  _Lockit local_res8 [8];
  
  std::_Lockit::_Lockit(local_res8,0);
  lVar2 = *(longlong *)(param_1 + 0x18);
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar2 * 8) != 0) {
      lVar1 = (*(code *)PTR__guard_dispatch_icall_1800252e0)();
      if (lVar1 != 0) {
        (*(code *)PTR__guard_dispatch_icall_1800252e0)(lVar1,1);
      }
    }
  }
  FUN_180010434(*(LPVOID *)(param_1 + 0x10));
  std::_Lockit::~_Lockit(local_res8);
  return;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_ctor(class std::_Locinfo * __ptr64,char
   const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Locinfo::_Locinfo_ctor(_Locinfo *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = setlocale(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  _Yarn<char>::operator=((_Yarn<char> *)(param_1 + 0x48),pcVar1);
  pcVar1 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar1 = setlocale(0,param_2);
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "*";
  }
  _Yarn<char>::operator=((_Yarn<char> *)(param_1 + 0x58),pcVar1);
  return;
}




/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_dtor(class std::_Locinfo * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1)

{
  if (*(char **)(param_1 + 0x48) != (char *)0x0) {
    setlocale(0,*(char **)(param_1 + 0x48));
  }
  return;
}




/* Library Function - Single Match
    private: static class std::locale::_Locimp * __ptr64 __cdecl
   std::locale::_Locimp::_New_Locimp(bool)
   
   Library: Visual Studio 2019 Release */

_Locimp * __cdecl std::locale::_Locimp::_New_Locimp(bool param_1)

{
  _Locimp *this;
  _Locimp *p_Var1;
  
  this = (_Locimp *)FUN_180007d94(0x38);
  p_Var1 = (_Locimp *)0x0;
  if (this != (_Locimp *)0x0) {
    p_Var1 = (_Locimp *)_Locimp(this,param_1);
  }
  return p_Var1;
}




void FUN_1800074b4(undefined8 param_1)

{
  if (DAT_180057fd0 == '\0') {
    DAT_180057fd0 = '\x01';
    FUN_180007a58(FUN_180007524);
  }
  DAT_180057fc8 = param_1;
  return;
}




/* Library Function - Single Match
    _Deletegloballocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _Deletegloballocale(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1800252e0)(lVar1,1);
    }
  }
  return;
}




void FUN_180007524(void)

{
  _Lockit local_res8 [32];
  
  std::_Lockit::_Lockit(local_res8,0);
  _Deletegloballocale(&DAT_180057fc8);
  DAT_180057fc8 = 0;
  std::_Lockit::~_Lockit(local_res8);
  return;
}




void FUN_180007558(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  _Lockit local_res8 [32];
  
  std::_Lockit::_Lockit(local_res8,2);
  *(undefined8 *)(param_1 + 8) = 1;
  uVar2 = 1;
  do {
    lVar1 = *(longlong *)(uVar2 * 8 + 0x180057ff0);
    if ((lVar1 == 0) || (lVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(ulonglong *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_180058040)[uVar2] = (&DAT_180058040)[uVar2] + '\x01';
  *(longlong *)(uVar2 * 8 + 0x180057ff0) = param_1;
  std::_Lockit::~_Lockit(local_res8);
  return;
}




/* Library Function - Single Match
    private: static void __cdecl std::ios_base::_Ios_base_dtor(class std::ios_base * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 == 0) ||
     ((&DAT_180058040)[lVar2] = (&DAT_180058040)[lVar2] + -1, (char)(&DAT_180058040)[lVar2] < '\x01'
     )) {
    _Tidy(param_1);
    pvVar1 = *(LPVOID *)(param_1 + 0x40);
    if (pvVar1 != (LPVOID)0x0) {
      if (*(longlong *)((longlong)pvVar1 + 8) != 0) {
        lVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e0)();
        if (lVar2 != 0) {
          (*(code *)PTR__guard_dispatch_icall_1800252e0)(lVar2,1);
        }
      }
      thunk_FUN_180010434(pvVar1);
    }
  }
  return;
}




/* Library Function - Single Match
    private: void __cdecl std::ios_base::_Tidy(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall std::ios_base::_Tidy(ios_base *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar2 = *(undefined8 **)(this + 0x38); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(0,this,*(undefined4 *)(puVar2 + 1));
  }
  puVar2 = *(undefined8 **)(this + 0x30);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_180010434(puVar2);
    puVar2 = puVar1;
  }
  *(undefined8 *)(this + 0x30) = 0;
  puVar2 = *(undefined8 **)(this + 0x38);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_180010434(puVar2);
    puVar2 = puVar1;
  }
  *(undefined8 *)(this + 0x38) = 0;
  return;
}




char * FUN_1800076c8(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_180025900;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != (int *)"success");
  return "unknown error";
}




undefined4 * FUN_1800076f0(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar2 = FUN_180011a2c();
  *param_1 = uVar2;
  pvVar3 = _calloc_base(0x100,2);
  *(LPVOID *)(param_1 + 2) = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
    uVar5 = FUN_1800119fc();
    param_1[4] = 0;
    *(undefined8 *)(param_1 + 2) = uVar5;
  }
  else {
    puVar4 = (undefined8 *)FUN_1800119fc();
    lVar8 = 4;
    puVar7 = *(undefined8 **)(param_1 + 2);
    do {
      uVar5 = puVar4[1];
      *puVar7 = *puVar4;
      puVar7[1] = uVar5;
      uVar5 = puVar4[3];
      puVar7[2] = puVar4[2];
      puVar7[3] = uVar5;
      uVar5 = puVar4[5];
      puVar7[4] = puVar4[4];
      puVar7[5] = uVar5;
      uVar5 = puVar4[7];
      puVar7[6] = puVar4[6];
      puVar7[7] = uVar5;
      uVar5 = puVar4[9];
      puVar7[8] = puVar4[8];
      puVar7[9] = uVar5;
      uVar5 = puVar4[0xb];
      puVar7[10] = puVar4[10];
      puVar7[0xb] = uVar5;
      uVar5 = puVar4[0xd];
      puVar7[0xc] = puVar4[0xc];
      puVar7[0xd] = uVar5;
      puVar1 = puVar4 + 0xe;
      uVar5 = puVar4[0xf];
      puVar4 = puVar4 + 0x10;
      puVar7[0xe] = *puVar1;
      puVar7[0xf] = uVar5;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 0x10;
    } while (lVar8 != 0);
    param_1[4] = 1;
  }
  lVar8 = FUN_180011a5c();
  pwVar6 = *(wchar_t **)(lVar8 + 8);
  *(wchar_t **)(param_1 + 6) = pwVar6;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = FUN_1800120fc(pwVar6);
    *(wchar_t **)(param_1 + 6) = pwVar6;
  }
  return param_1;
}




ulonglong FUN_1800077b0(uint param_1,UINT *param_2)

{
  UINT UVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  LPCWSTR pWVar7;
  char local_res10;
  char local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 local_res19;
  
  uVar6 = (ulonglong)(int)param_1;
  if (param_2 == (UINT *)0x0) {
    lVar3 = FUN_180011a5c();
    pWVar7 = *(LPCWSTR *)(lVar3 + 0x10);
    UVar1 = FUN_180011a2c();
  }
  else {
    pWVar7 = *(LPCWSTR *)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (pWVar7 == (LPCWSTR)0x0) {
    if (param_1 - 0x41 < 0x1a) {
      uVar6 = (ulonglong)(param_1 + 0x20);
    }
    goto LAB_1800077ef;
  }
  if (param_1 < 0x100) {
    if (param_2 == (UINT *)0x0) {
      iVar2 = isupper(param_1);
      if (iVar2 == 0) goto LAB_1800077ef;
      goto LAB_18000785f;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 2) + uVar6 * 2) & 1) == 0) goto LAB_1800077ef;
LAB_180007820:
    uVar5 = (uint)(int)*(short *)(*(longlong *)(param_2 + 2) + ((longlong)uVar6 >> 8 & 0xffU) * 2)
            >> 0xf & 1;
  }
  else {
    if (param_2 != (UINT *)0x0) goto LAB_180007820;
LAB_18000785f:
    lVar3 = FUN_1800119fc();
    uVar5 = *(ushort *)(lVar3 + (ulonglong)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
  }
  if (uVar5 == 0) {
    iVar2 = 1;
    local_res11 = '\0';
    local_res10 = (char)param_1;
  }
  else {
    iVar2 = 2;
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  uVar4 = FUN_180007a94(pWVar7,0x100,&local_res10,iVar2,&local_res18,3,UVar1,1);
  if ((int)uVar4 != 0) {
    if ((int)uVar4 == 1) {
      return (ulonglong)local_res18;
    }
    return (ulonglong)CONCAT11(local_res18,local_res19);
  }
LAB_1800077ef:
  return uVar6 & 0xffffffff;
}




ulonglong FUN_1800078e4(uint param_1,UINT *param_2)

{
  UINT UVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  LPCWSTR pWVar8;
  char local_res10;
  char local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 local_res19;
  
  uVar6 = (ulonglong)(int)param_1;
  if (param_2 == (UINT *)0x0) {
    lVar3 = FUN_180011a5c();
    pWVar8 = *(LPCWSTR *)(lVar3 + 0x10);
    UVar1 = FUN_180011a2c();
  }
  else {
    pWVar8 = *(LPCWSTR *)(param_2 + 6);
    UVar1 = *param_2;
  }
  if (pWVar8 == (LPCWSTR)0x0) {
    if (param_1 - 0x61 < 0x1a) {
      uVar6 = (ulonglong)(param_1 - 0x20);
    }
    goto LAB_18000792b;
  }
  iVar7 = 2;
  if (param_1 < 0x100) {
    if (param_2 == (UINT *)0x0) {
      iVar2 = islower(param_1);
      if (iVar2 == 0) goto LAB_18000792b;
      goto LAB_18000799a;
    }
    if ((*(byte *)(*(longlong *)(param_2 + 2) + uVar6 * 2) & 2) == 0) goto LAB_18000792b;
LAB_180007961:
    uVar5 = (uint)(int)*(short *)(*(longlong *)(param_2 + 2) + ((longlong)uVar6 >> 8 & 0xffU) * 2)
            >> 0xf & 1;
  }
  else {
    if (param_2 != (UINT *)0x0) goto LAB_180007961;
LAB_18000799a:
    lVar3 = FUN_1800119fc();
    uVar5 = *(ushort *)(lVar3 + (ulonglong)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
  }
  if (uVar5 == 0) {
    iVar7 = 1;
    local_res11 = '\0';
    local_res10 = (char)param_1;
  }
  else {
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  uVar4 = FUN_180007a94(pWVar8,0x200,&local_res10,iVar7,&local_res18,3,UVar1,1);
  if ((int)uVar4 != 0) {
    if ((int)uVar4 == 1) {
      return (ulonglong)local_res18;
    }
    return (ulonglong)CONCAT11(local_res18,local_res19);
  }
LAB_18000792b:
  return uVar6 & 0xffffffff;
}




void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000180007a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}




void FUN_180007a30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180007a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSectionEx(param_1,4000,0);
  return;
}




void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000180007a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}




void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000180007a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}




undefined * FUN_180007a50(void)

{
  return &DAT_180058168;
}




void FUN_180007a58(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_180034008 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_180034008 = DAT_180034008 + -1;
    *(PVOID *)(&DAT_1800581e0 + DAT_180034008 * 8) = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180007a94(LPCWSTR param_1,uint param_2,char *param_3,int param_4,undefined8 param_5,
                       int param_6,UINT param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  LPCWSTR lpSrcStr;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_78 [32];
  undefined4 local_28 [2];
  ulonglong local_20;
  
  puVar10 = auStackY_78;
  puVar12 = auStackY_78;
  puVar11 = auStackY_78;
  local_20 = DAT_180034040 ^ (ulonglong)local_28;
  iVar3 = param_4;
  if (0 < param_4) {
    sVar5 = __strncnt(param_3,(longlong)param_4);
    iVar2 = (int)sVar5;
    iVar3 = iVar2 + 1;
    if (param_4 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  iVar2 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,iVar3,(LPWSTR)0x0,0);
  uVar6 = CONCAT44(extraout_var,iVar2);
  if (iVar2 == 0) goto LAB_180007d64;
  uVar6 = (longlong)iVar2 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
    lpSrcStr = (LPCWSTR)0x0;
LAB_180007d4a:
    uVar6 = 0;
LAB_180007d4c:
    puVar12 = puVar11;
    if (lpSrcStr != (LPCWSTR)0x0) goto LAB_180007d51;
  }
  else {
    if (uVar6 < 0x401) {
      uVar9 = uVar6 + 0xf;
      if (uVar9 <= uVar6) {
        uVar9 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar9 & 0xfffffffffffffff0);
      puVar11 = auStackY_78 + lVar1;
      puVar10 = auStackY_78 + lVar1;
      puVar8 = (undefined4 *)((longlong)local_28 + lVar1);
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar8 == (undefined4 *)0x0) goto LAB_180007d4a;
      *puVar8 = 0xcccc;
LAB_180007b89:
      lpSrcStr = (LPCWSTR)(puVar8 + 4);
      puVar11 = puVar10;
    }
    else {
      puVar8 = _malloc_base(uVar6);
      lpSrcStr = (LPCWSTR)0x0;
      puVar11 = auStackY_78;
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0xdddd;
        goto LAB_180007b89;
      }
    }
    if (lpSrcStr == (LPCWSTR)0x0) goto LAB_180007d4a;
    *(int *)(puVar11 + 0x28) = iVar2;
    *(LPCWSTR *)(puVar11 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar11 + -8) = 0x180007bb4;
    iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                                *(int *)(puVar11 + 0x28));
    if (iVar3 == 0) goto LAB_180007d4a;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined4 *)(puVar11 + 0x28) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + -8) = 0x180007beb;
    iVar3 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar11 + 0x20),
                          *(int *)(puVar11 + 0x28),*(LPNLSVERSIONINFO *)(puVar11 + 0x30),
                          *(LPVOID *)(puVar11 + 0x38),*(LPARAM *)(puVar11 + 0x40));
    uVar6 = (ulonglong)iVar3;
    if (iVar3 == 0) goto LAB_180007d4a;
    puVar12 = puVar11;
    if ((param_2 & 0x400) != 0) {
      if (param_6 == 0) goto LAB_180007d51;
      if (iVar3 <= param_6) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        *(int *)(puVar11 + 0x28) = param_6;
        *(undefined8 *)(puVar11 + 0x20) = param_5;
        *(undefined8 *)(puVar11 + -8) = 0x180007c44;
        iVar3 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar11 + 0x20),
                              *(int *)(puVar11 + 0x28),*(LPNLSVERSIONINFO *)(puVar11 + 0x30),
                              *(LPVOID *)(puVar11 + 0x38),*(LPARAM *)(puVar11 + 0x40));
        if (iVar3 != 0) goto LAB_180007d51;
      }
      goto LAB_180007d4c;
    }
    uVar9 = uVar6 * 2 + 0x10;
    uVar9 = -(ulonglong)(uVar6 * 2 < uVar9) & uVar9;
    if (uVar9 != 0) {
      if (uVar9 < 0x401) {
        uVar7 = uVar9 + 0xf;
        if (uVar7 <= uVar9) {
          uVar7 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar11 + -8) = 0x180007c8b;
        lVar1 = -(uVar7 & 0xfffffffffffffff0);
        puVar12 = puVar11 + lVar1;
        puVar8 = (undefined4 *)(puVar11 + lVar1 + 0x50);
        if (puVar8 == (undefined4 *)0x0) goto LAB_180007d51;
        *puVar8 = 0xcccc;
        puVar11 = puVar11 + lVar1;
LAB_180007cb7:
        lpWideCharStr = (LPCWSTR)(puVar8 + 4);
        puVar12 = puVar11;
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x180007ca9;
        puVar8 = _malloc_base(uVar9);
        lpWideCharStr = (LPCWSTR)0x0;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xdddd;
          goto LAB_180007cb7;
        }
      }
      if (lpWideCharStr != (LPCWSTR)0x0) {
        *(undefined8 *)(puVar12 + 0x40) = 0;
        *(undefined8 *)(puVar12 + 0x38) = 0;
        *(undefined8 *)(puVar12 + 0x30) = 0;
        *(int *)(puVar12 + 0x28) = iVar3;
        *(LPCWSTR *)(puVar12 + 0x20) = lpWideCharStr;
        *(undefined8 *)(puVar12 + -8) = 0x180007cf1;
        iVar2 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar12 + 0x20),
                              *(int *)(puVar12 + 0x28),*(LPNLSVERSIONINFO *)(puVar12 + 0x30),
                              *(LPVOID *)(puVar12 + 0x38),*(LPARAM *)(puVar12 + 0x40));
        if (iVar2 != 0) {
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          if (param_6 == 0) {
            *(undefined4 *)(puVar12 + 0x28) = 0;
            *(undefined8 *)(puVar12 + 0x20) = 0;
          }
          else {
            *(int *)(puVar12 + 0x28) = param_6;
            *(undefined8 *)(puVar12 + 0x20) = param_5;
          }
          *(undefined8 *)(puVar12 + -8) = 0x180007d33;
          uVar4 = WideCharToMultiByte(param_7,0,lpWideCharStr,iVar3,*(LPSTR *)(puVar12 + 0x20),
                                      *(int *)(puVar12 + 0x28),*(LPCSTR *)(puVar12 + 0x30),
                                      *(LPBOOL *)(puVar12 + 0x38));
          uVar6 = (ulonglong)uVar4;
        }
        if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
          *(undefined8 *)(puVar12 + -8) = 0x180007d46;
          FUN_180010434(lpWideCharStr + -8);
        }
      }
    }
LAB_180007d51:
    if (*(int *)(lpSrcStr + -8) == 0xdddd) {
      *(undefined8 *)(puVar12 + -8) = 0x180007d62;
      FUN_180010434(lpSrcStr + -8);
    }
  }
  uVar6 = uVar6 & 0xffffffff;
LAB_180007d64:
  *(undefined8 *)(puVar12 + -8) = 0x180007d70;
  return uVar6;
}




void thunk_FUN_180010434(LPVOID param_1)

{
  FUN_180016ba8(param_1);
  return;
}




void FUN_180007d94(ulonglong param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  
  do {
    pvVar3 = _malloc_base(param_1);
    if (pvVar3 != (LPVOID)0x0) {
      return;
    }
    bVar2 = FUN_1800124ec(param_1);
  } while ((int)CONCAT71(extraout_var,bVar2) != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180003780();
  }
  FUN_180008864();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}




/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
   * __ptr64))
   
   Library: Visual Studio 2019 Release */

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  __uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(param_1);
  }
  return;
}




/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  ulonglong uVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 == 0) {
LAB_180007ece:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_180058328 == 0;
      uVar1 = *(ulonglong *)((longlong)Self + 8);
      if (!bVar2) {
        uVar3 = DAT_180058328;
        uVar1 = DAT_180058328;
      }
      DAT_180058328 = uVar1;
      UNLOCK();
      if (bVar2) goto LAB_180007ece;
    } while (*(ulonglong *)((longlong)Self + 8) != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}




/* Library Function - Single Match
    __scrt_dllmain_after_initialize_c
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_dllmain_after_initialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar2 = FUN_180003e20();
    uVar3 = _configure_narrow_argv((int)uVar2);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = thunk_FUN_180012ad8();
  }
  else {
    uVar2 = FUN_1800086b0();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




bool FUN_180007f10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180008048(0);
  return (char)uVar1 != '\0';
}




/* Library Function - Single Match
    __scrt_dllmain_crt_thread_attach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __scrt_dllmain_crt_thread_attach(void)

{
  bool bVar1;
  
  bVar1 = __vcrt_thread_attach();
  if (bVar1) {
    bVar1 = FUN_180013270();
    if (bVar1) {
      return 1;
    }
    FUN_180009fe4();
  }
  return 0;
}




undefined1 FUN_180007f50(void)

{
  __acrt_thread_detach();
  FUN_180009fe4();
  return 1;
}




/* Library Function - Single Match
    __scrt_dllmain_exception_filter
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_exception_filter
               (undefined8 param_1,int param_2,undefined8 param_3,undefined *param_4,int param_5,
               undefined8 param_6)

{
  bool bVar1;
  undefined7 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(param_1,0,param_3);
  }
  _seh_filter_dll(param_5,param_6);
  return;
}




/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_18001307c(&DAT_180058338);
    return;
  }
  iVar2 = FUN_1800115e0();
  if (iVar2 == 0) {
    FUN_1800115c4();
  }
  return;
}




void FUN_180007ff8(void)

{
  FUN_1800132cc();
  FUN_18000a010();
  return;
}




ulonglong FUN_18000800c(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_180058330 = 1;
  }
  FUN_1800086b0();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_18001325c();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180008048(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180058331 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_180008898(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_180058338 = _DAT_180026850;
      uRam0000000180058340 = _UNK_180026858;
      _DAT_180058348 = 0xffffffffffffffff;
      _DAT_180058350 = _DAT_180026850;
      uRam0000000180058358 = _UNK_180026858;
      _DAT_180058360 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180058338);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((longlong *)&DAT_180058350), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180058331 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




ulonglong FUN_1800080d4(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVar3 = (longlong)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVar3 + 0x180000000) == 0x4550) &&
       (uVar1 = 0x20b,
       *(short *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -4) == 0x20b)) {
      lVar4 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVar3 + -8) +
              0x18 + lVar3 + 0x180000000;
      uVar1 = (ulonglong)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVar3 + 6);
      lVar3 = lVar4 + uVar1 * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x180000000U < uVar1)) goto LAB_18000814a;
      }
      lVar4 = 0;
LAB_18000814a:
      if (lVar4 == 0) {
        return uVar1 & 0xffffffffffffff00;
      }
      uVar2 = (uint7)(uVar1 >> 8);
      if (*(int *)(lVar4 + 0x24) < 0) {
        return (ulonglong)uVar2 << 8;
      }
      return CONCAT71(uVar2,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}




/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180058328 = 0;
    UNLOCK();
  }
  return;
}




/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_uninitialize_crt(bool param_1,char param_2)

{
  undefined8 in_RAX;
  
  if ((DAT_180058330 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize(param_1);
    in_RAX = __vcrt_uninitialize(param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_180058338 == -1) {
    iVar1 = FUN_18001306c(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180058338,_Func);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}




/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




undefined8 * FUN_180008210(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180010434(param_1);
  }
  return param_1;
}




ulonglong FUN_18000823c(undefined8 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1800083a4(param_3 != 0);
    return uVar2;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      bVar1 = __scrt_dllmain_crt_thread_attach();
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      bVar1 = FUN_180007f50();
    }
    return (ulonglong)bVar1;
  }
  uVar2 = FUN_18000828c(param_1,param_3);
  return uVar2;
}




undefined8 FUN_18000828c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar3 = FUN_18000800c(0);
  if ((char)uVar3 != '\0') {
    uVar3 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180058320 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180008898(7);
    }
    DAT_180058320 = 1;
    bVar2 = FUN_180007f10();
    if (bVar2) {
      FUN_180008ad4();
      FUN_180008a8c();
      FUN_180008ab0();
      uVar4 = FUN_180013320((undefined8 *)&DAT_1800254f8,(undefined8 *)&DAT_180025528);
      if (((int)uVar4 == 0) && (uVar4 = __scrt_dllmain_after_initialize_c(), (char)uVar4 != '\0')) {
        FUN_1800132dc((undefined8 *)&DAT_180025308,(undefined8 *)&DAT_1800254f0);
        DAT_180058320 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar3);
    if (!bVar1) {
      plVar5 = (longlong *)FUN_180008acc();
      if ((*plVar5 != 0) && (uVar6 = FUN_1800080d4((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_1800252e0)(param_1,2,param_2);
      }
      DAT_180058368 = DAT_180058368 + 1;
      return 1;
    }
  }
  return 0;
}




ulonglong FUN_1800083a4(bool param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (DAT_180058368 < 1) {
    uVar2 = 0;
  }
  else {
    DAT_180058368 = DAT_180058368 + -1;
    uVar1 = __scrt_acquire_startup_lock();
    if (DAT_180058320 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_180008898(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_180008a9c();
    FUN_180008b10();
    DAT_180058320 = 0;
    __scrt_release_startup_lock((char)uVar1);
    uVar2 = __scrt_uninitialize_crt(param_1,'\0');
    uVar2 = uVar2 & 0xff;
    FUN_180007ff8();
  }
  return uVar2;
}




/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * __ptr64 const,unsigned long,void * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_2 == 0) && (DAT_180058368 < 1)) {
    iVar3 = 0;
  }
  else {
    if (param_2 - 1 < 2) {
      if ((PTR_180026920 != (undefined *)0x0) &&
         (iVar3 = (*(code *)PTR__guard_dispatch_icall_1800252e0)(), iVar3 == 0)) {
        return 0;
      }
      uVar1 = FUN_18000823c(param_1,param_2,(longlong)param_3);
      if ((int)uVar1 == 0) {
        return 0;
      }
    }
    uVar2 = FUN_180006d40(param_1,param_2);
    iVar3 = (int)uVar2;
    if ((param_2 == 1) && (iVar3 == 0)) {
      FUN_180006d40(param_1,0);
      FUN_1800083a4(param_3 != (void *)0x0);
      if (PTR_180026920 != (undefined *)0x0) {
        (*(code *)PTR__guard_dispatch_icall_1800252e0)(param_1,0,param_3);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = FUN_18000823c(param_1,param_2,(longlong)param_3);
      iVar3 = 0;
      if ((int)uVar1 != 0) {
        if (PTR_180026920 == (undefined *)0x0) {
          iVar3 = 1;
        }
        else {
          iVar3 = (*(code *)PTR__guard_dispatch_icall_1800252e0)(param_1,param_2,param_3);
        }
      }
    }
  }
  return iVar3;
}




void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}




/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)(*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0);
  }
  return uVar1;
}




/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180034040) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_180008b84();
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00018000877a) */
/* WARNING: Removing unreachable block (ram,0x0001800086ea) */
/* WARNING: Removing unreachable block (ram,0x0001800086c3) */

undefined8 FUN_1800086b0(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  uVar6 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    DAT_1800340a0 = 0xffffffffffffffff;
    uVar5 = *puVar2 & 0xfff3ff0;
    DAT_180034098 = 0x8000;
    if ((((uVar5 == 0x106c0) || (uVar5 == 0x20660)) || (uVar5 == 0x20670)) ||
       ((uVar5 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar5 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_18005836c = DAT_18005836c | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar6 = *(uint *)(lVar3 + 4);
    if ((uVar6 >> 9 & 1) != 0) {
      DAT_18005836c = DAT_18005836c | 2;
    }
  }
  DAT_180034090 = 1;
  DAT_180034094 = 2;
  if ((uVar4 >> 0x14 & 1) != 0) {
    DAT_180034090 = 2;
    DAT_180034094 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_180034094 = 0xe;
      DAT_180034090 = 3;
      if ((uVar6 & 0x20) != 0) {
        DAT_180034090 = 5;
        DAT_180034094 = 0x2e;
        if (((uVar6 & 0xd0030000) == 0xd0030000) && ((in_XCR0 & 0xe0) == 0xe0)) {
          DAT_180034094 = 0x6e;
          DAT_180034090 = 6;
        }
      }
    }
  }
  return 0;
}




void thunk_FUN_180010434(LPVOID param_1)

{
  FUN_180016ba8(param_1);
  return;
}




void FUN_180008864(void)

{
  longlong local_28 [5];
  
  FUN_180006f80(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_180009ce8(local_28,&DAT_1800332d0);
}




/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180059890 != 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008890(void)

{
  _DAT_180058370 = 0;
  return;
}




void FUN_180008898(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x1800088cc;
  FUN_180008890();
  *(undefined8 *)(puVar4 + -8) = 0x1800088dd;
  FUN_180021e70((undefined1 (*) [32])local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1800088e7;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x180008901;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x180008942;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x180008974;
  FUN_180021e70((undefined1 (*) [32])(puVar4 + 0x50),0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x180008996;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1800089b3;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1800089be;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x1800089cf;
    FUN_180008890();
  }
  return;
}




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_180034040 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_180034040 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_180034040 == 0x2b992ddfa232) {
      DAT_180034040 = 0x2b992ddfa233;
    }
  }
  DAT_180034080 = ~DAT_180034040;
  return;
}




void FUN_180008a8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000180008a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_180058380);
  return;
}




void FUN_180008a9c(void)

{
  FUN_18000a048((PSLIST_HEADER)&DAT_180058380);
  return;
}




undefined * FUN_180008aa8(void)

{
  return &DAT_180058390;
}




void FUN_180008ab0(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_180007a50();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_180008aa8();
  *puVar1 = *puVar1 | 2;
  return;
}




undefined * FUN_180008acc(void)

{
  return &DAT_180059888;
}




void FUN_180008ad4(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_180030d80; plVar1 < &DAT_180030d80; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    }
  }
  return;
}




void FUN_180008b10(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_180030d90; plVar1 < &DAT_180030d90; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    }
  }
  return;
}




/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000180008b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008b84(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180008baf;
  capture_previous_context((PCONTEXT)&DAT_180058440);
  _DAT_1800583b0 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_1800584d8 = puVar3 + 0x40;
  _DAT_1800584c0 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_1800583a0 = 0xc0000409;
  _DAT_1800583a4 = 1;
  _DAT_1800583b8 = 1;
  DAT_1800583c0 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_180034040;
  *(undefined8 *)(puVar3 + 0x28) = DAT_180034080;
  *(undefined8 *)(puVar3 + -8) = 0x180008c51;
  DAT_180058538 = _DAT_1800583b0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180026928);
  return;
}




/* Library Function - Single Match
    __report_rangecheckfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __report_rangecheckfailure(void)

{
  FUN_180008c6c(8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180008c6c(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x180008c97;
  capture_current_context((PCONTEXT)&DAT_180058440);
  _DAT_1800583b0 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_1800584d8 = puVar3 + 0x30;
  _DAT_1800583a0 = 0xc0000409;
  _DAT_1800583a4 = 1;
  _DAT_1800583b8 = 1;
  DAT_1800583c0 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x180008d03;
  DAT_180058538 = _DAT_1800583b0;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_180026928);
  return;
}




/* Library Function - Single Match
    capture_current_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}




/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FH4::FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _CallSETranslator<>(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  FUN_18000a0dc();
  (*(code *)PTR__guard_dispatch_icall_1800252e0)(*param_1,&local_20);
  return 0;
}




/* Library Function - Multiple Matches With Same Base Name
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   _s_FuncInfo const * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64)
    int __cdecl _CallSETranslator<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned
   __int64 * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct
   FH4::FuncInfo4 * __ptr64,unsigned long,unsigned __int64 * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _CallSETranslator<>(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_3;
  FUN_18000a0dc();
  (*(code *)PTR__guard_dispatch_icall_1800252e0)(*param_1,&local_20);
  return 0;
}




longlong FUN_180008e94(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  do {
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = uVar1 - 1;
    lVar2 = FUN_18000a0dc();
    lVar2 = (longlong)*(int *)(param_1 + 0x10) +
            *(longlong *)(lVar2 + 0x60) + (ulonglong)uVar1 * 0x14;
  } while ((param_2 <= *(int *)(lVar2 + 4)) || (*(int *)(lVar2 + 8) < param_2));
  return lVar2;
}




longlong FUN_180008ef8(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  
  bVar3 = *param_1;
  pbVar11 = param_1 + 1;
  *param_2 = bVar3;
  if ((bVar3 & 4) != 0) {
    bVar4 = *pbVar11;
    pbVar11 = pbVar11 + -(longlong)(char)(&DAT_180026938)[bVar4 & 0xf];
    *(uint *)(param_2 + 4) = *(uint *)(pbVar11 + -4) >> ((&DAT_180026948)[bVar4 & 0xf] & 0x1f);
  }
  if ((bVar3 & 8) != 0) {
    uVar5 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    *(undefined4 *)(param_2 + 8) = uVar5;
  }
  if ((bVar3 & 0x10) != 0) {
    uVar5 = *(undefined4 *)pbVar11;
    pbVar11 = pbVar11 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar5;
  }
  uVar10 = 0;
  pbVar9 = pbVar11 + 4;
  if ((param_5 == '\0') && ((bVar3 & 2) != 0)) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    if (*(int *)pbVar11 == 0) {
      pcVar7 = (code *)swi(0x29);
      (*pcVar7)(7);
    }
    else {
      uVar8 = *(byte *)(*(int *)pbVar11 + param_3) & 0xf;
      pbVar11 = (byte *)(*(int *)pbVar11 + param_3) + -(longlong)(char)(&DAT_180026938)[uVar8];
      puVar1 = (uint *)(pbVar11 + -4);
      if (*puVar1 >> ((&DAT_180026948)[uVar8] & 0x1f) != 0) {
        do {
          iVar6 = *(int *)pbVar11;
          pbVar2 = pbVar11 + 4;
          pbVar11 = pbVar11 + 8;
          if (iVar6 == param_4) {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar2;
            break;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *puVar1 >> ((&DAT_180026948)[uVar8] & 0x1f));
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pbVar11;
  }
  if ((bVar3 & 1) != 0) {
    bVar3 = *pbVar9;
    pbVar9 = pbVar9 + -(longlong)(char)(&DAT_180026938)[bVar3 & 0xf];
    *(uint *)(param_2 + 0x14) = *(uint *)(pbVar9 + -4) >> ((&DAT_180026948)[bVar3 & 0xf] & 0x1f);
  }
  return (longlong)pbVar9 - (longlong)param_1;
}




bool FUN_18000902c(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18000a2c0(param_2,param_1);
  lVar2 = FUN_180008e94(param_2,iVar1);
  return lVar2 != 0;
}




byte FUN_180009058(undefined8 param_1,byte *param_2)

{
  return *param_2 & 1;
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  __uint64 *p_Var2;
  longlong lVar3;
  longlong local_res20;
  
  p_Var2 = (__uint64 *)
           FUN_1800090f8((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,&local_res20);
  iVar1 = FUN_18000a2c0((longlong)param_3,(ulonglong *)param_2);
  lVar3 = FUN_180008e94((longlong)param_3,iVar1);
  if (lVar3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(lVar3 + 4);
  }
  FrameUnwindToState(p_Var2,param_2,param_3,iVar1);
  return;
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler4::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler4::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,FuncInfo4 *param_3)

{
  __uint64 local_res8 [4];
  
  local_res8[0] = *param_1;
  if (((byte)*param_3 & 1) != 0) {
    local_res8[0] = *(__uint64 *)(*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_18000cc10((longlong *)local_res8,(ulonglong *)param_2,(longlong)param_3,-1);
  return;
}




longlong * FUN_1800090f8(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  PRUNTIME_FUNCTION p_Var3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong local_res8;
  
  uVar8 = *(uint *)(param_3 + 0xc);
  iVar2 = FUN_18000a2c0(param_3,param_2);
  *param_4 = *param_1;
  do {
    do {
      if (uVar8 == 0) {
        return param_4;
      }
      uVar8 = uVar8 - 1;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + (ulonglong)uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var3 = RtlLookupFunctionEntry(*param_2,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    uVar5 = 0;
    lVar9 = (longlong)*(int *)(lVar7 + 0x10) + local_res8;
    uVar1 = *(uint *)(lVar7 + 0xc);
    if (uVar1 != 0) {
      piVar6 = (int *)(lVar9 + 0xc);
      do {
        if ((longlong)*piVar6 == (ulonglong)p_Var3->BeginAddress) break;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        piVar6 = piVar6 + 5;
      } while (uVar4 < uVar1);
    }
    if ((uint)uVar5 < uVar1) {
      *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
      return param_4;
    }
  } while( true );
}




/* Library Function - Single Match
    public: static unsigned __int64 * __ptr64 __cdecl __FrameHandler4::GetEstablisherFrame(unsigned
   __int64 * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64,unsigned
   __int64 * __ptr64)
   
   Library: Visual Studio 2019 Release */

__uint64 * __cdecl
__FrameHandler4::GetEstablisherFrame
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,FuncInfo4 *param_3,__uint64 *param_4)

{
  *param_4 = *param_1;
  if (((byte)*param_3 & 1) != 0) {
    *param_4 = *(__uint64 *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}




undefined8 *
FUN_1800091ec(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  ulonglong uVar13;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  ulonglong uVar11;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar5 = FUN_18000a2c0(param_5,param_4);
  uVar11 = 0;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = param_4[1];
  lVar8 = (longlong)*(int *)(param_5 + 0x10);
  iVar9 = -1;
  uVar13 = 0xffffffff;
  uVar10 = uVar3;
  do {
    uVar1 = uVar10 - 1;
    lVar2 = uVar4 + (ulonglong)uVar1 * 0x14;
    if ((*(int *)(lVar2 + 4 + lVar8) < iVar5) && (iVar5 <= *(int *)(lVar2 + 8 + lVar8))) break;
    uVar10 = uVar1;
  } while (uVar1 != 0);
  uVar7 = uVar11;
  if (uVar10 != 0) {
    uVar7 = lVar8 + (ulonglong)(uVar10 - 1) * 0x14 + uVar4;
  }
  piVar6 = (int *)(uVar4 + lVar8);
  do {
    if ((((uVar7 == 0) || ((*(int *)(uVar7 + 4) < *piVar6 && (piVar6[1] <= *(int *)(uVar7 + 8)))))
        && (*piVar6 <= param_3)) && ((param_3 <= piVar6[1] && (uVar13 = uVar11, iVar9 == -1)))) {
      iVar9 = (int)uVar11;
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    piVar6 = piVar6 + 5;
  } while (uVar10 < uVar3);
  iVar5 = 0;
  if (iVar9 != -1) {
    iVar5 = iVar9;
  }
  iVar12 = 0;
  if (iVar9 != -1) {
    iVar12 = (int)uVar13 + 1;
  }
  *param_1 = param_2;
  param_1[1] = CONCAT44(uStack_3c,iVar5);
  param_1[2] = param_2;
  param_1[3] = CONCAT44(uStack_2c,iVar12);
  return param_1;
}




undefined4 * FUN_180009320(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  int *local_28;
  int iStack_20;
  
  iVar5 = 0;
  iVar8 = 0;
  iStack_20 = 0;
  iVar6 = 0;
  local_28 = param_2;
  FUN_1800096b0((longlong)param_2,(longlong)&local_28);
  iVar4 = 0;
  if (*param_2 != 0) {
    pbVar7 = *(byte **)(param_2 + 2);
    iVar6 = 0;
    do {
      iVar3 = iVar5;
      if ((((int)*(undefined8 *)(param_2 + 6) <= param_3) &&
          (param_3 <= (int)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20))) &&
         (iVar8 = iVar4, iVar3 = iVar4, iVar6 = iVar4, iVar5 == 0)) {
        iVar8 = 0;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      iVar4 = iVar4 + 1;
      bVar1 = (&DAT_180026948)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180026938)[*pbVar7 & 0xf];
      uVar2 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[6] = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180026948)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180026938)[*pbVar7 & 0xf];
      uVar2 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[7] = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180026948)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180026938)[*pbVar7 & 0xf];
      uVar2 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[8] = uVar2 >> (bVar1 & 0x1f);
      iVar3 = *(int *)pbVar7;
      pbVar7 = pbVar7 + 4;
      *(byte **)(param_2 + 2) = pbVar7;
      param_2[9] = iVar3;
    } while (iVar4 != *param_2);
  }
  iStack_20 = iVar8;
  local_28 = param_2;
  FUN_1800096b0((longlong)param_2,(longlong)&local_28);
  *(int **)param_1 = param_2;
  param_1[2] = iVar8;
  param_1[3] = uStack_3c;
  *(int **)(param_1 + 4) = param_2;
  *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_2c,iVar6 + 1);
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000948c(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180026a00;
  local_b8.ExceptionRecord = _UNK_180026a08;
  local_b8.ExceptionAddress = _DAT_180026a10;
  local_b8._24_8_ = _UNK_180026a18;
  local_b8.ExceptionInformation[9] = _UNK_180026a68;
  local_b8.ExceptionInformation[10]._0_4_ = _DAT_180026a70;
  local_b8.ExceptionInformation[10]._4_4_ = _UNK_180026a74;
  local_b8.ExceptionInformation[0xb]._0_4_ = _UNK_180026a78;
  local_b8.ExceptionInformation[0xb]._4_4_ = _UNK_180026a7c;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_180026a80;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_180026a84;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_180026a88;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_180026a8c;
  local_b8.ExceptionInformation[0xe] = DAT_180026a90;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)__FrameHandler3::CxxCallCatchBlock;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180009590(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,
                  undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_180026960;
  local_b8.ExceptionRecord = _UNK_180026968;
  local_b8.ExceptionAddress = _DAT_180026970;
  local_b8._24_8_ = _UNK_180026978;
  local_b8.ExceptionInformation[10]._0_4_ = _DAT_1800269d0;
  local_b8.ExceptionInformation[10]._4_4_ = _UNK_1800269d4;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_1800269e0;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_1800269e4;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_1800269e8;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_1800269ec;
  local_b8.ExceptionInformation[0xe] = DAT_1800269f0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)__FrameHandler4::CxxCallCatchBlock;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}




void FUN_1800096b0(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  *(byte **)(param_1 + 8) = pbVar6;
  bVar1 = (&DAT_180026948)[*pbVar6 & 0xf];
  pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
  uVar2 = *(uint *)(pbVar6 + -4);
  *(byte **)(param_1 + 8) = pbVar6;
  *(uint *)(param_1 + 0x18) = uVar2 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_180026948)[*pbVar6 & 0xf];
  pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
  uVar2 = *(uint *)(pbVar6 + -4);
  *(byte **)(param_1 + 8) = pbVar6;
  *(uint *)(param_1 + 0x1c) = uVar2 >> (bVar1 & 0x1f);
  bVar1 = (&DAT_180026948)[*pbVar6 & 0xf];
  pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
  uVar2 = *(uint *)(pbVar6 + -4);
  *(byte **)(param_1 + 8) = pbVar6;
  *(uint *)(param_1 + 0x20) = uVar2 >> (bVar1 & 0x1f);
  uVar3 = *(undefined4 *)pbVar6;
  pbVar6 = pbVar6 + 4;
  iVar4 = *(int *)(param_2 + 8);
  *(byte **)(param_1 + 8) = pbVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (iVar4 != 0) {
    uVar7 = (ulonglong)*(uint *)(param_2 + 8);
    do {
      bVar1 = (&DAT_180026948)[*pbVar6 & 0xf];
      pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
      uVar2 = *(uint *)(pbVar6 + -4);
      *(byte **)(param_1 + 8) = pbVar6;
      *(uint *)(param_1 + 0x18) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180026948)[*pbVar6 & 0xf];
      pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
      uVar2 = *(uint *)(pbVar6 + -4);
      *(byte **)(param_1 + 8) = pbVar6;
      *(uint *)(param_1 + 0x1c) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180026948)[*pbVar6 & 0xf];
      pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
      uVar2 = *(uint *)(pbVar6 + -4);
      pbVar5 = pbVar6 + 4;
      *(byte **)(param_1 + 8) = pbVar6;
      *(uint *)(param_1 + 0x20) = uVar2 >> (bVar1 & 0x1f);
      uVar3 = *(undefined4 *)pbVar6;
      *(byte **)(param_1 + 8) = pbVar5;
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      bVar1 = (&DAT_180026948)[*pbVar5 & 0xf];
      pbVar5 = pbVar5 + -(longlong)(char)(&DAT_180026938)[*pbVar5 & 0xf];
      uVar2 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_1 + 8) = pbVar5;
      *(uint *)(param_1 + 0x18) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180026948)[*pbVar5 & 0xf];
      pbVar5 = pbVar5 + -(longlong)(char)(&DAT_180026938)[*pbVar5 & 0xf];
      uVar2 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_1 + 8) = pbVar5;
      *(uint *)(param_1 + 0x1c) = uVar2 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_180026948)[*pbVar5 & 0xf];
      pbVar5 = pbVar5 + -(longlong)(char)(&DAT_180026938)[*pbVar5 & 0xf];
      uVar2 = *(uint *)(pbVar5 + -4);
      pbVar6 = pbVar5 + 4;
      *(byte **)(param_1 + 8) = pbVar5;
      *(uint *)(param_1 + 0x20) = uVar2 >> (bVar1 & 0x1f);
      uVar3 = *(undefined4 *)pbVar5;
      *(byte **)(param_1 + 8) = pbVar6;
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}




/* Library Function - Single Match
    _CreateFrameInfo
   
   Library: Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  lVar1 = FUN_18000a0dc();
  if (param_1 < *(undefined8 **)(lVar1 + 0x58)) {
    lVar1 = FUN_18000a0dc();
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = FUN_18000a0dc();
  *(undefined8 **)(lVar1 + 0x58) = param_1;
  return param_1;
}




void FUN_1800098b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_18000a0dc();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_18000a0dc();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_18000a0dc();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    _GetImageBase
   
   Library: Visual Studio 2019 Release */

undefined8 _GetImageBase(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  return *(undefined8 *)(lVar1 + 0x60);
}




/* Library Function - Single Match
    _GetThrowImageBase
   
   Library: Visual Studio 2019 Release */

undefined8 _GetThrowImageBase(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  return *(undefined8 *)(lVar1 + 0x68);
}




/* Library Function - Single Match
    _SetImageBase
   
   Library: Visual Studio 2019 Release */

void _SetImageBase(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}




void FUN_180009944(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}




void FUN_18000995c(EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  __uint64 local_res8;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_res8 = param_2;
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_18000a0dc();
  thunk_FUN_18000bd1c(param_1,&local_res8,param_3,param_4,
                      (_s_FuncInfo *)
                      ((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60)),0,
                      (__uint64 *)0x0,0);
  return;
}




void FUN_1800099e4(EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  __uint64 local_res8;
  FuncInfo4 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_28[0] = (FuncInfo4)0x0;
  local_res8 = param_2;
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_18000a0dc();
  FUN_180008ef8((byte *)((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60)),
                (byte *)local_28,*(longlong *)(param_4 + 8),**(int **)(param_4 + 0x10),'\0');
  FUN_18000c1f0(param_1,&local_res8,param_3,param_4,local_28,0,(__uint64 *)0x0,0);
  return;
}




/* Library Function - Single Match
    __std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_copy(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char *_Dst;
  longlong lVar2;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(*param_1 + lVar2 + 1) != '\0');
    _Dst = _malloc_base(lVar2 + 2);
    if (_Dst != (char *)0x0) {
      strcpy_s(_Dst,lVar2 + 2,(char *)*param_1);
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = (longlong)_Dst;
    }
    FUN_180010434((LPVOID)0x0);
  }
  return;
}




/* Library Function - Single Match
    __std_exception_destroy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_destroy(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_180010434((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}




undefined8 FUN_180009b5c(void)

{
  return DAT_1800589a0;
}




void FUN_180009b68(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180009b5c();
  if (lVar1 != 0) {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*(code *)PTR__guard_dispatch_icall_1800252e0)();
      }
    }
    else {
      FUN_180009bf4(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}




void FUN_180009bf4(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000180009bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}




/* Library Function - Single Match
    _IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2019 Release */

undefined4 _IsExceptionObjectToBeDestroyed(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_18000a0dc();
  plVar2 = *(longlong **)(lVar1 + 0x58);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar2 == param_1) break;
    plVar2 = (longlong *)plVar2[1];
  }
  return 0;
}




/* Library Function - Single Match
    __AdjustPointer
   
   Library: Visual Studio 2019 Release */

longlong __AdjustPointer(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    lVar1 = lVar1 + (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(param_2[1] + param_1)) +
                    (longlong)param_2[1];
  }
  return lVar1;
}




undefined8 FUN_180009c4c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    lVar3 = FUN_18000a0dc();
    if (0 < *(int *)(lVar3 + 0x30)) {
      lVar3 = FUN_18000a0dc();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    lVar3 = FUN_18000a0dc();
    *(int **)(lVar3 + 0x20) = piVar1;
    uVar2 = param_1[1];
    lVar3 = FUN_18000a0dc();
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180012564();
  }
  return 0;
}




longlong FUN_180009cb4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  return lVar1 + 0x20;
}




longlong FUN_180009cc8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  return lVar1 + 0x28;
}




void Unwind_180009cdc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_180012564();
}




void FUN_180009ce8(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (*(code *)PTR__guard_dispatch_icall_1800252e0)();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}




undefined8 FUN_180009d90(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_38;
  longlong local_30;
  
  __except_validate_context_record(param_3);
  lVar2 = param_4[1];
  puVar3 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar2;
  uVar9 = *(uint *)(param_4 + 9);
  local_38 = param_1;
  local_30 = param_3;
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    for (; uVar9 < *puVar3; uVar9 = uVar9 + 1) {
      uVar8 = (ulonglong)uVar9;
      if (((puVar3[uVar8 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar8 * 4 + 2])) &&
         (puVar3[uVar8 * 4 + 4] != 0)) {
        if (puVar3[uVar8 * 4 + 3] != 1) {
          iVar4 = (*(code *)((ulonglong)puVar3[uVar8 * 4 + 3] + lVar2))(&local_38,param_2);
          if (iVar4 < 0) {
            return 0;
          }
          if (iVar4 < 1) goto LAB_180009eb7;
        }
        if (((param_1->ExceptionCode == 0xe06d7363) &&
            (PTR___DestructExceptionObject_180026a98 != (undefined *)0x0)) &&
           (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&PTR___DestructExceptionObject_180026a98),
           BVar5 != 0)) {
          (*(code *)PTR___DestructExceptionObject_180026a98)(param_1,1);
        }
        FUN_18000d390();
        RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar3[((ulonglong)uVar9 + 1) * 4] + lVar2),param_1,
                    (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                    (PUNWIND_HISTORY_TABLE)param_4[8]);
        FUN_18000d3c0();
      }
LAB_180009eb7:
    }
  }
  else {
    uVar8 = param_4[4] - lVar2;
    for (; uVar1 = *puVar3, uVar9 < uVar1; uVar9 = uVar9 + 1) {
      uVar10 = (ulonglong)uVar9;
      if ((puVar3[uVar10 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar10 * 4 + 2])) {
        if ((param_1->ExceptionFlags & 0x20) != 0) {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              if ((((puVar3[uVar7 * 4 + 1] <= uVar8) && (uVar8 < puVar3[uVar7 * 4 + 2])) &&
                  (puVar3[uVar7 * 4 + 4] == puVar3[uVar10 * 4 + 4])) &&
                 (puVar3[uVar7 * 4 + 3] == puVar3[uVar10 * 4 + 3])) break;
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar6 < uVar1);
          }
          if ((uint)uVar7 != *puVar3) {
            return 1;
          }
        }
        if (puVar3[((ulonglong)uVar9 + 1) * 4] == 0) {
          *(uint *)(param_4 + 9) = uVar9 + 1;
          (*(code *)((ulonglong)puVar3[(ulonglong)uVar9 * 4 + 3] + lVar2))
                    (CONCAT71((int7)((ulonglong)uVar9 * 2 >> 8),1));
        }
        else if ((uVar8 == puVar3[((ulonglong)uVar9 + 1) * 4]) &&
                ((param_1->ExceptionFlags & 0x20) != 0)) {
          return 1;
        }
      }
    }
  }
  return 1;
}




/* Library Function - Single Match
    __vcrt_initialize
   
   Library: Visual Studio 2019 Release */

ulonglong __vcrt_initialize(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  uVar2 = __vcrt_initialize_locks();
  if ((char)uVar2 != '\0') {
    uVar1 = __vcrt_initialize_ptd();
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),1);
    }
    uVar2 = __vcrt_uninitialize_locks();
  }
  return uVar2 & 0xffffffffffffff00;
}




/* Library Function - Single Match
    __vcrt_thread_attach
   
   Library: Visual Studio 2019 Release */

bool __vcrt_thread_attach(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  return pvVar1 != (LPVOID)0x0;
}




undefined1 FUN_180009fe4(void)

{
  FUN_18000a094();
  return 1;
}




/* Library Function - Single Match
    __vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined8 __vcrt_uninitialize(char param_1)

{
  undefined8 in_RAX;
  
  if (param_1 == '\0') {
    __vcrt_uninitialize_ptd();
    in_RAX = __vcrt_uninitialize_locks();
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined1 FUN_18000a010(void)

{
  __vcrt_uninitialize_ptd();
  return 1;
}




/* Library Function - Single Match
    __std_type_info_compare
   
   Library: Visual Studio 2019 Release */

uint __std_type_info_compare(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}




void FUN_18000a048(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    FUN_180010434(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}




void FUN_18000a074(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &DAT_180058920)) {
    FUN_180010434(param_1);
  }
  return;
}




void FUN_18000a094(void)

{
  undefined *puVar1;
  
  if (DAT_1800340b0 != 0xffffffff) {
    puVar1 = (undefined *)__vcrt_FlsGetValue(DAT_1800340b0);
    __vcrt_FlsSetValue(DAT_1800340b0,(LPVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_180058920)) {
      FUN_180010434(puVar1);
    }
  }
  return;
}




void FUN_18000a0dc(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  if (pvVar1 != (LPVOID)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    __vcrt_getptd_noexit
   
   Library: Visual Studio 2019 Release */

LPVOID __vcrt_getptd_noexit(void)

{
  DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_1800340b0 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_1800340b0);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_1800340b0,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x80);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_1800340b0,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_1800340b0,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(undefined4 *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      FUN_180010434(pvVar2);
      pvVar3 = pvVar4;
    }
    SetLastError(dwErrCode);
  }
  return pvVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

uint __vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  uint3 extraout_var;
  
  uVar1 = __vcrt_FlsAlloc(FUN_18000a074);
  DAT_1800340b0 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = __vcrt_FlsSetValue(uVar1,&DAT_180058920);
    if (iVar2 != 0) {
      _DAT_180058998 = 0xfffffffe;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    __vcrt_uninitialize_ptd();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}




/* Library Function - Single Match
    __vcrt_uninitialize_ptd
   
   Library: Visual Studio 2019 Release */

undefined1 __vcrt_uninitialize_ptd(void)

{
  if (DAT_1800340b0 != -1) {
    __vcrt_FlsFree(DAT_1800340b0);
    DAT_1800340b0 = -1;
  }
  return 1;
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetCurrentState(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetCurrentState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_3->dispUnwindHelp + *param_1);
  if (iVar1 == -2) {
    iVar1 = FUN_18000a2d0((longlong)param_3,(longlong)param_2,*(ulonglong *)param_2);
  }
  return iVar1;
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_1800090f8((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1);
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(unsigned __int64 * __ptr64,struct
   _s_FuncInfo const * __ptr64,int)
   
   Library: Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(__uint64 *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)((longlong)param_2->dispUnwindHelp + *param_1) = param_3;
  return;
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::SetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_1800090f8((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) = param_4;
  }
  return;
}




void FUN_18000a2c0(longlong param_1,ulonglong *param_2)

{
  FUN_18000a2d0(param_1,(longlong)param_2,*param_2);
  return;
}




void FUN_18000a2c8(longlong param_1,ulonglong *param_2)

{
  FUN_18000a338(param_1,(longlong)param_2,*param_2);
  return;
}




undefined4 FUN_18000a2d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 + lVar4 != 0) {
      uVar3 = 0;
      if (*(uint *)(param_1 + 0x14) != 0) {
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar4 + uVar3 * 8 + lVar1) + lVar1)) break;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x14));
        if ((int)uVar3 != 0) {
          return *(undefined4 *)(lVar1 + (ulonglong)((int)uVar3 - 1) * 8 + 4 + lVar4);
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




int FUN_18000a338(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    pbVar6 = (byte *)((longlong)*(int *)(param_1 + 0x10) + *(longlong *)(param_2 + 8));
    uVar5 = 0;
    iVar3 = -1;
    uVar2 = *pbVar6 & 0xf;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[uVar2];
    puVar1 = (uint *)(pbVar6 + -4);
    if (*puVar1 >> ((&DAT_180026948)[uVar2] & 0x1f) != 0) {
      do {
        pbVar7 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
        uVar4 = uVar4 + (*(uint *)(pbVar7 + -4) >> ((&DAT_180026948)[*pbVar6 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar4 + (ulonglong)**(uint **)(param_2 + 0x10) +
                      *(longlong *)(param_2 + 8)) break;
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar7 + -(longlong)(char)(&DAT_180026938)[*pbVar7 & 0xf];
        iVar3 = (*(uint *)(pbVar6 + -4) >> ((&DAT_180026948)[*pbVar7 & 0xf] & 0x1f)) - 1;
      } while (uVar5 < *puVar1 >> ((&DAT_180026948)[uVar2] & 0x1f));
      if (uVar5 != 0) {
        return iVar3;
      }
      return -1;
    }
  }
  return -1;
}




/* Library Function - Single Match
    int __cdecl BuildCatchObjectHelperInternal<class __FrameHandler3>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
BuildCatchObjectHelperInternal<class___FrameHandler3>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar4 = 0;
  uVar6 = 0;
  iVar5 = 0;
  uVar3 = uVar4;
  iVar7 = iVar5;
  if (*(int *)(param_3 + 4) != 0) {
    iVar7 = *(int *)(param_3 + 4);
    lVar1 = _GetImageBase();
    uVar3 = iVar7 + lVar1;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = uVar4;
  if (iVar7 != 0) {
    lVar1 = _GetImageBase();
    uVar3 = lVar1 + *(int *)(param_3 + 4);
  }
  if (*(char *)(uVar3 + 0x10) == '\0') {
    return 0;
  }
  if ((*(int *)(param_3 + 8) == 0) && (-1 < *(int *)param_3)) {
    return 0;
  }
  if (-1 < *(int *)param_3) {
    param_2 = (void *)((longlong)*(int *)(param_3 + 8) + *(longlong *)param_2);
  }
  if (((((byte)*param_3 & 0x80) == 0) || (((byte)*param_4 & 0x10) == 0)) || (DAT_180058910 == 0)) {
    if (((byte)*param_3 & 8) == 0) {
      if (((byte)*param_4 & 1) == 0) {
        uVar3 = uVar4;
        if (*(int *)(param_4 + 0x18) != 0) {
          iVar5 = *(int *)(param_4 + 0x18);
          lVar1 = _GetThrowImageBase();
          uVar3 = iVar5 + lVar1;
        }
        if (uVar3 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            if (iVar5 != 0) {
              lVar1 = _GetThrowImageBase();
              uVar4 = lVar1 + *(int *)(param_4 + 0x18);
            }
            if (uVar4 != 0) {
              uVar6 = (ulonglong)((((byte)*param_4 & 4) != 0) + 1);
              goto LAB_18000a5e6;
            }
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_1800217d0(param_2,puVar2,(longlong)iVar7);
        goto LAB_18000a5e6;
      }
      if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_1800217d0(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*(longlong *)param_2 == 0)) goto LAB_18000a5e6;
      lVar1 = *(longlong *)param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(longlong *)param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(longlong *)param_2 = lVar1;
  }
  lVar1 = __AdjustPointer(lVar1,(int *)(param_4 + 8));
  *(longlong *)param_2 = lVar1;
  uVar6 = uVar4;
LAB_18000a5e6:
  return (int)uVar6;
}




/* Library Function - Single Match
    int __cdecl BuildCatchObjectHelperInternal<class __FrameHandler4>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct FH4::HandlerType4 * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
BuildCatchObjectHelperInternal<class___FrameHandler4>
          (EHExceptionRecord *param_1,void *param_2,HandlerType4 *param_3,_s_CatchableType *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar4 = 0;
  uVar6 = 0;
  iVar5 = 0;
  uVar3 = uVar4;
  iVar7 = iVar5;
  if (*(int *)(param_3 + 8) != 0) {
    iVar7 = *(int *)(param_3 + 8);
    lVar1 = _GetImageBase();
    uVar3 = iVar7 + lVar1;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = uVar4;
  if (iVar7 != 0) {
    lVar1 = _GetImageBase();
    uVar3 = lVar1 + *(int *)(param_3 + 8);
  }
  if (*(char *)(uVar3 + 0x10) == '\0') {
    return 0;
  }
  if ((*(int *)(param_3 + 0xc) == 0) && (-1 < *(int *)(param_3 + 4))) {
    return 0;
  }
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (void *)((ulonglong)*(uint *)(param_3 + 0xc) + *(longlong *)param_2);
  }
  if (((((byte)param_3[4] & 0x80) == 0) || (((byte)*param_4 & 0x10) == 0)) || (DAT_180058910 == 0))
  {
    if (((byte)param_3[4] & 8) == 0) {
      if (((byte)*param_4 & 1) == 0) {
        uVar3 = uVar4;
        if (*(int *)(param_4 + 0x18) != 0) {
          iVar5 = *(int *)(param_4 + 0x18);
          lVar1 = _GetThrowImageBase();
          uVar3 = iVar5 + lVar1;
        }
        if (uVar3 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            if (iVar5 != 0) {
              lVar1 = _GetThrowImageBase();
              uVar4 = lVar1 + *(int *)(param_4 + 0x18);
            }
            if (uVar4 != 0) {
              uVar6 = (ulonglong)((((byte)*param_4 & 4) != 0) + 1);
              goto LAB_18000a7e9;
            }
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_1800217d0(param_2,puVar2,(longlong)iVar7);
        goto LAB_18000a7e9;
      }
      if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_1800217d0(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*(longlong *)param_2 == 0)) goto LAB_18000a7e9;
      lVar1 = *(longlong *)param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(longlong *)param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(longlong *)param_2 = lVar1;
  }
  lVar1 = __AdjustPointer(lVar1,(int *)(param_4 + 8));
  *(longlong *)param_2 = lVar1;
  uVar6 = uVar4;
LAB_18000a7e9:
  return (int)uVar6;
}




/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<class __FrameHandler3>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
BuildCatchObjectInternal<class___FrameHandler3>
          (EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
          _s_CatchableType *param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *UNRECOVERED_JUMPTABLE;
  void *pvVar5;
  
  UNRECOVERED_JUMPTABLE = (undefined *)0x0;
  pvVar5 = param_2;
  if (-1 < *(int *)param_3) {
    pvVar5 = (void *)((longlong)*(int *)(param_3 + 8) + *(longlong *)param_2);
  }
  iVar1 = BuildCatchObjectHelperInternal<class___FrameHandler3>(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar4 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(param_4 + 0x18) + lVar4);
    }
    FUN_18000d1c4(pvVar5,UNRECOVERED_JUMPTABLE,lVar3);
  }
  else if (iVar1 == 2) {
    pvVar2 = (void *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar3 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(param_4 + 0x18) + lVar3);
    }
    _CallMemberFunction2(pvVar5,UNRECOVERED_JUMPTABLE,pvVar2,1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl BuildCatchObjectInternal<class __FrameHandler4>(struct EHExceptionRecord *
   __ptr64,void * __ptr64,struct FH4::HandlerType4 * __ptr64,struct _s_CatchableType const *
   __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
BuildCatchObjectInternal<class___FrameHandler4>
          (EHExceptionRecord *param_1,void *param_2,HandlerType4 *param_3,_s_CatchableType *param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *UNRECOVERED_JUMPTABLE;
  void *pvVar5;
  
  UNRECOVERED_JUMPTABLE = (undefined *)0x0;
  pvVar5 = param_2;
  if (-1 < *(int *)(param_3 + 4)) {
    pvVar5 = (void *)((ulonglong)*(uint *)(param_3 + 0xc) + *(longlong *)param_2);
  }
  iVar1 = BuildCatchObjectHelperInternal<class___FrameHandler4>(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    lVar3 = __AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar4 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(param_4 + 0x18) + lVar4);
    }
    FUN_18000d1c4(pvVar5,UNRECOVERED_JUMPTABLE,lVar3);
  }
  else if (iVar1 == 2) {
    pvVar2 = (void *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    if (*(int *)(param_4 + 0x18) != 0) {
      lVar3 = _GetThrowImageBase();
      UNRECOVERED_JUMPTABLE = (undefined *)(*(int *)(param_4 + 0x18) + lVar3);
    }
    _CallMemberFunction2(pvVar5,UNRECOVERED_JUMPTABLE,pvVar2,1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler3>(struct EHExceptionRecord * __ptr64,unsigned __int64
   * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo
   const * __ptr64,struct _s_HandlerType const * __ptr64,struct _s_CatchableType const *
   __ptr64,struct _s_TryBlockMapEntry const * __ptr64,int,unsigned __int64 * __ptr64,unsigned
   char,unsigned char)
   
   Library: Visual Studio 2019 Release */

void __cdecl
CatchIt<class___FrameHandler3>
          (EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
          _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,
          _s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,__uint64 *param_10,
          uchar param_11,uchar param_12)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res10;
  _CONTEXT *local_res18;
  undefined4 in_stack_ffffffffffffffa4;
  
  local_res18 = param_3;
  plVar3 = FUN_1800090f8((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,&local_res10);
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<class___FrameHandler3>(param_1,plVar3,param_6,param_7);
  }
  uVar1 = *(undefined4 *)(param_8 + 8);
  iVar2 = *(int *)param_8;
  lVar4 = _GetImageBase();
  FUN_18000948c(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)plVar3,
                lVar4 + *(int *)(param_6 + 0xc),(ULONG_PTR)param_5,iVar2,
                CONCAT44(in_stack_ffffffffffffffa4,uVar1),param_6,(undefined8 *)param_4,param_12);
  return;
}




/* Library Function - Single Match
    void __cdecl CatchIt<class __FrameHandler4>(struct EHExceptionRecord * __ptr64,unsigned __int64
   * __ptr64,struct _CONTEXT * __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 *
   __ptr64,struct FH4::HandlerType4 * __ptr64,struct _s_CatchableType const * __ptr64,struct
   FH4::TryBlockMapEntry4 * __ptr64,int,unsigned __int64 * __ptr64,unsigned char,unsigned char)
   
   Library: Visual Studio 2019 Release */

void __cdecl
CatchIt<class___FrameHandler4>
          (EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
          _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,HandlerType4 *param_6,
          _s_CatchableType *param_7,TryBlockMapEntry4 *param_8,int param_9,__uint64 *param_10,
          uchar param_11,uchar param_12)

{
  int iVar1;
  int iVar2;
  __uint64 *p_Var3;
  longlong lVar4;
  __uint64 local_res10;
  _CONTEXT *local_res18;
  
  local_res18 = param_3;
  p_Var3 = __FrameHandler4::GetEstablisherFrame(param_2,param_4,param_5,&local_res10);
  if (param_7 != (_s_CatchableType *)0x0) {
    BuildCatchObjectInternal<class___FrameHandler4>(param_1,p_Var3,param_6,param_7);
  }
  iVar1 = *(int *)(param_8 + 8);
  iVar2 = *(int *)param_8;
  lVar4 = _GetImageBase();
  FUN_180009590(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_res18,(ULONG_PTR)p_Var3,
                lVar4 + *(int *)(param_6 + 0x10),param_5,iVar2,iVar1,(longlong)param_6,
                (undefined8 *)param_4,param_12);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000ab58(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,byte param_6,int param_7,
                  __uint64 *param_8)

{
  undefined8 *puVar1;
  _s_ESTypeList *p_Var2;
  uint uVar3;
  char cVar4;
  uchar uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  uint uVar14;
  undefined1 auStackY_168 [32];
  _s_TryBlockMapEntry *in_stack_fffffffffffffed0;
  undefined4 uVar16;
  uchar local_108;
  _CONTEXT *local_100;
  _s_CatchableType *local_e0;
  longlong local_d8;
  __uint64 *local_d0;
  undefined8 local_c8;
  int iStack_c0;
  uint uStack_bc;
  int local_b8;
  _s_FuncInfo *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  ulonglong uVar15;
  
  local_58 = DAT_180034040 ^ (ulonglong)auStackY_168;
  local_d0 = param_8;
  local_108 = '\0';
  iVar7 = __FrameHandler3::GetHandlerSearchState(param_2,param_4,param_5);
  if ((-2 < iVar7) && (iVar7 < param_5->maxState)) {
    local_100 = param_3;
    if ((*(int *)param_1 == -0x1f928c9d) &&
       (((*(int *)(param_1 + 0x18) == 4 && (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) &&
        (*(longlong *)(param_1 + 0x30) == 0)))) {
      lVar11 = FUN_18000a0dc();
      if (*(longlong *)(lVar11 + 0x20) == 0) {
        return;
      }
      lVar11 = FUN_18000a0dc();
      param_1 = *(EHExceptionRecord **)(lVar11 + 0x20);
      lVar11 = FUN_18000a0dc();
      local_108 = '\x01';
      local_100 = *(_CONTEXT **)(lVar11 + 0x28);
      FUN_180009944(*(undefined8 *)(param_1 + 0x38));
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
         ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
      goto LAB_18000b020;
      lVar11 = FUN_18000a0dc();
      if (*(longlong *)(lVar11 + 0x38) != 0) {
        lVar11 = FUN_18000a0dc();
        p_Var2 = *(_s_ESTypeList **)(lVar11 + 0x38);
        lVar11 = FUN_18000a0dc();
        *(undefined8 *)(lVar11 + 0x38) = 0;
        cVar4 = FUN_18000cfb0((longlong)param_1,(int *)p_Var2);
        if (cVar4 == '\0') {
          uVar5 = Is_bad_exception_allowed(p_Var2);
          if (uVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180012564();
          }
          __DestructExceptionObject((int *)param_1);
          FUN_18000c3e0(&local_c8);
                    /* WARNING: Subroutine does not return */
          FUN_180009ce8(&local_c8,&DAT_1800333d0);
        }
      }
    }
    uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
    local_a8 = *(undefined8 *)(param_4 + 8);
    local_b0 = param_5;
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
      if (param_5->nTryBlocks != 0) {
        FUN_1800091ec(&local_90,&local_b0,iVar7,(ulonglong *)param_4,(longlong)param_5);
        uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        uVar8 = (uint)uStack_88;
        local_a0 = local_90;
        uStack_98 = uStack_88;
        if (uVar8 < local_78) {
          do {
            uVar15 = 0;
            lVar11 = (longlong)*(int *)(*local_a0 + 0x10) + (ulonglong)uVar8 * 0x14;
            piVar12 = (int *)(lVar11 + local_90[1]);
            local_c8._0_4_ = *piVar12;
            local_c8._4_4_ = piVar12[1];
            iStack_c0 = piVar12[2];
            uVar3 = piVar12[3];
            local_b8 = *(int *)(lVar11 + 0x10 + local_90[1]);
            uStack_bc = uVar3;
            if ((((int)local_c8 <= iVar7) && (iVar7 <= local_c8._4_4_)) &&
               (local_d8 = (longlong)local_b8 + *(longlong *)(param_4 + 8), uVar3 != 0)) {
              do {
                puVar1 = (undefined8 *)(local_d8 + uVar15 * 0x14);
                local_70 = *puVar1;
                uStack_68 = puVar1[1];
                local_60 = *(undefined4 *)(local_d8 + 0x10 + uVar15 * 0x14);
                lVar11 = _GetThrowImageBase();
                piVar12 = (int *)(lVar11 + 4 +
                                 (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                lVar11 = _GetThrowImageBase();
                for (iVar10 = *(int *)(lVar11 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                    0 < iVar10; iVar10 = iVar10 + -1) {
                  lVar11 = _GetThrowImageBase();
                  local_e0 = (_s_CatchableType *)(lVar11 + *piVar12);
                  iVar9 = TypeMatchHelper<class___FrameHandler3>
                                    ((_s_HandlerType *)&local_70,local_e0,
                                     *(_s_ThrowInfo **)(param_1 + 0x30));
                  if (iVar9 != 0) {
                    in_stack_fffffffffffffed0 = (_s_TryBlockMapEntry *)&local_c8;
                    CatchIt<class___FrameHandler3>
                              (param_1,param_2,local_100,param_4,param_5,(_s_HandlerType *)&local_70
                               ,local_e0,in_stack_fffffffffffffed0,param_7,local_d0,local_108,
                               param_6);
                    goto LAB_18000ae90;
                  }
                  piVar12 = piVar12 + 1;
                }
                uVar14 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar14;
              } while (uVar14 != uVar3);
            }
LAB_18000ae90:
            uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_78);
        }
      }
      piVar12 = (int *)0x0;
      if ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
         (((param_5->dispESTypeList != 0 &&
           (lVar11 = _GetImageBase(), lVar11 + (int)param_5->dispESTypeList != 0)) ||
          ((((uint)param_5->EHFlags >> 2 & 1) != 0 &&
           (bVar6 = FUN_18000902c((ulonglong *)param_4,(longlong)param_5), !bVar6)))))) {
        if (((uint)param_5->EHFlags >> 2 & 1) != 0) {
          lVar11 = FUN_18000a0dc();
          *(EHExceptionRecord **)(lVar11 + 0x20) = param_1;
          lVar11 = FUN_18000a0dc();
          *(_CONTEXT **)(lVar11 + 0x28) = local_100;
                    /* WARNING: Subroutine does not return */
          FUN_180012564();
        }
        if (param_5->dispESTypeList != 0) {
          lVar11 = _GetImageBase();
          piVar12 = (int *)(lVar11 + (int)param_5->dispESTypeList);
        }
        cVar4 = FUN_18000cfb0((longlong)param_1,piVar12);
        if (cVar4 == '\0') {
          plVar13 = FUN_1800090f8((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,
                                  (longlong *)&local_e0);
          FUN_18000948c(param_2,(ULONG_PTR)param_1,(ULONG_PTR)local_100,(ULONG_PTR)plVar13,0,
                        (ULONG_PTR)param_5,-1,CONCAT44(uVar16,0xffffffff),0,(undefined8 *)param_4,
                        param_6);
        }
      }
    }
    else if (param_5->nTryBlocks != 0) {
      if (param_6 != 0) goto LAB_18000b020;
      FUN_18000b52c(param_1,param_2,local_100,param_4,param_5,iVar7,param_7,param_8);
    }
    lVar11 = FUN_18000a0dc();
    if (*(longlong *)(lVar11 + 0x38) == 0) {
      return;
    }
  }
LAB_18000b020:
                    /* WARNING: Subroutine does not return */
  abort();
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000b028(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,uchar param_6,int param_7,
                  __uint64 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  _s_ESTypeList *p_Var3;
  char cVar4;
  uchar uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  undefined1 auStackY_1c8 [32];
  uchar local_168;
  uint local_164;
  uint local_160;
  longlong local_140;
  undefined8 uStack_138;
  __uint64 *local_128;
  longlong local_120;
  undefined8 uStack_118;
  uint local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  uint local_d8 [12];
  uint local_a8 [6];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = DAT_180034040 ^ (ulonglong)auStackY_1c8;
  local_128 = param_8;
  local_168 = '\0';
  iVar7 = FUN_18000a2c8((longlong)param_5,(ulonglong *)param_4);
  if (*(int *)(param_4 + 0x48) == 0) {
    lVar8 = FUN_18000a0dc();
    if (*(int *)(lVar8 + 0x78) != -2) {
      lVar8 = FUN_18000a0dc();
      iVar7 = *(int *)(lVar8 + 0x78);
      lVar8 = FUN_18000a0dc();
      *(undefined4 *)(lVar8 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar8 = FUN_18000a0dc();
    if (*(int *)(lVar8 + 0x78) != -2) goto LAB_18000b523;
    iVar7 = *(int *)(param_4 + 0x48) + -2;
  }
  if (-2 < iVar7) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf;
      uVar11 = *(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
                        (-4 - (longlong)(char)(&DAT_180026938)[uVar11])) >>
               ((&DAT_180026948)[uVar11] & 0x1f);
    }
    if (iVar7 < (int)uVar11) {
      if ((((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
          (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0x30) == 0)) {
        lVar8 = FUN_18000a0dc();
        if (*(longlong *)(lVar8 + 0x20) == 0) {
          return;
        }
        lVar8 = FUN_18000a0dc();
        param_1 = *(EHExceptionRecord **)(lVar8 + 0x20);
        lVar8 = FUN_18000a0dc();
        local_168 = '\x01';
        param_3 = *(_CONTEXT **)(lVar8 + 0x28);
        FUN_180009944(*(undefined8 *)(param_1 + 0x38));
        if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
           ((*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0x30) == 0))))
        goto LAB_18000b523;
        lVar8 = FUN_18000a0dc();
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          lVar8 = FUN_18000a0dc();
          p_Var3 = *(_s_ESTypeList **)(lVar8 + 0x38);
          lVar8 = FUN_18000a0dc();
          *(undefined8 *)(lVar8 + 0x38) = 0;
          cVar4 = FUN_18000cfb0((longlong)param_1,(int *)p_Var3);
          if (cVar4 == '\0') {
            uVar5 = Is_bad_exception_allowed(p_Var3);
            if (uVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_180012564();
            }
            __DestructExceptionObject((int *)param_1);
            FUN_18000c3e0(&local_140);
                    /* WARNING: Subroutine does not return */
            FUN_180009ce8(&local_140,&DAT_1800333d0);
          }
        }
      }
      FUN_18000c2c0(local_d8,(longlong)param_5,*(longlong *)(param_4 + 8));
      if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
         (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
        if (local_d8[0] != 0) {
          FUN_180009320((undefined4 *)&local_120,(int *)local_d8,iVar7);
          local_160 = (uint)uStack_118;
          local_140 = local_120;
          uStack_138 = uStack_118;
          if (local_160 < local_108) {
            do {
              local_140 = *(longlong *)(local_120 + 0x18);
              uStack_138 = *(undefined8 *)(local_120 + 0x20);
              if ((*(int *)(local_120 + 0x18) <= iVar7) && (iVar7 <= *(int *)(local_120 + 0x1c))) {
                FUN_18000c23c(local_a8,(longlong)&local_140,*(longlong *)(param_4 + 8),
                              **(uint **)(param_4 + 0x10));
                uVar11 = local_a8[0];
                local_164 = 0;
                if (local_a8[0] != 0) {
                  do {
                    local_100 = local_90;
                    uStack_f8 = uStack_88;
                    local_e0 = local_70;
                    local_f0 = local_80;
                    uStack_e8 = uStack_78;
                    lVar8 = _GetThrowImageBase();
                    piVar9 = (int *)(lVar8 + 4 +
                                    (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                    lVar8 = _GetThrowImageBase();
                    for (iVar14 = *(int *)(lVar8 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                        0 < iVar14; iVar14 = iVar14 + -1) {
                      lVar8 = _GetThrowImageBase();
                      iVar1 = *piVar9;
                      uVar10 = FUN_18000bbd0((longlong)&local_100,(byte *)(lVar8 + iVar1),
                                             *(byte **)(param_1 + 0x30));
                      if ((int)uVar10 != 0) {
                        CatchIt<class___FrameHandler4>
                                  (param_1,param_2,param_3,param_4,param_5,
                                   (HandlerType4 *)&local_100,(_s_CatchableType *)(lVar8 + iVar1),
                                   (TryBlockMapEntry4 *)&local_140,param_7,local_128,local_168,
                                   param_6);
                        goto LAB_18000b3b9;
                      }
                      piVar9 = piVar9 + 1;
                    }
                    FUN_18000c83c((longlong)local_a8);
                    local_164 = local_164 + 1;
                  } while (local_164 != uVar11);
                }
              }
LAB_18000b3b9:
              uVar11 = **(byte **)(local_120 + 8) & 0xf;
              bVar6 = (&DAT_180026948)[uVar11];
              pbVar12 = *(byte **)(local_120 + 8) + -(longlong)(char)(&DAT_180026938)[uVar11];
              uVar11 = *(uint *)(pbVar12 + -4);
              *(byte **)(local_120 + 8) = pbVar12;
              *(uint *)(local_120 + 0x18) = uVar11 >> (bVar6 & 0x1f);
              bVar6 = (&DAT_180026948)[*pbVar12 & 0xf];
              pbVar12 = pbVar12 + -(longlong)(char)(&DAT_180026938)[*pbVar12 & 0xf];
              uVar11 = *(uint *)(pbVar12 + -4);
              *(byte **)(local_120 + 8) = pbVar12;
              *(uint *)(local_120 + 0x1c) = uVar11 >> (bVar6 & 0x1f);
              pbVar13 = pbVar12 + -(longlong)(char)(&DAT_180026938)[*pbVar12 & 0xf];
              *(uint *)(local_120 + 0x20) =
                   *(uint *)(pbVar13 + -4) >> ((&DAT_180026948)[*pbVar12 & 0xf] & 0x1f);
              local_160 = local_160 + 1;
              *(byte **)(local_120 + 8) = pbVar13;
              uVar2 = *(undefined4 *)pbVar13;
              *(byte **)(local_120 + 8) = pbVar13 + 4;
              *(undefined4 *)(local_120 + 0x24) = uVar2;
            } while (local_160 < local_108);
          }
        }
        if ((((byte)*param_5 & 0x40) != 0) &&
           (bVar6 = FUN_180009058(param_4,(byte *)param_5), bVar6 == 0)) {
          lVar8 = FUN_18000a0dc();
          *(EHExceptionRecord **)(lVar8 + 0x20) = param_1;
          lVar8 = FUN_18000a0dc();
          *(_CONTEXT **)(lVar8 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
          FUN_180012564();
        }
      }
      else if (local_d8[0] != 0) {
        if (param_6 != '\0') goto LAB_18000b523;
        FUN_18000b79c(param_1,param_2,param_3,param_4,param_5,iVar7,param_7,param_8);
      }
      lVar8 = FUN_18000a0dc();
      if (*(longlong *)(lVar8 + 0x38) == 0) {
        return;
      }
    }
  }
LAB_18000b523:
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_18000b52c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,int param_7,
                  __uint64 *param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  PVOID pvVar4;
  _s_HandlerType *p_Var5;
  _s_FuncInfo *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  _s_TryBlockMapEntry local_78 [16];
  int local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint local_48;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    lVar3 = FUN_18000a0dc();
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      pvVar4 = EncodePointer((PVOID)0x0);
      lVar3 = FUN_18000a0dc();
      if ((((*(PVOID *)(lVar3 + 0x10) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar1 = _CallSETranslator<>((undefined4 *)param_1,param_2,param_3), iVar1 != 0)) {
        return;
      }
    }
    local_90 = *(undefined8 *)(param_4 + 8);
    local_98 = param_5;
    if (param_5->nTryBlocks == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_1800091ec(&local_60,&local_98,param_6,(ulonglong *)param_4,(longlong)param_5);
    uVar2 = (uint)uStack_58;
    local_88 = local_60;
    uStack_80 = uStack_58;
    if (uVar2 < local_48) {
      do {
        lVar3 = (longlong)*(int *)(*local_88 + 0x10) + (ulonglong)uVar2 * 0x14;
        local_78 = *(_s_TryBlockMapEntry (*) [16])(lVar3 + local_60[1]);
        local_68 = *(int *)(lVar3 + 0x10 + local_60[1]);
        if ((local_78._0_4_ <= param_6) && (param_6 <= local_78._4_4_)) {
          p_Var5 = (_s_HandlerType *)
                   (*(longlong *)(param_4 + 8) + -0x14 +
                   (longlong)local_68 + (local_78._8_8_ >> 0x20) * 0x14);
          if (*(int *)(p_Var5 + 4) != 0) {
            iVar1 = *(int *)(p_Var5 + 4);
            lVar3 = _GetImageBase();
            if (lVar3 + iVar1 != 0) {
              if (iVar1 == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = _GetImageBase();
                lVar3 = lVar3 + *(int *)(p_Var5 + 4);
              }
              if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_18000b757;
            }
          }
          if (((byte)*p_Var5 & 0x40) == 0) {
            CatchIt<class___FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var5,(_s_CatchableType *)0x0,
                       local_78,param_7,param_8,'\x01','\0');
          }
        }
LAB_18000b757:
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_48);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000b79c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                  _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,int param_6,int param_7,
                  __uint64 *param_8)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  PVOID pvVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined1 auStackY_178 [32];
  uint local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  uint uStack_e0;
  uint local_d0;
  uint local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  HandlerType4 local_b0 [4];
  byte local_ac;
  int local_a8;
  uint local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_180034040 ^ (ulonglong)auStackY_178;
  if (*(int *)param_1 != -0x7ffffffd) {
    lVar3 = FUN_18000a0dc();
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      pvVar4 = EncodePointer((PVOID)0x0);
      lVar3 = FUN_18000a0dc();
      if ((((*(PVOID *)(lVar3 + 0x10) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar2 = _CallSETranslator<>((undefined4 *)param_1,param_2,param_3), iVar2 != 0)) {
        return;
      }
    }
    FUN_18000c2c0(local_78,(longlong)param_5,*(longlong *)(param_4 + 8));
    if (local_78[0] == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_180009320((undefined4 *)&local_e8,(int *)local_78,param_6);
    local_118 = uStack_e0;
    if (uStack_e0 < local_d0) {
      do {
        local_f8 = *(undefined8 *)(local_e8 + 0x18);
        uStack_f0 = *(undefined8 *)(local_e8 + 0x20);
        if ((*(int *)(local_e8 + 0x18) <= param_6) && (param_6 <= *(int *)(local_e8 + 0x1c))) {
          FUN_18000c23c(local_c8,(longlong)&local_f8,*(longlong *)(param_4 + 8),
                        **(uint **)(param_4 + 0x10));
          local_c0 = local_b8;
          FUN_18000c83c((longlong)local_c8);
          uVar5 = local_c8[0];
          local_c0 = local_b8;
          FUN_18000c83c((longlong)local_c8);
          uVar8 = (ulonglong)(uVar5 - 1);
          if (uVar5 - 1 != 0) {
            do {
              FUN_18000c83c((longlong)local_c8);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if ((local_a8 != 0) && (lVar3 = _GetImageBase(), lVar3 + local_a8 != 0)) {
            if (local_a8 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = _GetImageBase();
              lVar3 = lVar3 + local_a8;
            }
            if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_18000b9d0;
          }
          if ((local_ac & 0x40) == 0) {
            CatchIt<class___FrameHandler4>
                      (param_1,param_2,param_3,param_4,param_5,local_b0,(_s_CatchableType *)0x0,
                       (TryBlockMapEntry4 *)&local_f8,param_7,param_8,'\x01','\0');
          }
        }
LAB_18000b9d0:
        uVar5 = **(byte **)(local_e8 + 8) & 0xf;
        bVar1 = (&DAT_180026948)[uVar5];
        pbVar6 = *(byte **)(local_e8 + 8) + -(longlong)(char)(&DAT_180026938)[uVar5];
        uVar5 = *(uint *)(pbVar6 + -4);
        *(byte **)(local_e8 + 8) = pbVar6;
        *(uint *)(local_e8 + 0x18) = uVar5 >> (bVar1 & 0x1f);
        bVar1 = (&DAT_180026948)[*pbVar6 & 0xf];
        pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
        uVar5 = *(uint *)(pbVar6 + -4);
        *(byte **)(local_e8 + 8) = pbVar6;
        *(uint *)(local_e8 + 0x1c) = uVar5 >> (bVar1 & 0x1f);
        pbVar7 = pbVar6 + -(longlong)(char)(&DAT_180026938)[*pbVar6 & 0xf];
        *(uint *)(local_e8 + 0x20) =
             *(uint *)(pbVar7 + -4) >> ((&DAT_180026948)[*pbVar6 & 0xf] & 0x1f);
        *(byte **)(local_e8 + 8) = pbVar7;
        *(undefined4 *)(local_e8 + 0x24) = *(undefined4 *)pbVar7;
        local_118 = local_118 + 1;
        *(byte **)(local_e8 + 8) = pbVar7 + 4;
      } while (local_118 < local_d0);
    }
  }
  return;
}




/* Library Function - Single Match
    int __cdecl TypeMatchHelper<class __FrameHandler3>(struct _s_HandlerType const * __ptr64,struct
   _s_CatchableType const * __ptr64,struct _s_ThrowInfo const * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
TypeMatchHelper<class___FrameHandler3>
          (_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = 0;
  iVar7 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = *(int *)(param_1 + 4);
    lVar4 = _GetImageBase();
    if (lVar4 + iVar3 != 0) {
      lVar4 = lVar8;
      if (iVar3 != 0) {
        iVar7 = *(int *)(param_1 + 4);
        lVar4 = _GetImageBase();
        lVar4 = iVar7 + lVar4;
      }
      if ((*(char *)(lVar4 + 0x10) != '\0') &&
         ((((byte)*param_1 & 0x80) == 0 || (((byte)*param_2 & 0x10) == 0)))) {
        lVar4 = lVar8;
        if (iVar7 != 0) {
          lVar4 = _GetImageBase();
          lVar4 = lVar4 + *(int *)(param_1 + 4);
        }
        lVar5 = _GetThrowImageBase();
        if (lVar4 != lVar5 + *(int *)(param_2 + 4)) {
          lVar4 = lVar8;
          if (*(int *)(param_1 + 4) != 0) {
            lVar4 = _GetImageBase();
            lVar4 = lVar4 + *(int *)(param_1 + 4);
          }
          lVar5 = _GetThrowImageBase();
          pcVar6 = (char *)(lVar4 + 0x10);
          lVar4 = ((longlong)*(int *)(param_2 + 4) + 0x10 + lVar5) - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar4];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) {
            return 0;
          }
        }
        if (((((((byte)*param_2 & 2) == 0) || (((byte)*param_1 & 8) != 0)) &&
             ((((byte)*param_3 & 1) == 0 || (((byte)*param_1 & 1) != 0)))) &&
            ((((byte)*param_3 & 4) == 0 || (((byte)*param_1 & 4) != 0)))) &&
           ((((byte)*param_3 & 2) == 0 || (lVar8 = 0, ((byte)*param_1 & 2) != 0)))) {
          lVar8 = 1;
        }
        return (int)lVar8;
      }
    }
  }
  return 1;
}




undefined8 FUN_18000bbd0(longlong param_1,byte *param_2,byte *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  
  lVar6 = 0;
  iVar8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = *(int *)(param_1 + 8);
    lVar4 = _GetImageBase();
    if (lVar4 + iVar3 != 0) {
      lVar4 = lVar6;
      if (iVar3 != 0) {
        iVar8 = *(int *)(param_1 + 8);
        lVar4 = _GetImageBase();
        lVar4 = lVar4 + iVar8;
      }
      if ((*(char *)(lVar4 + 0x10) != '\0') &&
         (((*(byte *)(param_1 + 4) & 0x80) == 0 || ((*param_2 & 0x10) == 0)))) {
        lVar4 = lVar6;
        if (iVar8 != 0) {
          lVar4 = _GetImageBase();
          lVar4 = lVar4 + *(int *)(param_1 + 8);
        }
        lVar5 = _GetThrowImageBase();
        if (lVar4 != lVar5 + *(int *)(param_2 + 4)) {
          if (*(int *)(param_1 + 8) != 0) {
            lVar6 = _GetImageBase();
            lVar6 = lVar6 + *(int *)(param_1 + 8);
          }
          lVar4 = _GetThrowImageBase();
          pcVar7 = (char *)(lVar6 + 0x10);
          lVar6 = ((longlong)*(int *)(param_2 + 4) + 0x10 + lVar4) - (longlong)pcVar7;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar6];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) {
            return 0;
          }
        }
        pbVar9 = (byte *)(param_1 + 4);
        if (((*param_2 & 2) != 0) && ((*pbVar9 & 8) == 0)) {
          return 0;
        }
        if (((*param_3 & 1) != 0) && ((*pbVar9 & 1) == 0)) {
          return 0;
        }
        if (((*param_3 & 4) != 0) && ((*pbVar9 & 4) == 0)) {
          return 0;
        }
        if (((*param_3 & 2) != 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 1;
}




undefined8
FUN_18000bd1c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
             _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,__uint64 *param_7,
             byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = FUN_18000a0dc();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_18000bd9e;
        goto LAB_18000bd82;
      }
    }
    else {
LAB_18000bd82:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_18000bd9e;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_18000bd9e:
  if (((byte)param_1[4] & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (param_5->dispESTypeList == 0)) ||
        (lVar2 = _GetImageBase(), lVar2 + (int)param_5->dispESTypeList == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
        return 1;
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x18))) &&
       ((0x19930522 < *(uint *)(param_1 + 0x20) &&
        ((*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0 &&
         (lVar2 = _GetThrowImageBase(), lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0))))
       )) {
      uVar3 = (*(code *)PTR__guard_dispatch_icall_1800252e0)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar4,(uint)param_8));
      return uVar3;
    }
    FUN_18000ab58(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_18000be23:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_18000a2d0((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_18000bf4d:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_18000be23;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_18000bf4d;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    __FrameHandler3::FrameUnwindToState(param_2,param_4,param_5,iVar1);
  }
  return 1;
}




undefined8
FUN_18000bf54(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
             _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,int param_6,__uint64 *param_7,
             byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar6;
  uint local_48 [12];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = FUN_18000a0dc();
  uVar5 = 0;
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_18000bfce;
        goto LAB_18000bfc0;
      }
    }
    else {
LAB_18000bfc0:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_18000bfce;
    }
    if (((byte)*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_18000bfce:
  if (((byte)param_1[4] & 0x66) == 0) {
    FUN_18000c2c0(local_48,(longlong)param_5,*(longlong *)(param_4 + 8));
    if ((local_48[0] == 0) && (((byte)*param_5 & 0x40) == 0)) {
      return 1;
    }
    if (((*(int *)param_1 == -0x1f928c9d) &&
        (((2 < *(uint *)(param_1 + 0x18) && (0x19930522 < *(uint *)(param_1 + 0x20))) &&
         (*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0)))) &&
       (lVar2 = _GetThrowImageBase(), lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0)) {
      uVar3 = (*(code *)PTR__guard_dispatch_icall_1800252e0)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar6,(uint)param_8));
      return uVar3;
    }
    FUN_18000b028(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (*(int *)(param_5 + 8) == 0) {
    return 1;
  }
  uVar4 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf;
  if (*(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
               (-4 - (longlong)(char)(&DAT_180026938)[uVar4])) >> ((&DAT_180026948)[uVar4] & 0x1f)
      == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_18000c0df:
    __FrameHandler4::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_18000a338((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if (iVar1 < -1) {
LAB_18000c1e2:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(int *)(param_5 + 8) != 0) {
        uVar5 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf;
        uVar5 = *(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
                         (-4 - (longlong)(char)(&DAT_180026938)[uVar5])) >>
                ((&DAT_180026948)[uVar5] & 0x1f);
      }
      if ((int)uVar5 <= iVar1) goto LAB_18000c1e2;
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_18000c0df;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) ||
         (uVar5 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf,
         (int)(*(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
                        (-4 - (longlong)(char)(&DAT_180026938)[uVar5])) >>
              ((&DAT_180026948)[uVar5] & 0x1f)) <= iVar1)) goto LAB_18000c1e2;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    FUN_18000cc10((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,iVar1);
  }
  return 1;
}




undefined8
thunk_FUN_18000bd1c(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                   _xDISPATCHER_CONTEXT *param_4,_s_FuncInfo *param_5,int param_6,__uint64 *param_7,
                   byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe0;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  __except_validate_context_record((longlong)param_3);
  lVar2 = FUN_18000a0dc();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
    if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_18000bd9e;
        goto LAB_18000bd82;
      }
    }
    else {
LAB_18000bd82:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_18000bd9e;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_18000bd9e:
  if (((byte)param_1[4] & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (param_5->dispESTypeList == 0)) ||
        (lVar2 = _GetImageBase(), lVar2 + (int)param_5->dispESTypeList == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if (((uint)param_5->EHFlags >> 2 & 1) == 0) {
        return 1;
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x18))) &&
       ((0x19930522 < *(uint *)(param_1 + 0x20) &&
        ((*(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0 &&
         (lVar2 = _GetThrowImageBase(), lVar2 + *(int *)(*(longlong *)(param_1 + 0x30) + 8) != 0))))
       )) {
      uVar3 = (*(code *)PTR__guard_dispatch_icall_1800252e0)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar4,(uint)param_8));
      return uVar3;
    }
    FUN_18000ab58(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if (((byte)param_1[4] & 0x20) == 0) {
LAB_18000be23:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*(int *)param_1 == -0x7fffffda) {
      iVar1 = FUN_18000a2d0((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_18000bf4d:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (*(int *)param_1 != -0x7fffffd7) goto LAB_18000be23;
      iVar1 = *(int *)(param_1 + 0x38);
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_18000bf4d;
      param_2 = *(__uint64 **)(param_1 + 0x28);
    }
    __FrameHandler3::FrameUnwindToState(param_2,param_4,param_5,iVar1);
  }
  return 1;
}




ulonglong FUN_18000c1f0(EHExceptionRecord *param_1,__uint64 *param_2,_CONTEXT *param_3,
                       _xDISPATCHER_CONTEXT *param_4,FuncInfo4 *param_5,int param_6,
                       __uint64 *param_7,byte param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18000bf54(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar2 = FUN_18000a0dc();
  *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1 & 0xffffffff;
}




uint * FUN_18000c23c(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte *pbVar1;
  longlong lVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(longlong *)(param_1 + 0x10) = param_3;
  param_1[0x12] = param_4;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
  }
  else {
    pbVar1 = (byte *)(*(int *)(param_2 + 0xc) + param_3);
    *(byte **)(param_1 + 2) = pbVar1;
    lVar2 = (longlong)pbVar1 - (longlong)(char)(&DAT_180026938)[*pbVar1 & 0xf];
    *param_1 = *(uint *)(lVar2 + -4) >> ((&DAT_180026948)[*pbVar1 & 0xf] & 0x1f);
    *(longlong *)(param_1 + 2) = lVar2;
    *(longlong *)(param_1 + 4) = lVar2;
    FUN_18000c83c((longlong)param_1);
  }
  return param_1;
}




uint * FUN_18000c2c0(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
  }
  else {
    pbVar3 = (byte *)(*(int *)(param_2 + 0xc) + param_3);
    *(byte **)(param_1 + 2) = pbVar3;
    bVar1 = (&DAT_180026948)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_180026938)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    *param_1 = uVar2 >> (bVar1 & 0x1f);
    *(byte **)(param_1 + 4) = pbVar3;
    bVar1 = (&DAT_180026948)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_180026938)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[6] = uVar2 >> (bVar1 & 0x1f);
    bVar1 = (&DAT_180026948)[*pbVar3 & 0xf];
    pbVar3 = pbVar3 + -(longlong)(char)(&DAT_180026938)[*pbVar3 & 0xf];
    uVar2 = *(uint *)(pbVar3 + -4);
    *(byte **)(param_1 + 2) = pbVar3;
    param_1[7] = uVar2 >> (bVar1 & 0x1f);
    puVar4 = (uint *)(pbVar3 + -(longlong)(char)(&DAT_180026938)[*pbVar3 & 0xf]);
    param_1[8] = puVar4[-1] >> ((&DAT_180026948)[*pbVar3 & 0xf] & 0x1f);
    *(uint **)(param_1 + 2) = puVar4;
    uVar2 = *puVar4;
    *(uint **)(param_1 + 2) = puVar4 + 1;
    param_1[9] = uVar2;
  }
  return param_1;
}




undefined8 * FUN_18000c3a4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




undefined8 * FUN_18000c3e0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




/* Library Function - Single Match
    public: static void * __ptr64 __cdecl __FrameHandler3::CxxCallCatchBlock(struct
   _EXCEPTION_RECORD * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl __FrameHandler3::CxxCallCatchBlock(_EXCEPTION_RECORD *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  ULONG_PTR UVar4;
  ULONG_PTR UVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 local_48 [2];
  
  lVar8 = FUN_18000a0dc();
  uVar1 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = FUN_18000a0dc();
  uVar2 = *(undefined8 *)(lVar8 + 0x20);
  piVar3 = (int *)param_1->ExceptionInformation[6];
  UVar4 = param_1->ExceptionInformation[5];
  UVar5 = param_1->ExceptionInformation[4];
  plVar6 = (longlong *)param_1->ExceptionInformation[1];
  __except_validate_context_record(UVar5);
  lVar8 = FUN_18000a0dc();
  *(int **)(lVar8 + 0x20) = piVar3;
  lVar8 = FUN_18000a0dc();
  *(ULONG_PTR *)(lVar8 + 0x28) = UVar5;
  lVar8 = FUN_18000a0dc();
  puVar9 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x28));
  if (param_1->ExceptionInformation[7] != 0) {
    FUN_18000a0dc();
  }
  pvVar10 = (void *)_CallSettingFrame();
  FUN_1800098b0((longlong)puVar9);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (iVar7 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar3 + 10)), iVar7 != 0)) {
    __DestructExceptionObject(piVar3);
  }
  lVar8 = FUN_18000a0dc();
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  lVar8 = FUN_18000a0dc();
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(UVar4 + 0x1c) + *plVar6) = 0xfffffffffffffffe;
  return pvVar10;
}




/* Library Function - Single Match
    public: static void * __ptr64 __cdecl __FrameHandler4::CxxCallCatchBlock(struct
   _EXCEPTION_RECORD * __ptr64)
   
   Library: Visual Studio 2019 Release */

void * __cdecl __FrameHandler4::CxxCallCatchBlock(_EXCEPTION_RECORD *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  ULONG_PTR UVar4;
  ULONG_PTR UVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ULONG_PTR local_68 [7];
  
  lVar7 = FUN_18000a0dc();
  uVar1 = *(undefined8 *)(lVar7 + 0x28);
  lVar7 = FUN_18000a0dc();
  uVar2 = *(undefined8 *)(lVar7 + 0x20);
  piVar3 = (int *)param_1->ExceptionInformation[6];
  UVar4 = param_1->ExceptionInformation[4];
  local_68[0] = param_1->ExceptionInformation[5];
  local_68[1] = param_1->ExceptionInformation[9];
  UVar5 = param_1->ExceptionInformation[3];
  __except_validate_context_record(UVar4);
  lVar7 = FUN_18000a0dc();
  *(int **)(lVar7 + 0x20) = piVar3;
  lVar7 = FUN_18000a0dc();
  *(ULONG_PTR *)(lVar7 + 0x28) = UVar4;
  lVar7 = FUN_18000a0dc();
  puVar8 = _CreateFrameInfo(local_68 + 3,*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x28));
  if (param_1->ExceptionInformation[7] != 0) {
    FUN_18000a0dc();
  }
  pvVar9 = (void *)_CallSettingFrame_LookupContinuationIndex();
  if (((longlong)pvVar9 < 2) && (pvVar9 = (void *)local_68[(longlong)pvVar9], pvVar9 == (void *)0x0)
     ) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  _CallSettingFrame_NotifyContinuationAddr();
  FUN_1800098b0((longlong)puVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (iVar6 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar3 + 10)), iVar6 != 0)) {
    __DestructExceptionObject(piVar3);
  }
  lVar7 = FUN_18000a0dc();
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  lVar7 = FUN_18000a0dc();
  *(undefined8 *)(lVar7 + 0x28) = uVar1;
  lVar7 = FUN_18000a0dc();
  *(int *)(lVar7 + 0x78) = (int)UVar5;
  lVar7 = FUN_18000a0dc();
  *(undefined4 *)(lVar7 + 0x78) = 0xfffffffe;
  return pvVar9;
}




void FUN_18000c83c(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  bVar1 = **(byte **)(param_1 + 8);
  pbVar7 = *(byte **)(param_1 + 8) + 1;
  *(byte *)(param_1 + 0x18) = bVar1;
  *(byte **)(param_1 + 8) = pbVar7;
  if ((bVar1 & 1) != 0) {
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180026938)[bVar2 & 0xf];
    *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar7 + -4) >> ((&DAT_180026948)[bVar2 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar7;
  }
  if ((bVar1 & 2) != 0) {
    uVar3 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    *(byte **)(param_1 + 8) = pbVar7;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
  }
  if ((bVar1 & 4) != 0) {
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180026938)[bVar2 & 0xf];
    *(uint *)(param_1 + 0x24) = *(uint *)(pbVar7 + -4) >> ((&DAT_180026948)[bVar2 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar7;
  }
  pbVar8 = pbVar7 + 4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar7;
  *(byte **)(param_1 + 8) = pbVar8;
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 0x30) == 0x10) {
      bVar1 = (&DAT_180026948)[*pbVar8 & 0xf];
      uVar5 = *(uint *)(((longlong)pbVar8 - (longlong)(char)(&DAT_180026938)[*pbVar8 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar8 - (longlong)(char)(&DAT_180026938)[*pbVar8 & 0xf];
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar5 >> (bVar1 & 0x1f)));
      return;
    }
    if ((bVar1 & 0x30) != 0x20) {
      return;
    }
    bVar1 = (&DAT_180026948)[*pbVar8 & 0xf];
    pbVar8 = pbVar8 + -(longlong)(char)(&DAT_180026938)[*pbVar8 & 0xf];
    uVar5 = *(uint *)(pbVar8 + -4);
    *(byte **)(param_1 + 8) = pbVar8;
    *(ulonglong *)(param_1 + 0x30) =
         (ulonglong)(*(int *)(param_1 + 0x48) + (uVar5 >> (bVar1 & 0x1f)));
    bVar1 = (&DAT_180026948)[*pbVar8 & 0xf];
    uVar5 = *(uint *)(((longlong)pbVar8 - (longlong)(char)(&DAT_180026938)[*pbVar8 & 0xf]) + -4);
    *(longlong *)(param_1 + 8) = (longlong)pbVar8 - (longlong)(char)(&DAT_180026938)[*pbVar8 & 0xf];
    uVar6 = (ulonglong)(*(int *)(param_1 + 0x48) + (uVar5 >> (bVar1 & 0x1f)));
  }
  else {
    if ((bVar1 & 0x30) == 0x10) {
      iVar4 = *(int *)pbVar8;
      *(byte **)(param_1 + 8) = pbVar7 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar4;
      return;
    }
    if ((bVar1 & 0x30) != 0x20) {
      return;
    }
    iVar4 = *(int *)pbVar8;
    *(byte **)(param_1 + 8) = pbVar7 + 8;
    *(longlong *)(param_1 + 0x30) = (longlong)iVar4;
    uVar6 = (ulonglong)*(int *)(pbVar7 + 8);
    *(byte **)(param_1 + 8) = pbVar7 + 0xc;
  }
  *(ulonglong *)(param_1 + 0x38) = uVar6;
  return;
}




undefined8 FUN_18000c9d0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      lVar2 = FUN_18000a0dc();
      *(undefined4 *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}




/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18000c9d0(&param_1->ExceptionRecord,(longlong)param_2,param_4);
  if ((int)uVar1 == 0) {
    lVar2 = FUN_18000a0dc();
    *(int *)(lVar2 + 0x78) = param_3;
  }
  return (int)uVar1;
}




/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = _GetImageBase();
  iVar2 = GetCurrentState(param_1,param_2,param_3);
  lVar4 = FUN_18000a0dc();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = (longlong)iVar2;
    lVar4 = _GetImageBase();
    iVar2 = *(int *)((longlong)(int)param_3->dispUnwindMap + lVar4 + lVar5 * 8);
    lVar4 = _GetImageBase();
    if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = _GetImageBase();
      iVar1 = *(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8);
      lVar4 = _GetImageBase();
      lVar4 = lVar4 + iVar1;
    }
    if (lVar4 != 0) {
      SetState(param_1,param_3,iVar2);
      lVar4 = _GetImageBase();
      if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) != 0) {
        _GetImageBase();
        _GetImageBase();
      }
      _CallSettingFrame();
      _SetImageBase(uVar3);
    }
  }
  lVar4 = FUN_18000a0dc();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_18000a0dc();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  SetState(param_1,param_3,iVar2);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000cc10(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined1 auStackY_138 [32];
  uint *local_108;
  ulonglong uStack_100;
  uint local_f8;
  int local_f4;
  int local_f0;
  uint *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  uint *local_b0;
  ulonglong local_a8;
  uint *local_98;
  ulonglong uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78 [2];
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_180034040 ^ (ulonglong)auStackY_138;
  local_f0 = param_4;
  local_d8 = param_1;
  local_c8 = param_1;
  local_d0 = _GetImageBase();
  iVar6 = FUN_18000a2c8(param_3,param_2);
  puVar1 = param_2 + 9;
  local_c0 = puVar1;
  if ((int)*puVar1 == 0) {
    lVar7 = FUN_18000a0dc();
    if (*(int *)(lVar7 + 0x78) != -2) {
      lVar7 = FUN_18000a0dc();
      iVar6 = *(int *)(lVar7 + 0x78);
      lVar7 = FUN_18000a0dc();
      *(undefined4 *)(lVar7 + 0x78) = 0xfffffffe;
    }
  }
  else {
    lVar7 = FUN_18000a0dc();
    if (*(int *)(lVar7 + 0x78) != -2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar6 = (int)*puVar1 + -2;
  }
  lVar7 = FUN_18000a0dc();
  *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  puVar10 = param_2 + 1;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_78[0] = 0;
  }
  else {
    pbVar9 = (byte *)((longlong)*(int *)(param_3 + 8) + *puVar10);
    uVar8 = *pbVar9 & 0xf;
    local_70 = (longlong)pbVar9 - (longlong)(char)(&DAT_180026938)[uVar8];
    local_78[0] = *(uint *)(local_70 - 4) >> ((&DAT_180026948)[uVar8] & 0x1f);
  }
  local_108 = local_78;
  local_e8 = local_78;
  uStack_100 = local_70;
  local_e0 = local_70;
  local_b8 = puVar10;
  FUN_18000d1e0((int *)local_78,iVar6,param_4,(longlong *)&local_108,(longlong *)&local_e8);
  while( true ) {
    uVar5 = uStack_100;
    local_b0 = local_78;
    local_a8 = local_70;
    if ((uStack_100 < local_70) || (uStack_100 <= local_e0)) break;
    FUN_18000d128((longlong)local_108,(longlong *)&uStack_100);
    puVar4 = local_108;
    local_88 = local_108[4];
    uVar8 = local_108[5];
    uVar2 = local_108[6];
    uVar3 = local_108[7];
    local_98 = local_108;
    uStack_90 = uVar5;
    uStack_100 = uVar5;
    uStack_84 = uVar8;
    uStack_80 = uVar2;
    uStack_7c = uVar3;
    FUN_18000d128((longlong)local_108,(longlong *)&uStack_100);
    uStack_100 = uVar5 - puVar4[4];
    iVar6 = FUN_18000d2b0((longlong *)&local_e8,param_4,(longlong)&local_98,iVar6,
                          (longlong *)&local_108);
    local_f8 = 0;
    if (uVar8 != 0) {
      local_f8 = uVar2;
    }
    local_f4 = iVar6;
    if (local_f8 != 0) {
      *(int *)puVar1 = iVar6 + 2;
      if (uVar8 - 1 < 2) {
        lVar7 = *local_d8;
        if (uVar8 == 2) {
          lVar11 = *(longlong *)((ulonglong)uVar3 + lVar7);
        }
        else {
          lVar11 = (ulonglong)uVar3 + lVar7;
        }
        _CallSettingFrameEncoded((longlong)(int)local_f8 + *puVar10,lVar7,lVar11);
      }
      else {
        _CallSettingFrame();
      }
      _SetImageBase(local_d0);
    }
  }
  lVar7 = FUN_18000a0dc();
  if (0 < *(int *)(lVar7 + 0x30)) {
    lVar7 = FUN_18000a0dc();
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
  }
  return;
}




/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetHandlerSearchState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetHandlerSearchState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  int iVar2;
  __uint64 local_res20;
  
  iVar1 = FUN_18000a2c0((longlong)param_3,(ulonglong *)param_2);
  FUN_1800090f8((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,(longlong *)&local_res20)
  ;
  iVar2 = GetUnwindTryBlock(param_1,param_2,param_3);
  if (iVar2 < iVar1) {
    SetState(&local_res20,param_3,iVar1);
    SetUnwindTryBlock(param_1,param_2,param_3,iVar1);
  }
  else {
    iVar1 = GetUnwindTryBlock(param_1,param_2,param_3);
  }
  return iVar1;
}




undefined1 FUN_18000cfb0(longlong param_1,int *param_2)

{
  _s_ThrowInfo *p_Var1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 uVar8;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = 0;
  iVar5 = 0;
  if (0 < *param_2) {
    do {
      lVar3 = _GetThrowImageBase();
      piVar6 = (int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc) + 4 + lVar3);
      lVar3 = _GetThrowImageBase();
      iVar7 = *(int *)(lVar3 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
      if (0 < iVar7) {
        do {
          lVar3 = _GetThrowImageBase();
          p_Var1 = *(_s_ThrowInfo **)(param_1 + 0x30);
          iVar2 = *piVar6;
          lVar4 = _GetImageBase();
          iVar2 = TypeMatchHelper<class___FrameHandler3>
                            ((_s_HandlerType *)
                             ((longlong)param_2[1] + lVar4 + (longlong)iVar5 * 0x14),
                             (_s_CatchableType *)(lVar3 + iVar2),p_Var1);
          if (iVar2 != 0) {
            uVar8 = 1;
            break;
          }
          iVar7 = iVar7 + -1;
          piVar6 = piVar6 + 1;
        } while (0 < iVar7);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_2);
  }
  return uVar8;
}




/* Library Function - Single Match
    unsigned char __cdecl Is_bad_exception_allowed(struct _s_ESTypeList const * __ptr64)
   
   Library: Visual Studio 2019 Release */

uchar __cdecl Is_bad_exception_allowed(_s_ESTypeList *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)param_1) {
    lVar5 = 0;
    do {
      lVar3 = _GetImageBase();
      if (*(int *)((longlong)*(int *)(param_1 + 4) + 4 + lVar3 + lVar5) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = _GetImageBase();
        iVar1 = *(int *)((longlong)*(int *)(param_1 + 4) + 4 + lVar3 + lVar5);
        lVar3 = _GetImageBase();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = __std_type_info_compare(lVar3 + 8,0x180057948);
      if (uVar2 == 0) {
        return '\x01';
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x14;
    } while (iVar4 < *(int *)param_1);
  }
  return '\0';
}




void FUN_18000d128(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = *(byte *)*param_2 & 0xf;
  lVar5 = *param_2 - (longlong)(char)(&DAT_180026938)[uVar3];
  uVar3 = *(uint *)(lVar5 + -4) >> ((&DAT_180026948)[uVar3] & 0x1f);
  *param_2 = lVar5;
  uVar4 = uVar3 & 3;
  *(uint *)(param_1 + 0x10) = uVar3 >> 2;
  *(uint *)(param_1 + 0x14) = uVar4;
  if (uVar4 - 1 < 2) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar3 = *(byte *)*param_2 & 0xf;
    bVar1 = (&DAT_180026948)[uVar3];
    lVar5 = *param_2 - (longlong)(char)(&DAT_180026938)[uVar3];
    uVar3 = *(uint *)(lVar5 + -4);
    *param_2 = lVar5;
    *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}




void FUN_18000d1c4(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d1ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}




/* Library Function - Single Match
    void __cdecl _CallMemberFunction2(void * __ptr64 const,void * __ptr64 const,void * __ptr64
   const,int)
   
   Library: Visual Studio 2019 Release */

void __cdecl _CallMemberFunction2(void *param_1,void *param_2,void *param_3,int param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(param_1,param_3,param_4);
  return;
}




void FUN_18000d1e0(int *param_1,int param_2,int param_3,longlong *param_4,longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong local_res8;
  int local_res10;
  
  local_res8 = *(longlong *)(param_1 + 2);
  bVar3 = false;
  bVar4 = false;
  iVar6 = 0;
  lVar5 = local_res8 + -1;
  lVar7 = lVar5;
  local_res10 = param_2;
  if (0 < *param_1) {
    do {
      if (iVar6 == param_2) {
        bVar3 = true;
        lVar5 = local_res8;
      }
      if (iVar6 == param_3) {
        bVar4 = true;
        lVar7 = local_res8;
      }
      if ((bVar3) && (bVar4)) break;
      FUN_18000d128((longlong)param_1,&local_res8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *param_1);
  }
  puVar1 = (undefined8 *)*param_4;
  param_4[1] = lVar5;
  uVar2 = *(undefined8 *)(param_1 + 2);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 6);
  puVar1[2] = *(undefined8 *)(param_1 + 4);
  puVar1[3] = uVar2;
  puVar1 = (undefined8 *)*param_5;
  param_5[1] = lVar7;
  uVar2 = *(undefined8 *)(param_1 + 2);
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 6);
  puVar1[2] = *(undefined8 *)(param_1 + 4);
  puVar1[3] = uVar2;
  return;
}




int FUN_18000d2b0(longlong *param_1,int param_2,longlong param_3,int param_4,longlong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uStack_10;
  
  uVar1 = param_5[1];
  if ((*(ulonglong *)(param_3 + 8) < uVar1) || (uVar1 < (ulonglong)param_1[1])) {
    param_2 = -1;
  }
  else if ((longlong)(uVar1 - param_1[1]) < (longlong)(*(longlong *)(param_3 + 8) - uVar1)) {
    lVar2 = *param_1;
    uStack_10 = param_1[1];
    if ((ulonglong)param_1[1] < uVar1) {
      do {
        FUN_18000d128(lVar2,(longlong *)&uStack_10);
        param_2 = param_2 + 1;
      } while (uStack_10 < (ulonglong)param_5[1]);
    }
  }
  else {
    lVar2 = *param_5;
    uStack_10 = param_5[1];
    param_2 = param_4;
    if (uVar1 < *(ulonglong *)(param_3 + 8)) {
      do {
        FUN_18000d128(lVar2,(longlong *)&uStack_10);
        param_4 = param_4 + -1;
        param_2 = param_4;
      } while (uStack_10 < *(ulonglong *)(param_3 + 8));
    }
  }
  return param_2;
}




void FUN_18000d390(void)

{
  FUN_18000d3b0();
  return;
}




void FUN_18000d3b0(void)

{
  return;
}




void FUN_18000d3c0(void)

{
  return;
}




/* Library Function - Single Match
    __except_validate_context_record
   
   Library: Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_1800252d0 != _guard_check_icall) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}




/* Library Function - Single Match
    __vcrt_initialize_locks
   
   Library: Visual Studio 2017 Release */

undefined8 __vcrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __vcrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_1800589a8 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_1800589d0 = DAT_1800589d0 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 == 0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* Library Function - Single Match
    __vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __vcrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1800589d0;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1800589a8 + uVar1 * 0x28));
    DAT_1800589d0 = DAT_1800589d0 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




FARPROC FUN_18000d47c(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  wchar_t *lpLibFileName;
  DWORD DVar2;
  int iVar3;
  HMODULE hLibModule;
  FARPROC pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  pFVar4 = *(FARPROC *)(&DAT_180058a58 + uVar6 * 8);
  if (pFVar4 != (FARPROC)0xffffffffffffffff) {
    if (pFVar4 != (FARPROC)0x0) {
      return pFVar4;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      uVar5 = (ulonglong)*param_3;
      hLibModule = *(HMODULE *)(&DAT_180058a40 + uVar5 * 8);
      if (hLibModule == (HMODULE)0x0) {
        lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_180027868)[uVar5];
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
        if ((hLibModule != (HMODULE)0x0) ||
           (((DVar2 = GetLastError(), DVar2 == 0x57 &&
             (iVar3 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar3 != 0)) &&
            (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))
           ) {
          LOCK();
          lVar1 = *(longlong *)(&DAT_180058a40 + uVar5 * 8);
          *(HMODULE *)(&DAT_180058a40 + uVar5 * 8) = hLibModule;
          UNLOCK();
          if (lVar1 != 0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_18000d5ad;
        }
        LOCK();
        *(undefined8 *)(&DAT_180058a40 + uVar5 * 8) = 0xffffffffffffffff;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18000d5ad:
        pFVar4 = GetProcAddress(hLibModule,param_2);
        if (pFVar4 != (FARPROC)0x0) {
          LOCK();
          *(FARPROC *)(&DAT_180058a58 + uVar6 * 8) = pFVar4;
          UNLOCK();
          return pFVar4;
        }
        break;
      }
    }
    LOCK();
    *(undefined8 *)(&DAT_180058a58 + uVar6 * 8) = 0xffffffffffffffff;
    UNLOCK();
  }
  return (FARPROC)0x0;
}




/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18000d47c(0,"FlsAlloc",(uint *)&DAT_180027928,(uint *)"FlsAlloc");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000d60a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}




/* Library Function - Single Match
    __vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsFree(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18000d47c(1,"FlsFree",(uint *)&DAT_180027940,(uint *)"FlsFree");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000d653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(param_1);
  return;
}




/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsGetValue(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18000d47c(2,"FlsGetValue",(uint *)&DAT_180027950,(uint *)"FlsGetValue");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018000d69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(param_1);
  return;
}




/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18000d47c(3,"FlsSetValue",(uint *)&DAT_180027968,(uint *)"FlsSetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)();
  }
  return;
}




/* Library Function - Single Match
    __vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_18000d47c(4,"InitializeCriticalSectionEx",(uint *)&DAT_180027980,
                         (uint *)"InitializeCriticalSectionEx");
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e0)(param_1,param_2,param_3);
  }
  return;
}




/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio 2019 Release */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18000d390();
  (*pcVar1)();
  FUN_18000d3c0();
  FUN_18000d390();
  return;
}




/* Library Function - Single Match
    _CallSettingFrame_LookupContinuationIndex
   
   Library: Visual Studio 2019 Release */

void _CallSettingFrame_LookupContinuationIndex(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18000d390();
  (*pcVar1)();
  FUN_18000d3c0();
  return;
}




/* Library Function - Single Match
    _CallSettingFrame_NotifyContinuationAddr
   
   Library: Visual Studio 2019 Release */

void _CallSettingFrame_NotifyContinuationAddr(void)

{
  FUN_18000d390();
  return;
}




/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18000d390();
  (*pcVar1)(param_3);
  FUN_18000d3c0();
  FUN_18000d390();
  return;
}




void FUN_18000d8a0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar26 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar26 = uVar11;
    puVar26[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (puVar26 <= param_1) {
    if ((param_3 < 0x180000) && (0x1fff < param_3)) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        param_1 = (undefined8 *)((longlong)param_1 + 1);
      }
      return;
    }
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
    uVar32 = *puVar26;
    uVar33 = puVar26[1];
    uVar14 = puVar26[2];
    uVar15 = puVar26[3];
    if (0x100 < param_3) {
      lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
      pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
      pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
      param_3 = param_3 + lVar30;
      if (0x100 < param_3) {
        if (0x180000 < param_3) {
          do {
            uVar29 = param_3;
            pauVar28 = pauVar27;
            pauVar24 = pauVar23;
            auVar3 = pauVar28[1];
            auVar4 = pauVar28[2];
            auVar5 = pauVar28[3];
            auVar6 = vmovntdq_avx(*pauVar28);
            *pauVar24 = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[1] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[2] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[3] = auVar3;
            auVar3 = pauVar28[5];
            auVar4 = pauVar28[6];
            auVar5 = pauVar28[7];
            auVar6 = vmovntdq_avx(pauVar28[4]);
            pauVar24[4] = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[5] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[6] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[7] = auVar3;
            pauVar23 = pauVar24 + 8;
            pauVar27 = pauVar28 + 8;
            param_3 = uVar29 - 0x100;
          } while (0xff < uVar29 - 0x100);
          uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
          switch(uVar29) {
          case 0x1e1:
          case 0x1e2:
          case 0x1e3:
          case 0x1e4:
          case 0x1e5:
          case 0x1e6:
          case 0x1e7:
          case 0x1e8:
          case 0x1e9:
          case 0x1ea:
          case 0x1eb:
          case 0x1ec:
          case 0x1ed:
          case 0x1ee:
          case 0x1ef:
          case 0x1f0:
          case 0x1f1:
          case 0x1f2:
          case 499:
          case 500:
          case 0x1f5:
          case 0x1f6:
          case 0x1f7:
          case 0x1f8:
          case 0x1f9:
          case 0x1fa:
          case 0x1fb:
          case 0x1fc:
          case 0x1fd:
          case 0x1fe:
          case 0x1ff:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
            *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
          case 0x1c1:
          case 0x1c2:
          case 0x1c3:
          case 0x1c4:
          case 0x1c5:
          case 0x1c6:
          case 0x1c7:
          case 0x1c8:
          case 0x1c9:
          case 0x1ca:
          case 0x1cb:
          case 0x1cc:
          case 0x1cd:
          case 0x1ce:
          case 0x1cf:
          case 0x1d0:
          case 0x1d1:
          case 0x1d2:
          case 0x1d3:
          case 0x1d4:
          case 0x1d5:
          case 0x1d6:
          case 0x1d7:
          case 0x1d8:
          case 0x1d9:
          case 0x1da:
          case 0x1db:
          case 0x1dc:
          case 0x1dd:
          case 0x1de:
          case 0x1df:
          case 0x1e0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
            *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
          case 0x1a1:
          case 0x1a2:
          case 0x1a3:
          case 0x1a4:
          case 0x1a5:
          case 0x1a6:
          case 0x1a7:
          case 0x1a8:
          case 0x1a9:
          case 0x1aa:
          case 0x1ab:
          case 0x1ac:
          case 0x1ad:
          case 0x1ae:
          case 0x1af:
          case 0x1b0:
          case 0x1b1:
          case 0x1b2:
          case 0x1b3:
          case 0x1b4:
          case 0x1b5:
          case 0x1b6:
          case 0x1b7:
          case 0x1b8:
          case 0x1b9:
          case 0x1ba:
          case 0x1bb:
          case 0x1bc:
          case 0x1bd:
          case 0x1be:
          case 0x1bf:
          case 0x1c0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
            *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
          case 0x181:
          case 0x182:
          case 0x183:
          case 0x184:
          case 0x185:
          case 0x186:
          case 0x187:
          case 0x188:
          case 0x189:
          case 0x18a:
          case 0x18b:
          case 0x18c:
          case 0x18d:
          case 0x18e:
          case 399:
          case 400:
          case 0x191:
          case 0x192:
          case 0x193:
          case 0x194:
          case 0x195:
          case 0x196:
          case 0x197:
          case 0x198:
          case 0x199:
          case 0x19a:
          case 0x19b:
          case 0x19c:
          case 0x19d:
          case 0x19e:
          case 0x19f:
          case 0x1a0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
            *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
          case 0x161:
          case 0x162:
          case 0x163:
          case 0x164:
          case 0x165:
          case 0x166:
          case 0x167:
          case 0x168:
          case 0x169:
          case 0x16a:
          case 0x16b:
          case 0x16c:
          case 0x16d:
          case 0x16e:
          case 0x16f:
          case 0x170:
          case 0x171:
          case 0x172:
          case 0x173:
          case 0x174:
          case 0x175:
          case 0x176:
          case 0x177:
          case 0x178:
          case 0x179:
          case 0x17a:
          case 0x17b:
          case 0x17c:
          case 0x17d:
          case 0x17e:
          case 0x17f:
          case 0x180:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
            *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
          case 0x141:
          case 0x142:
          case 0x143:
          case 0x144:
          case 0x145:
          case 0x146:
          case 0x147:
          case 0x148:
          case 0x149:
          case 0x14a:
          case 0x14b:
          case 0x14c:
          case 0x14d:
          case 0x14e:
          case 0x14f:
          case 0x150:
          case 0x151:
          case 0x152:
          case 0x153:
          case 0x154:
          case 0x155:
          case 0x156:
          case 0x157:
          case 0x158:
          case 0x159:
          case 0x15a:
          case 0x15b:
          case 0x15c:
          case 0x15d:
          case 0x15e:
          case 0x15f:
          case 0x160:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
            *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
          case 0x121:
          case 0x122:
          case 0x123:
          case 0x124:
          case 0x125:
          case 0x126:
          case 0x127:
          case 0x128:
          case 0x129:
          case 0x12a:
          case 299:
          case 300:
          case 0x12d:
          case 0x12e:
          case 0x12f:
          case 0x130:
          case 0x131:
          case 0x132:
          case 0x133:
          case 0x134:
          case 0x135:
          case 0x136:
          case 0x137:
          case 0x138:
          case 0x139:
          case 0x13a:
          case 0x13b:
          case 0x13c:
          case 0x13d:
          case 0x13e:
          case 0x13f:
          case 0x140:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
            *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
          default:
            puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
            *puVar26 = uVar32;
            puVar26[1] = uVar33;
            puVar26[2] = uVar14;
            puVar26[3] = uVar15;
          case 0x100:
            *param_1 = uVar10;
            param_1[1] = uVar11;
            param_1[2] = uVar12;
            param_1[3] = uVar13;
            return;
          }
        }
        do {
          uVar10 = *(undefined8 *)(*pauVar27 + 8);
          uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
          uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
          uVar13 = *(undefined8 *)pauVar27[1];
          uVar32 = *(undefined8 *)(pauVar27[1] + 8);
          uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[2];
          uVar16 = *(undefined8 *)(pauVar27[2] + 8);
          uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[3];
          uVar20 = *(undefined8 *)(pauVar27[3] + 8);
          uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
          *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
          *(undefined8 *)(*pauVar23 + 8) = uVar10;
          *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
          *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
          *(undefined8 *)pauVar23[1] = uVar13;
          *(undefined8 *)(pauVar23[1] + 8) = uVar32;
          *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[2] = uVar15;
          *(undefined8 *)(pauVar23[2] + 8) = uVar16;
          *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[3] = uVar19;
          *(undefined8 *)(pauVar23[3] + 8) = uVar20;
          *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
          uVar10 = *(undefined8 *)(pauVar27[4] + 8);
          uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
          uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
          uVar13 = *(undefined8 *)pauVar27[5];
          uVar32 = *(undefined8 *)(pauVar27[5] + 8);
          uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[6];
          uVar16 = *(undefined8 *)(pauVar27[6] + 8);
          uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[7];
          uVar20 = *(undefined8 *)(pauVar27[7] + 8);
          uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
          *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
          *(undefined8 *)(pauVar23[4] + 8) = uVar10;
          *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
          *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
          *(undefined8 *)pauVar23[5] = uVar13;
          *(undefined8 *)(pauVar23[5] + 8) = uVar32;
          *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[6] = uVar15;
          *(undefined8 *)(pauVar23[6] + 8) = uVar16;
          *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[7] = uVar19;
          *(undefined8 *)(pauVar23[7] + 8) = uVar20;
          *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
          pauVar23 = pauVar23 + 8;
          pauVar27 = pauVar27 + 8;
          param_3 = param_3 - 0x100;
        } while (0xff < param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00018000daf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&DAT_18005d040 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar26;
  uVar13 = puVar26[1];
  puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar26 = puVar25;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar25 & 0xf) != 0) {
    puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    *puVar25 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar26 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar25 = puVar26;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
      uVar13 = *puVar26;
      uVar32 = puVar26[1];
      puVar26 = puVar25 + -0x10;
      puVar25[-2] = *puVar1;
      puVar25[-1] = uVar12;
      puVar25[-4] = uVar13;
      puVar25[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar25[-6] = *puVar1;
      puVar25[-5] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar25[-10] = *puVar1;
      puVar25[-9] = uVar12;
      puVar25[-0xc] = uVar13;
      puVar25[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      *puVar26 = uVar32;
      puVar25[-0xf] = uVar33;
      puVar25 = puVar26;
    }
    puVar25[-0xe] = uVar12;
    puVar25[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar26 = puVar26 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar26 = uVar32;
  puVar26[1] = uVar33;
  return;
}




void FUN_18000dcd0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar26 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar26 = uVar11;
    puVar26[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (puVar26 <= param_1) {
    if ((param_3 < 0x180000) && (0x1fff < param_3)) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        param_1 = (undefined8 *)((longlong)param_1 + 1);
      }
      return;
    }
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
    uVar32 = *puVar26;
    uVar33 = puVar26[1];
    uVar14 = puVar26[2];
    uVar15 = puVar26[3];
    if (0x100 < param_3) {
      lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
      pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
      pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
      param_3 = param_3 + lVar30;
      if (0x100 < param_3) {
        if (0x180000 < param_3) {
          do {
            uVar29 = param_3;
            pauVar28 = pauVar27;
            pauVar24 = pauVar23;
            auVar3 = pauVar28[1];
            auVar4 = pauVar28[2];
            auVar5 = pauVar28[3];
            auVar6 = vmovntdq_avx(*pauVar28);
            *pauVar24 = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[1] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[2] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[3] = auVar3;
            auVar3 = pauVar28[5];
            auVar4 = pauVar28[6];
            auVar5 = pauVar28[7];
            auVar6 = vmovntdq_avx(pauVar28[4]);
            pauVar24[4] = auVar6;
            auVar3 = vmovntdq_avx(auVar3);
            pauVar24[5] = auVar3;
            auVar3 = vmovntdq_avx(auVar4);
            pauVar24[6] = auVar3;
            auVar3 = vmovntdq_avx(auVar5);
            pauVar24[7] = auVar3;
            pauVar23 = pauVar24 + 8;
            pauVar27 = pauVar28 + 8;
            param_3 = uVar29 - 0x100;
          } while (0xff < uVar29 - 0x100);
          uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
          switch(uVar29) {
          case 0x1e1:
          case 0x1e2:
          case 0x1e3:
          case 0x1e4:
          case 0x1e5:
          case 0x1e6:
          case 0x1e7:
          case 0x1e8:
          case 0x1e9:
          case 0x1ea:
          case 0x1eb:
          case 0x1ec:
          case 0x1ed:
          case 0x1ee:
          case 0x1ef:
          case 0x1f0:
          case 0x1f1:
          case 0x1f2:
          case 499:
          case 500:
          case 0x1f5:
          case 0x1f6:
          case 0x1f7:
          case 0x1f8:
          case 0x1f9:
          case 0x1fa:
          case 0x1fb:
          case 0x1fc:
          case 0x1fd:
          case 0x1fe:
          case 0x1ff:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
            *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
          case 0x1c1:
          case 0x1c2:
          case 0x1c3:
          case 0x1c4:
          case 0x1c5:
          case 0x1c6:
          case 0x1c7:
          case 0x1c8:
          case 0x1c9:
          case 0x1ca:
          case 0x1cb:
          case 0x1cc:
          case 0x1cd:
          case 0x1ce:
          case 0x1cf:
          case 0x1d0:
          case 0x1d1:
          case 0x1d2:
          case 0x1d3:
          case 0x1d4:
          case 0x1d5:
          case 0x1d6:
          case 0x1d7:
          case 0x1d8:
          case 0x1d9:
          case 0x1da:
          case 0x1db:
          case 0x1dc:
          case 0x1dd:
          case 0x1de:
          case 0x1df:
          case 0x1e0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
            *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
          case 0x1a1:
          case 0x1a2:
          case 0x1a3:
          case 0x1a4:
          case 0x1a5:
          case 0x1a6:
          case 0x1a7:
          case 0x1a8:
          case 0x1a9:
          case 0x1aa:
          case 0x1ab:
          case 0x1ac:
          case 0x1ad:
          case 0x1ae:
          case 0x1af:
          case 0x1b0:
          case 0x1b1:
          case 0x1b2:
          case 0x1b3:
          case 0x1b4:
          case 0x1b5:
          case 0x1b6:
          case 0x1b7:
          case 0x1b8:
          case 0x1b9:
          case 0x1ba:
          case 0x1bb:
          case 0x1bc:
          case 0x1bd:
          case 0x1be:
          case 0x1bf:
          case 0x1c0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
            *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
          case 0x181:
          case 0x182:
          case 0x183:
          case 0x184:
          case 0x185:
          case 0x186:
          case 0x187:
          case 0x188:
          case 0x189:
          case 0x18a:
          case 0x18b:
          case 0x18c:
          case 0x18d:
          case 0x18e:
          case 399:
          case 400:
          case 0x191:
          case 0x192:
          case 0x193:
          case 0x194:
          case 0x195:
          case 0x196:
          case 0x197:
          case 0x198:
          case 0x199:
          case 0x19a:
          case 0x19b:
          case 0x19c:
          case 0x19d:
          case 0x19e:
          case 0x19f:
          case 0x1a0:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
            *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
          case 0x161:
          case 0x162:
          case 0x163:
          case 0x164:
          case 0x165:
          case 0x166:
          case 0x167:
          case 0x168:
          case 0x169:
          case 0x16a:
          case 0x16b:
          case 0x16c:
          case 0x16d:
          case 0x16e:
          case 0x16f:
          case 0x170:
          case 0x171:
          case 0x172:
          case 0x173:
          case 0x174:
          case 0x175:
          case 0x176:
          case 0x177:
          case 0x178:
          case 0x179:
          case 0x17a:
          case 0x17b:
          case 0x17c:
          case 0x17d:
          case 0x17e:
          case 0x17f:
          case 0x180:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
            *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
          case 0x141:
          case 0x142:
          case 0x143:
          case 0x144:
          case 0x145:
          case 0x146:
          case 0x147:
          case 0x148:
          case 0x149:
          case 0x14a:
          case 0x14b:
          case 0x14c:
          case 0x14d:
          case 0x14e:
          case 0x14f:
          case 0x150:
          case 0x151:
          case 0x152:
          case 0x153:
          case 0x154:
          case 0x155:
          case 0x156:
          case 0x157:
          case 0x158:
          case 0x159:
          case 0x15a:
          case 0x15b:
          case 0x15c:
          case 0x15d:
          case 0x15e:
          case 0x15f:
          case 0x160:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
            *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
          case 0x121:
          case 0x122:
          case 0x123:
          case 0x124:
          case 0x125:
          case 0x126:
          case 0x127:
          case 0x128:
          case 0x129:
          case 0x12a:
          case 299:
          case 300:
          case 0x12d:
          case 0x12e:
          case 0x12f:
          case 0x130:
          case 0x131:
          case 0x132:
          case 0x133:
          case 0x134:
          case 0x135:
          case 0x136:
          case 0x137:
          case 0x138:
          case 0x139:
          case 0x13a:
          case 0x13b:
          case 0x13c:
          case 0x13d:
          case 0x13e:
          case 0x13f:
          case 0x140:
            auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
            *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
          default:
            puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
            *puVar26 = uVar32;
            puVar26[1] = uVar33;
            puVar26[2] = uVar14;
            puVar26[3] = uVar15;
          case 0x100:
            *param_1 = uVar10;
            param_1[1] = uVar11;
            param_1[2] = uVar12;
            param_1[3] = uVar13;
            return;
          }
        }
        do {
          uVar10 = *(undefined8 *)(*pauVar27 + 8);
          uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
          uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
          uVar13 = *(undefined8 *)pauVar27[1];
          uVar32 = *(undefined8 *)(pauVar27[1] + 8);
          uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[2];
          uVar16 = *(undefined8 *)(pauVar27[2] + 8);
          uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[3];
          uVar20 = *(undefined8 *)(pauVar27[3] + 8);
          uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
          *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
          *(undefined8 *)(*pauVar23 + 8) = uVar10;
          *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
          *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
          *(undefined8 *)pauVar23[1] = uVar13;
          *(undefined8 *)(pauVar23[1] + 8) = uVar32;
          *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[2] = uVar15;
          *(undefined8 *)(pauVar23[2] + 8) = uVar16;
          *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[3] = uVar19;
          *(undefined8 *)(pauVar23[3] + 8) = uVar20;
          *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
          uVar10 = *(undefined8 *)(pauVar27[4] + 8);
          uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
          uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
          uVar13 = *(undefined8 *)pauVar27[5];
          uVar32 = *(undefined8 *)(pauVar27[5] + 8);
          uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
          uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
          uVar15 = *(undefined8 *)pauVar27[6];
          uVar16 = *(undefined8 *)(pauVar27[6] + 8);
          uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
          uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
          uVar19 = *(undefined8 *)pauVar27[7];
          uVar20 = *(undefined8 *)(pauVar27[7] + 8);
          uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
          uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
          *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
          *(undefined8 *)(pauVar23[4] + 8) = uVar10;
          *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
          *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
          *(undefined8 *)pauVar23[5] = uVar13;
          *(undefined8 *)(pauVar23[5] + 8) = uVar32;
          *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
          *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
          *(undefined8 *)pauVar23[6] = uVar15;
          *(undefined8 *)(pauVar23[6] + 8) = uVar16;
          *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
          *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
          *(undefined8 *)pauVar23[7] = uVar19;
          *(undefined8 *)(pauVar23[7] + 8) = uVar20;
          *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
          *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
          pauVar23 = pauVar23 + 8;
          pauVar27 = pauVar27 + 8;
          param_3 = param_3 - 0x100;
        } while (0xff < param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00018000df22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&DAT_18005d0d0 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar26;
  uVar13 = puVar26[1];
  puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar26 = puVar25;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar25 & 0xf) != 0) {
    puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    *puVar25 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar26 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar25 = puVar26;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
      uVar13 = *puVar26;
      uVar32 = puVar26[1];
      puVar26 = puVar25 + -0x10;
      puVar25[-2] = *puVar1;
      puVar25[-1] = uVar12;
      puVar25[-4] = uVar13;
      puVar25[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar25[-6] = *puVar1;
      puVar25[-5] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar25[-10] = *puVar1;
      puVar25[-9] = uVar12;
      puVar25[-0xc] = uVar13;
      puVar25[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      *puVar26 = uVar32;
      puVar25[-0xf] = uVar33;
      puVar25 = puVar26;
    }
    puVar25[-0xe] = uVar12;
    puVar25[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    puVar26 = puVar26 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar26 = uVar32;
  puVar26[1] = uVar33;
  return;
}




void FUN_18000e100(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar3 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar3;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar3 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    uVar3 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    *(undefined1 *)((longlong)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar12 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    puVar12 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar12 = uVar7;
    puVar12[1] = uVar8;
    return;
  }
  puVar12 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar12 = param_1;
  }
  if (puVar12 <= param_1) {
    if (param_3 < 0x800) {
      uVar6 = *param_2;
      if (0x80 < param_3) {
        lVar15 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar12 = (undefined8 *)((longlong)param_1 - lVar15);
        puVar13 = (undefined8 *)((longlong)param_2 - lVar15);
        param_3 = param_3 + lVar15;
        if (0x80 < param_3) {
          do {
            uVar7 = puVar13[1];
            uVar8 = puVar13[2];
            uVar9 = puVar13[3];
            uVar17 = puVar13[4];
            uVar18 = puVar13[5];
            uVar10 = puVar13[6];
            uVar11 = puVar13[7];
            *puVar12 = *puVar13;
            puVar12[1] = uVar7;
            puVar12[2] = uVar8;
            puVar12[3] = uVar9;
            puVar12[4] = uVar17;
            puVar12[5] = uVar18;
            puVar12[6] = uVar10;
            puVar12[7] = uVar11;
            uVar7 = puVar13[9];
            uVar8 = puVar13[10];
            uVar9 = puVar13[0xb];
            uVar17 = puVar13[0xc];
            uVar18 = puVar13[0xd];
            uVar10 = puVar13[0xe];
            uVar11 = puVar13[0xf];
            puVar12[8] = puVar13[8];
            puVar12[9] = uVar7;
            puVar12[10] = uVar8;
            puVar12[0xb] = uVar9;
            puVar12[0xc] = uVar17;
            puVar12[0xd] = uVar18;
            puVar12[0xe] = uVar10;
            puVar12[0xf] = uVar11;
            puVar12 = puVar12 + 0x10;
            puVar13 = puVar13 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00018000e326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_18005d160 + (param_3 + 0xf >> 4) * 4) + 0x180000000))
                (uVar6);
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  lVar15 = (longlong)param_2 - (longlong)param_1;
  puVar12 = (undefined8 *)((longlong)param_1 + lVar15 + (param_3 - 0x10));
  uVar8 = *puVar12;
  uVar9 = puVar12[1];
  puVar13 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar14 = param_3 - 0x10;
  puVar12 = puVar13;
  uVar17 = uVar8;
  uVar18 = uVar9;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar12 = (undefined8 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
    *puVar13 = uVar8;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar9;
    uVar14 = (longlong)puVar12 - (longlong)param_1;
  }
  uVar16 = uVar14 >> 7;
  if (uVar16 != 0) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar13 = puVar12;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x10);
      uVar8 = puVar1[1];
      puVar12 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x20);
      uVar9 = *puVar12;
      uVar17 = puVar12[1];
      puVar12 = puVar13 + -0x10;
      puVar13[-2] = *puVar1;
      puVar13[-1] = uVar8;
      puVar13[-4] = uVar9;
      puVar13[-3] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x30);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x40);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      uVar16 = uVar16 - 1;
      puVar13[-6] = *puVar1;
      puVar13[-5] = uVar8;
      puVar13[-8] = uVar9;
      puVar13[-7] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x50);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x60);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      puVar13[-10] = *puVar1;
      puVar13[-9] = uVar8;
      puVar13[-0xc] = uVar9;
      puVar13[-0xb] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x70);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
      if (uVar16 == 0) break;
      puVar13[-0xe] = uVar8;
      puVar13[-0xd] = uVar9;
      *puVar12 = uVar17;
      puVar13[-0xf] = uVar18;
      puVar13 = puVar12;
    }
    puVar13[-0xe] = uVar8;
    puVar13[-0xd] = uVar9;
    uVar14 = uVar14 & 0x7f;
  }
  for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar12 = puVar12 + -2;
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
  }
  if ((uVar14 & 0xf) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar7;
  }
  *puVar12 = uVar17;
  puVar12[1] = uVar18;
  return;
}




void FUN_18000e3b0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar3 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar3;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar3 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    uVar3 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    *(undefined1 *)((longlong)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar12 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    puVar12 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar12 = uVar7;
    puVar12[1] = uVar8;
    return;
  }
  puVar12 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar12 = param_1;
  }
  if (puVar12 <= param_1) {
    if (param_3 < 0x800) {
      uVar6 = *param_2;
      if (0x80 < param_3) {
        lVar15 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar12 = (undefined8 *)((longlong)param_1 - lVar15);
        puVar13 = (undefined8 *)((longlong)param_2 - lVar15);
        param_3 = param_3 + lVar15;
        if (0x80 < param_3) {
          do {
            uVar7 = puVar13[1];
            uVar8 = puVar13[2];
            uVar9 = puVar13[3];
            uVar17 = puVar13[4];
            uVar18 = puVar13[5];
            uVar10 = puVar13[6];
            uVar11 = puVar13[7];
            *puVar12 = *puVar13;
            puVar12[1] = uVar7;
            puVar12[2] = uVar8;
            puVar12[3] = uVar9;
            puVar12[4] = uVar17;
            puVar12[5] = uVar18;
            puVar12[6] = uVar10;
            puVar12[7] = uVar11;
            uVar7 = puVar13[9];
            uVar8 = puVar13[10];
            uVar9 = puVar13[0xb];
            uVar17 = puVar13[0xc];
            uVar18 = puVar13[0xd];
            uVar10 = puVar13[0xe];
            uVar11 = puVar13[0xf];
            puVar12[8] = puVar13[8];
            puVar12[9] = uVar7;
            puVar12[10] = uVar8;
            puVar12[0xb] = uVar9;
            puVar12[0xc] = uVar17;
            puVar12[0xd] = uVar18;
            puVar12[0xe] = uVar10;
            puVar12[0xf] = uVar11;
            puVar12 = puVar12 + 0x10;
            puVar13 = puVar13 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00018000e5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_18005d1d0 + (param_3 + 0xf >> 4) * 4) + 0x180000000))
                (uVar6);
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  lVar15 = (longlong)param_2 - (longlong)param_1;
  puVar12 = (undefined8 *)((longlong)param_1 + lVar15 + (param_3 - 0x10));
  uVar8 = *puVar12;
  uVar9 = puVar12[1];
  puVar13 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar14 = param_3 - 0x10;
  puVar12 = puVar13;
  uVar17 = uVar8;
  uVar18 = uVar9;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar12 = (undefined8 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
    *puVar13 = uVar8;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar9;
    uVar14 = (longlong)puVar12 - (longlong)param_1;
  }
  uVar16 = uVar14 >> 7;
  if (uVar16 != 0) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar13 = puVar12;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x10);
      uVar8 = puVar1[1];
      puVar12 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x20);
      uVar9 = *puVar12;
      uVar17 = puVar12[1];
      puVar12 = puVar13 + -0x10;
      puVar13[-2] = *puVar1;
      puVar13[-1] = uVar8;
      puVar13[-4] = uVar9;
      puVar13[-3] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x30);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x40);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      uVar16 = uVar16 - 1;
      puVar13[-6] = *puVar1;
      puVar13[-5] = uVar8;
      puVar13[-8] = uVar9;
      puVar13[-7] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x50);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x60);
      uVar9 = *puVar2;
      uVar17 = puVar2[1];
      puVar13[-10] = *puVar1;
      puVar13[-9] = uVar8;
      puVar13[-0xc] = uVar9;
      puVar13[-0xb] = uVar17;
      puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x70);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
      if (uVar16 == 0) break;
      puVar13[-0xe] = uVar8;
      puVar13[-0xd] = uVar9;
      *puVar12 = uVar17;
      puVar13[-0xf] = uVar18;
      puVar13 = puVar12;
    }
    puVar13[-0xe] = uVar8;
    puVar13[-0xd] = uVar9;
    uVar14 = uVar14 & 0x7f;
  }
  for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    puVar12 = puVar12 + -2;
    uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
    uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
  }
  if ((uVar14 & 0xf) != 0) {
    *param_1 = uVar6;
    param_1[1] = uVar7;
  }
  *puVar12 = uVar17;
  puVar12[1] = uVar18;
  return;
}




void FUN_18000e660(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_18000e680(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_RAX;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar16 = (longlong)param_2 - param_1;
  lVar12 = param_1 + param_3;
  puVar15 = (undefined4 *)(lVar12 + -0x10 + lVar16);
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  puVar13 = (undefined4 *)(lVar12 + -0x10);
  uVar17 = param_3 - 0x10;
  puVar14 = puVar13;
  uVar19 = *puVar15;
  uVar20 = uVar4;
  uVar21 = uVar5;
  uVar22 = uVar6;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar14 = (undefined4 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    *puVar13 = *puVar15;
    *(undefined4 *)(lVar12 + -0xc) = uVar4;
    *(undefined4 *)(lVar12 + -8) = uVar5;
    *(undefined4 *)(lVar12 + -4) = uVar6;
    uVar17 = (longlong)puVar14 - (longlong)in_RAX;
  }
  uVar18 = uVar17 >> 7;
  if (uVar18 != 0) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar15 = puVar14;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar14 = puVar15 + -0x20;
      *(undefined8 *)(puVar15 + -4) = *puVar2;
      *(undefined8 *)(puVar15 + -2) = uVar9;
      *(undefined8 *)(puVar15 + -8) = uVar10;
      *(undefined8 *)(puVar15 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar18 = uVar18 - 1;
      *(undefined8 *)(puVar15 + -0xc) = *puVar2;
      *(undefined8 *)(puVar15 + -10) = uVar9;
      *(undefined8 *)(puVar15 + -0x10) = uVar10;
      *(undefined8 *)(puVar15 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar15 + -0x14) = *puVar2;
      *(undefined8 *)(puVar15 + -0x12) = uVar9;
      *(undefined8 *)(puVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar15 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar13 = (undefined4 *)((longlong)puVar14 + lVar16);
      uVar19 = *puVar13;
      uVar20 = puVar13[1];
      uVar21 = puVar13[2];
      uVar22 = puVar13[3];
      if (uVar18 == 0) break;
      *(undefined8 *)(puVar15 + -0x1c) = uVar9;
      *(undefined8 *)(puVar15 + -0x1a) = uVar10;
      *puVar14 = uVar19;
      puVar15[-0x1f] = uVar20;
      puVar15[-0x1e] = uVar21;
      puVar15[-0x1d] = uVar22;
      puVar15 = puVar14;
    }
    *(undefined8 *)(puVar15 + -0x1c) = uVar9;
    *(undefined8 *)(puVar15 + -0x1a) = uVar10;
    uVar17 = uVar17 & 0x7f;
  }
  for (uVar18 = uVar17 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar14 = puVar14 + -4;
    puVar15 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar15;
    uVar20 = puVar15[1];
    uVar21 = puVar15[2];
    uVar22 = puVar15[3];
  }
  if ((uVar17 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar14 = uVar19;
  puVar14[1] = uVar20;
  puVar14[2] = uVar21;
  puVar14[3] = uVar22;
  return;
}




void FUN_18000e770(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_18000e790(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_RAX;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar16 = (longlong)param_2 - param_1;
  lVar12 = param_1 + param_3;
  puVar15 = (undefined4 *)(lVar12 + -0x10 + lVar16);
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  puVar13 = (undefined4 *)(lVar12 + -0x10);
  uVar17 = param_3 - 0x10;
  puVar14 = puVar13;
  uVar19 = *puVar15;
  uVar20 = uVar4;
  uVar21 = uVar5;
  uVar22 = uVar6;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar14 = (undefined4 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    *puVar13 = *puVar15;
    *(undefined4 *)(lVar12 + -0xc) = uVar4;
    *(undefined4 *)(lVar12 + -8) = uVar5;
    *(undefined4 *)(lVar12 + -4) = uVar6;
    uVar17 = (longlong)puVar14 - (longlong)in_RAX;
  }
  uVar18 = uVar17 >> 7;
  if (uVar18 != 0) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar15 = puVar14;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar14 = puVar15 + -0x20;
      *(undefined8 *)(puVar15 + -4) = *puVar2;
      *(undefined8 *)(puVar15 + -2) = uVar9;
      *(undefined8 *)(puVar15 + -8) = uVar10;
      *(undefined8 *)(puVar15 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar18 = uVar18 - 1;
      *(undefined8 *)(puVar15 + -0xc) = *puVar2;
      *(undefined8 *)(puVar15 + -10) = uVar9;
      *(undefined8 *)(puVar15 + -0x10) = uVar10;
      *(undefined8 *)(puVar15 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar15 + -0x14) = *puVar2;
      *(undefined8 *)(puVar15 + -0x12) = uVar9;
      *(undefined8 *)(puVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar15 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar13 = (undefined4 *)((longlong)puVar14 + lVar16);
      uVar19 = *puVar13;
      uVar20 = puVar13[1];
      uVar21 = puVar13[2];
      uVar22 = puVar13[3];
      if (uVar18 == 0) break;
      *(undefined8 *)(puVar15 + -0x1c) = uVar9;
      *(undefined8 *)(puVar15 + -0x1a) = uVar10;
      *puVar14 = uVar19;
      puVar15[-0x1f] = uVar20;
      puVar15[-0x1e] = uVar21;
      puVar15[-0x1d] = uVar22;
      puVar15 = puVar14;
    }
    *(undefined8 *)(puVar15 + -0x1c) = uVar9;
    *(undefined8 *)(puVar15 + -0x1a) = uVar10;
    uVar17 = uVar17 & 0x7f;
  }
  for (uVar18 = uVar17 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar14 = puVar14 + -4;
    puVar15 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar15;
    uVar20 = puVar15[1];
    uVar21 = puVar15[2];
    uVar22 = puVar15[3];
  }
  if ((uVar17 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar14 = uVar19;
  puVar14[1] = uVar20;
  puVar14[2] = uVar21;
  puVar14[3] = uVar22;
  return;
}




ulonglong FUN_18000e870(byte param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStackY_48 [32];
  
  if (param_2 == (longlong *)0x0) {
    *(undefined1 *)(param_3 + 6) = 1;
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    return 0xffffffff;
  }
  FUN_18000fc68((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    uVar3 = FUN_18001353c((longlong)param_2);
    if (uVar3 + 2 < 2) {
      puVar6 = &DAT_180034410;
    }
    else {
      puVar6 = (undefined *)
               ((&DAT_180058e80)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    puVar5 = &DAT_180034410;
    if (puVar6[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_180058e80)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_18000e959;
    }
    bVar2 = false;
  }
  else {
LAB_18000e959:
    bVar2 = true;
  }
  if (bVar2) {
    plVar1 = param_2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 < 0) {
      uVar4 = FUN_1800136d8(param_1,param_2,param_3);
      uVar4 = uVar4 & 0xffffffff;
    }
    else {
      *(byte *)*param_2 = param_1;
      *param_2 = *param_2 + 1;
      uVar4 = (ulonglong)param_1;
    }
    FUN_18000fc74((longlong)param_2);
  }
  else {
    *(undefined1 *)(param_3 + 6) = 1;
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    FUN_180021664(auStackY_48,(PVOID)0x18000e99a);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}




longlong FUN_18000e9d8(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_180013da0(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}




ulonglong FUN_18000ea40(byte param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  uVar1 = FUN_18000e870(param_1,param_2,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}




/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVar4 = PTR_PTR_1800343f8._0_4_;
    uVar5 = PTR_PTR_1800343f8._4_4_;
    uVar6 = PTR_DAT_180034400._0_4_;
    uVar7 = PTR_DAT_180034400._4_4_;
    if (DAT_180058e68 != 0) {
      p_Var3 = FUN_180013b60();
      *(__acrt_ptd **)this = p_Var3;
      *(longlong *)p_Var1 = *(longlong *)(p_Var3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(p_Var3 + 0x88);
      __acrt_update_locale_info((longlong)p_Var3,(longlong *)p_Var1);
      FUN_180015dec(*(longlong *)this,(longlong *)(this + 0x10));
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}




void FUN_18000eb74(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_18000fc68(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_18000ee20(*(int **)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_18000fc74(*param_4);
  return;
}




void FUN_18000ec10(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  int *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_180058a88 + DAT_180058a80;
  for (plVar3 = DAT_180058a88; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_18000eb74(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}




int FUN_18000ecf4(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  
  FUN_18000fc68(*param_2);
  iVar1 = FUN_18000ee20(*(int **)*param_3);
  FUN_18000fc74(*param_4);
  return iVar1;
}




/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_18000ec10(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}




undefined8 FUN_18000ed94(int *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    param_1[4] = 0;
    pwVar1 = *(wchar_t **)(param_1 + 2);
    *(wchar_t **)param_1 = pwVar1;
    if (0 < (int)uVar3) {
      uVar2 = FUN_18001353c((longlong)param_1);
      uVar2 = FUN_180016780(uVar2,pwVar1,uVar3,param_2);
      if (uVar3 != uVar2) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}




int FUN_18000ee20(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  if (param_1 == (int *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_18000eea5;
  }
  uVar2 = FUN_18000ed94(param_1,local_48);
  if ((int)uVar2 == 0) {
    if (((uint)param_1[5] >> 0xb & 1) != 0) {
      iVar1 = FUN_18001353c((longlong)param_1);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_18000ee80;
    }
    iVar1 = 0;
  }
  else {
LAB_18000ee80:
    iVar1 = -1;
  }
LAB_18000eea5:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar3 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar3 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar3 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar3 + 0x24) = local_14;
  }
  return iVar1;
}




int __cdecl common_flush_all(bool param_1)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}




/* Library Function - Single Match
    fflush
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fflush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  undefined1 local_res8 [8];
  FILE *local_res10;
  FILE *local_res18;
  FILE **local_res20;
  FILE *local_18 [3];
  
  local_res10 = _File;
  if (_File == (FILE *)0x0) {
    iVar2 = common_flush_all(false);
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4);
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      local_res20 = &local_res10;
      local_res18 = _File;
      local_18[0] = _File;
      iVar2 = FUN_18000ecf4(local_res8,(longlong *)local_18,&local_res20,(longlong *)&local_res18);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}




ulonglong FUN_18000ef64(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if (((uint)param_1[5] >> 0xc & 1) == 0) {
      FUN_18000fc68((longlong)param_1);
      uVar1 = FUN_18000efe0(param_1,param_2);
      FUN_18000fc74((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_180016df0((undefined8 *)param_1);
  }
  return 0xffffffff;
}




ulonglong FUN_18000efe0(int *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if (((uint)param_1[5] >> 0xd & 1) != 0) {
      uVar2 = FUN_18000ed94(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock((undefined8 *)param_1);
      uVar1 = FUN_18001353c((longlong)param_1);
      uVar3 = FUN_180016c5c(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (*(LPVOID *)(param_1 + 10) != (LPVOID)0x0) {
        FUN_180016ba8(*(LPVOID *)(param_1 + 10));
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
    FUN_180016df0((undefined8 *)param_1);
  }
  return uVar2;
}




ulonglong FUN_18000f088(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  uVar1 = FUN_18000ef64(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}




uint FUN_18000f120(longlong *param_1,longlong *param_2,uint param_3,byte param_4)

{
  short sVar1;
  wint_t *pwVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  __acrt_ptd *p_Var8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  wint_t _C;
  byte bVar12;
  uint uVar13;
  int local_a8;
  
  pwVar2 = (wint_t *)*param_2;
  if (pwVar2 == (wint_t *)0x0) {
    p_Var8 = FUN_180010168();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_180010fac();
LAB_18000f19c:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_18000f19c;
  }
  _C = *pwVar2;
  *param_2 = (longlong)(pwVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_18000f8c0(param_1);
  }
  while (iVar7 = iswctype(_C,8), iVar7 != 0) {
    _C = *(wint_t *)*param_2;
    *param_2 = (longlong)((wint_t *)*param_2 + 1);
  }
  bVar12 = param_4 | 2;
  if (_C != 0x2d) {
    bVar12 = param_4;
  }
  if ((_C - 0x2b & 0xfffd) == 0) {
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  local_a8 = 0xae6;
  uVar10 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_18000f558;
  if (_C < 0x30) goto LAB_18000f4dd;
  iVar7 = 0x30;
  if (_C < 0x3a) {
LAB_18000f322:
    iVar7 = (uint)_C - iVar7;
LAB_18000f4d8:
    if (iVar7 == -1) goto LAB_18000f4dd;
LAB_18000f503:
    if (iVar7 != 0) goto LAB_18000f5b2;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar10 = 8;
      if (param_3 != 0) {
        uVar10 = param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        p_Var8 = FUN_180010168();
        *(undefined4 *)p_Var8 = 0x16;
        FUN_180010fac();
      }
      goto LAB_18000f558;
    }
    _C = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar10 = 0x10;
  }
  else {
    if (_C < 0xff10) {
      if (0x65f < _C) {
        if (_C < 0x66a) {
          iVar7 = _C - 0x660;
          goto LAB_18000f4d8;
        }
        if (0x6ef < _C) {
          if (_C < 0x6fa) {
            iVar7 = _C - 0x6f0;
            goto LAB_18000f4d8;
          }
          if (0x965 < _C) {
            if (_C < 0x970) {
              iVar7 = _C - 0x966;
              goto LAB_18000f4d8;
            }
            if (0x9e5 < _C) {
              if (_C < 0x9f0) {
                iVar7 = _C - 0x9e6;
                goto LAB_18000f4d8;
              }
              if (0xa65 < _C) {
                if (_C < 0xa70) {
                  iVar7 = _C - 0xa66;
                  goto LAB_18000f4d8;
                }
                if ((0xae5 < _C) &&
                   ((iVar7 = local_a8, _C < 0xaf0 ||
                    ((iVar7 = 0xb66, 0xb65 < _C &&
                     ((_C < 0xb70 ||
                      ((iVar7 = 0xc66, 0xc65 < _C &&
                       ((_C < 0xc70 ||
                        ((iVar7 = 0xce6, 0xce5 < _C &&
                         ((_C < 0xcf0 ||
                          ((iVar7 = 0xd66, 0xd65 < _C &&
                           ((_C < 0xd70 ||
                            ((iVar7 = 0xe50, 0xe4f < _C &&
                             ((_C < 0xe5a ||
                              ((iVar7 = 0xed0, 0xecf < _C &&
                               ((_C < 0xeda ||
                                ((iVar7 = 0xf20, 0xf1f < _C &&
                                 ((_C < 0xf2a ||
                                  ((iVar7 = 0x1040, 0x103f < _C &&
                                   ((_C < 0x104a ||
                                    ((iVar7 = 0x17e0, 0x17df < _C &&
                                     ((_C < 0x17ea || (iVar7 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))
                                     ))))))))))))))))))))))))))))))))))))) goto LAB_18000f322;
              }
            }
          }
        }
      }
    }
    else if (_C < 0xff1a) {
      iVar7 = _C - 0xff10;
      goto LAB_18000f4d8;
    }
LAB_18000f4dd:
    uVar10 = (uint)_C;
    if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
      if (_C - 0x61 < 0x1a) {
        uVar10 = _C - 0x20;
      }
      iVar7 = uVar10 - 0x37;
      goto LAB_18000f503;
    }
LAB_18000f5b2:
    uVar10 = 10;
  }
  if (param_3 != 0) {
    uVar10 = param_3;
  }
LAB_18000f558:
  uVar13 = 0;
  do {
    if (_C < 0x30) goto LAB_18000f747;
    if (_C < 0x3a) {
      uVar11 = _C - 0x30;
LAB_18000f742:
      if (uVar11 == 0xffffffff) goto LAB_18000f747;
    }
    else {
      if (_C < 0xff10) {
        if (0x65f < _C) {
          if (_C < 0x66a) {
            uVar11 = _C - 0x660;
            goto LAB_18000f742;
          }
          if (0x6ef < _C) {
            iVar7 = 0x6f0;
            if (_C < 0x6fa) {
LAB_18000f5f6:
              uVar11 = (uint)_C - iVar7;
              goto LAB_18000f742;
            }
            if (0x965 < _C) {
              iVar7 = 0x966;
              if (_C < 0x970) goto LAB_18000f5f6;
              if (0x9e5 < _C) {
                iVar7 = 0x9e6;
                if (_C < 0x9f0) goto LAB_18000f5f6;
                if (0xa65 < _C) {
                  iVar7 = 0xa66;
                  if (_C < 0xa70) goto LAB_18000f5f6;
                  if (0xae5 < _C) {
                    iVar7 = local_a8;
                    if (_C < 0xaf0) goto LAB_18000f5f6;
                    iVar7 = 0xb66;
                    if (0xb65 < _C) {
                      if (_C < 0xb70) goto LAB_18000f5f6;
                      iVar7 = 0xc66;
                      if (0xc65 < _C) {
                        if (_C < 0xc70) goto LAB_18000f5f6;
                        iVar7 = 0xce6;
                        if (0xce5 < _C) {
                          if (_C < 0xcf0) goto LAB_18000f5f6;
                          iVar7 = 0xd66;
                          if (0xd65 < _C) {
                            if (_C < 0xd70) goto LAB_18000f5f6;
                            iVar7 = 0xe50;
                            if (0xe4f < _C) {
                              if (_C < 0xe5a) goto LAB_18000f5f6;
                              iVar7 = 0xed0;
                              if (0xecf < _C) {
                                if (_C < 0xeda) goto LAB_18000f5f6;
                                iVar7 = 0xf20;
                                if (0xf1f < _C) {
                                  if (_C < 0xf2a) goto LAB_18000f5f6;
                                  iVar7 = 0x1040;
                                  if (0x103f < _C) {
                                    if (_C < 0x104a) goto LAB_18000f5f6;
                                    iVar7 = 0x17e0;
                                    if (0x17df < _C) {
                                      if (_C < 0x17ea) goto LAB_18000f5f6;
                                      if ((ushort)(_C + 0xe7f0) < 10) {
                                        uVar11 = _C - 0x1810;
                                        goto LAB_18000f742;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (_C < 0xff1a) {
        uVar11 = _C - 0xff10;
        goto LAB_18000f742;
      }
LAB_18000f747:
      uVar11 = (uint)_C;
      if (((_C < 0x41) || (0x5a < _C)) && ((uVar11 < 0x61 || (0x7a < _C)))) {
        uVar11 = 0xffffffff;
      }
      else {
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar11 = uVar11 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if (uVar10 <= uVar11) break;
    _C = *puVar4;
    uVar11 = uVar13 * uVar10 + uVar11;
    *param_2 = (longlong)(puVar4 + 1);
    bVar12 = bVar12 | (uVar11 < uVar13 * uVar10 || (uint)(0xffffffff / (ulonglong)uVar10) < uVar13)
                      << 2 | 8U;
    uVar13 = uVar11;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((_C != 0) && (puVar4[-1] != _C)) {
    p_Var8 = FUN_180010168();
    *(undefined4 *)p_Var8 = 0x16;
    FUN_180010fac();
  }
  if ((bVar12 & 8) == 0) {
    *param_2 = (longlong)pwVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pwVar2;
    return 0;
  }
  if ((bVar12 & 4) == 0) {
    if ((bVar12 & 1) == 0) {
      if ((bVar12 & 2) == 0) goto LAB_18000f88d;
LAB_18000f88a:
      uVar13 = -uVar13;
      goto LAB_18000f88d;
    }
    if ((bVar12 & 2) == 0) {
      if (uVar13 < 0x80000000) goto LAB_18000f88d;
    }
    else if (uVar13 < 0x80000001) goto LAB_18000f88a;
    bVar9 = 1;
    bVar6 = bVar12;
  }
  else {
    bVar9 = bVar12;
    bVar6 = 1;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  if ((bVar6 & bVar9) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((bVar12 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVar13 = 0xffffffff;
LAB_18000f88d:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar13;
  }
  return uVar13;
}




void FUN_18000f8c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18000e9d8(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_180015db4(lVar1,param_1 + 3,param_1[1]);
  FUN_180015e20(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}




/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    p_Var2 = FUN_180010168();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180010fac();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_180016fc4(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}




ulonglong FUN_18000f97c(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (undefined8 *)0x0) {
    local_18 = auStack_38;
    p_Var3 = FUN_180010168();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_180010fac();
    return 0xffffffff;
  }
  FUN_18000fc68((longlong)param_1);
  bVar1 = true;
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xc & 1) == 0) {
    uVar2 = FUN_18001353c((longlong)param_1);
    if (uVar2 < 0xfffffffe) {
      puVar6 = (undefined *)
               ((&DAT_180058e80)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    else {
      puVar6 = &DAT_180034410;
    }
    puVar5 = &DAT_180034410;
    if (puVar6[0x39] == '\0') {
      if (uVar2 < 0xfffffffe) {
        puVar5 = (undefined *)
                 ((&DAT_180058e80)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_18000fa48;
    }
    bVar1 = false;
  }
LAB_18000fa48:
  if (bVar1) {
    uVar4 = _fgetc_nolock(param_1);
    uVar4 = uVar4 & 0xffffffff;
    FUN_18000fc74((longlong)param_1);
  }
  else {
    p_Var3 = FUN_180010168();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_180010fac();
    FUN_180021664(local_18,(PVOID)0x18000fa6f);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}




/* Library Function - Single Match
    __acrt_initialize_stdio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_stdio(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  
  lVar1 = 0;
  lVar4 = 3;
  if (DAT_180058a80 == 0) {
    DAT_180058a80 = 0x200;
  }
  else if (DAT_180058a80 < 3) {
    DAT_180058a80 = 3;
  }
  DAT_180058a88 = _calloc_base((longlong)DAT_180058a80,8);
  FUN_180016ba8((LPVOID)0x0);
  if (DAT_180058a88 == (LPVOID)0x0) {
    DAT_180058a80 = 3;
    DAT_180058a88 = _calloc_base(3,8);
    FUN_180016ba8((LPVOID)0x0);
    if (DAT_180058a88 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_1800340d8;
  puVar5 = &DAT_1800340c0;
  lVar2 = lVar1;
  do {
    FUN_18001766c((LPCRITICAL_SECTION)(puVar5 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_180058a88) = puVar5;
    if (*(longlong *)((&DAT_180058e80)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}




undefined * FUN_18000fbb0(ulonglong param_1)

{
  return &DAT_1800340c0 + (param_1 & 0xffffffff) * 0x58;
}




/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_180017b04();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_180058a88));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_180058a88) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_180016ba8(DAT_180058a88);
  DAT_180058a88 = (LPVOID)0x0;
  return;
}




/* Library Function - Single Match
    _get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
_get_stream_buffer_pointers(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_180010fac();
    uVar2 = 0x16;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1 + 8;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = param_1;
    }
    if (param_4 != (longlong *)0x0) {
      *param_4 = param_1 + 0x10;
    }
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_18000fc68(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000fc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




void FUN_18000fc74(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000fc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_2831f20263db5b546e098b45503eb778>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &
   __ptr64,class <lambda_0838d7e100fbcbd261b69cfea6abb102> >(class
   <lambda_2831f20263db5b546e098b45503eb778> && __ptr64,class
   <lambda_5856287d7ecd2be6c9197bb4007c3f6e> & __ptr64,class
   <lambda_0838d7e100fbcbd261b69cfea6abb102> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_5d4c3fee44080f75d5d9762853974fe0>,class <lambda_532e024f4337e6fc7ad266c2bef9f4ed> &
   __ptr64,class <lambda_c87bdc10097eb2402edb8ba9bdf0697b> >(class
   <lambda_5d4c3fee44080f75d5d9762853974fe0> && __ptr64,class
   <lambda_532e024f4337e6fc7ad266c2bef9f4ed> & __ptr64,class
   <lambda_c87bdc10097eb2402edb8ba9bdf0697b> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5>,class <lambda_96f4279ff90247a4c5c5d9824f56f8c1> &
   __ptr64,class <lambda_4606be27f17b5e5579e09050fab91818> >(class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5> && __ptr64,class
   <lambda_96f4279ff90247a4c5c5d9824f56f8c1> & __ptr64,class
   <lambda_4606be27f17b5e5579e09050fab91818> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong uVar1;
  
  FUN_18000fc68(*param_2);
  uVar1 = FUN_18000fcc0(param_3);
  FUN_18000fc74(*param_4);
  return uVar1;
}




ulonglong FUN_18000fcc0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = *(longlong **)*param_1;
  uVar3 = FUN_180017c04(plVar2);
  uVar4 = FUN_18000fddc(*(wchar_t **)param_1[2],*(ulonglong *)param_1[3],*(ulonglong *)param_1[4],
                        *(longlong **)*param_1,(longlong *)param_1[1]);
  FUN_180017ccc((char)uVar3,(int *)plVar2,plVar1);
  return uVar4;
}




ulonglong FUN_18000fd40(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong *param_5)

{
  ulonglong uVar1;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 *local_20;
  longlong *local_18;
  longlong *local_10;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 != 0) {
      local_30 = &local_res20;
      local_28 = param_5;
      local_20 = &local_res8;
      local_18 = &local_res10;
      local_10 = &local_res18;
      local_40 = param_4;
      local_38 = param_4;
      uVar1 = operator()<>(local_48,&local_38,&local_30,&local_40);
      return uVar1;
    }
    *(undefined1 *)(param_5 + 6) = 1;
    *(undefined4 *)((longlong)param_5 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}




ulonglong FUN_18000fddc(wchar_t *param_1,ulonglong param_2,ulonglong param_3,longlong *param_4,
                       longlong *param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (longlong *)0x0) &&
       ((param_1 != (wchar_t *)0x0 &&
        (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
        param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))))) {
      if ((*(uint *)((longlong)param_4 + 0x14) & 0x4c0) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = *(uint *)(param_4 + 4);
      }
      uVar6 = param_2 * param_3;
      do {
        if (uVar6 == 0) {
          return param_3;
        }
        if (((*(uint *)((longlong)param_4 + 0x14) & 0xc0) == 0) || ((int)param_4[2] == 0)) {
          if (uVar8 <= uVar6) {
            if (((*(uint *)((longlong)param_4 + 0x14) & 0xc0) != 0) &&
               (uVar3 = FUN_18000ed94((int *)param_4,param_5), (int)uVar3 != 0)) goto LAB_18000ff93;
            uVar4 = uVar6;
            if (uVar8 != 0) {
              uVar4 = uVar6 - uVar6 % (ulonglong)uVar8;
            }
            uVar7 = 0xfffffffe;
            if (uVar4 < 0xfffffffe) {
              uVar7 = (uint)uVar4;
            }
            uVar2 = FUN_18001353c((longlong)param_4);
            uVar2 = FUN_180016780(uVar2,param_1,uVar7,param_5);
            if (uVar2 != 0xffffffff) {
              uVar5 = uVar2;
              if (uVar7 < uVar2) {
                uVar5 = uVar7;
              }
              uVar4 = (ulonglong)uVar5;
              uVar6 = uVar6 - uVar4;
              if (uVar7 <= uVar2) goto LAB_18000ffda;
            }
LAB_18000ff8e:
            LOCK();
            *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | 0x10;
            UNLOCK();
LAB_18000ff93:
            return (param_2 * param_3 - uVar6) / param_2;
          }
          uVar4 = FUN_1800136d8((byte)*param_1,param_4,param_5);
          if ((int)uVar4 == -1) goto LAB_18000ff93;
          uVar8 = *(uint *)(param_4 + 4);
          uVar6 = uVar6 - 1;
          if ((int)uVar8 < 1) {
            uVar8 = 1;
            uVar4 = 1;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          if ((int)param_4[2] < 0) goto LAB_18000ff8e;
          if ((*(uint *)((longlong)param_4 + 0x14) & 1) != 0) goto LAB_18000ff93;
          uVar4 = uVar6;
          if ((ulonglong)(longlong)(int)param_4[2] <= uVar6) {
            uVar4 = (longlong)(int)param_4[2];
          }
          FUN_1800217d0((undefined8 *)*param_4,(undefined8 *)param_1,uVar4);
          *(int *)(param_4 + 2) = (int)param_4[2] - (int)uVar4;
          uVar6 = uVar6 - uVar4;
          *param_4 = *param_4 + uVar4;
        }
LAB_18000ffda:
        param_1 = (wchar_t *)((longlong)param_1 + uVar4);
      } while( true );
    }
    *(undefined1 *)(param_5 + 6) = 1;
    *(undefined4 *)((longlong)param_5 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  return 0;
}




ulonglong FUN_18000fff0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  uVar1 = FUN_18000fd40(param_1,param_2,param_3,param_4,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}




/* Library Function - Single Match
    __acrt_errno_from_os_error
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_errno_from_os_error(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = &DAT_1800279b0;
  do {
    if (param_1 == *piVar4) {
      return *(undefined4 *)(&UNK_1800279b4 + uVar3 * 8);
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    piVar4 = piVar4 + 2;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  uVar2 = 0x16;
  if (param_1 - 0xbcU < 0xf) {
    uVar2 = 8;
  }
  return uVar2;
}




void FUN_1800100dc(int param_1)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  __acrt_ptd *p_Var3;
  
  p_Var2 = FUN_180013cd8();
  if (p_Var2 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1800341cc;
  }
  else {
    p_Var2 = p_Var2 + 0x24;
  }
  *(int *)p_Var2 = param_1;
  uVar1 = __acrt_errno_from_os_error(param_1);
  p_Var3 = FUN_180013cd8();
  p_Var2 = (__acrt_ptd *)&DAT_1800341c8;
  if (p_Var3 != (__acrt_ptd *)0x0) {
    p_Var2 = p_Var3 + 0x20;
  }
  *(undefined4 *)p_Var2 = uVar1;
  return;
}




void FUN_180010124(int param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(int *)(param_2 + 0x34) = param_1;
  uVar1 = __acrt_errno_from_os_error(param_1);
  *(undefined4 *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}




__acrt_ptd * FUN_180010148(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180013cd8();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_1800341cc;
  }
  else {
    p_Var1 = p_Var1 + 0x24;
  }
  return p_Var1;
}




__acrt_ptd * FUN_180010168(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180013cd8();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_1800341c8;
  }
  else {
    p_Var1 = p_Var1 + 0x20;
  }
  return p_Var1;
}




/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  LARGE_INTEGER LVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    p_Var2 = FUN_180010168();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180010fac();
    iVar1 = -1;
  }
  else {
    LVar3 = FUN_180018200((longlong *)_File);
    *_Pos = (fpos_t)LVar3;
    iVar1 = (LVar3.QuadPart != -1) - 1;
  }
  return iVar1;
}




/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong uVar1;
  
  FUN_18000fc68(*param_2);
  uVar1 = FUN_180010214(param_3);
  FUN_18000fc74(*param_4);
  return uVar1 & 0xffffffff;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180010214(undefined8 *param_1)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar1 = *(ulonglong *)*param_1;
  FUN_18000ed94(*(int **)param_1[1],(longlong *)param_1[2]);
  __acrt_stdio_free_buffer_nolock(*(undefined8 **)param_1[1]);
  LOCK();
  *(uint *)(*(longlong *)param_1[1] + 0x14) = *(uint *)(*(longlong *)param_1[1] + 0x14) & 0xfffff81f
  ;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    lVar4 = *(longlong *)param_1[4];
    uVar5 = (undefined4)(uVar1 & 0xfffffffffffffffe);
    if (lVar4 == 0) {
      pvVar2 = _calloc_base(uVar1 & 0xfffffffffffffffe,1);
      FUN_180016ba8((LPVOID)0x0);
      if (pvVar2 == (LPVOID)0x0) {
        _DAT_180058a90 = _DAT_180058a90 + 1;
        return 0xffffffff;
      }
      plVar3 = *(longlong **)param_1[1];
      LOCK();
      *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x140;
      UNLOCK();
      *(undefined4 *)(plVar3 + 4) = uVar5;
      *plVar3 = (longlong)pvVar2;
      plVar3[1] = (longlong)pvVar2;
      goto LAB_1800102e5;
    }
    plVar3 = *(longlong **)param_1[1];
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x180;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = uVar5;
  }
  else {
    plVar3 = *(longlong **)param_1[1];
    lVar4 = (longlong)plVar3 + 0x1c;
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x400;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = 2;
  }
  *plVar3 = lVar4;
  plVar3[1] = lVar4;
LAB_1800102e5:
  *(undefined4 *)(plVar3 + 2) = 0;
  return 0;
}




ulonglong FUN_1800102fc(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined *local_80;
  undefined *puStack_78;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  int *local_28;
  undefined8 *local_20;
  
  local_98[0] = 0;
  local_70 = DAT_180058e68 == 0;
  local_88 = 0;
  local_68 = '\0';
  local_60 = '\0';
  if ((bool)local_70) {
    local_80 = PTR_PTR_1800343f8;
    puStack_78 = PTR_DAT_180034400;
  }
  local_res8[0] = param_3;
  local_res10 = param_4;
  local_res20 = param_1;
  local_58 = param_2;
  if ((param_1 == 0) ||
     ((param_3 != 4 && (((param_3 != 0 && (param_3 != 0x40)) || (0x7ffffffd < param_4 - 2U)))))) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_40 = &local_res10;
    local_38 = &local_res20;
    local_30 = local_98;
    local_28 = local_res8;
    local_20 = &local_58;
    local_50 = param_1;
    local_48 = param_1;
    uVar2 = operator()<>(local_res18,&local_48,&local_40,&local_50);
    uVar2 = uVar2 & 0xffffffff;
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_18000e9d8(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_18000e9d8(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}




void FUN_180010434(LPVOID param_1)

{
  FUN_180016ba8(param_1);
  return;
}




uint FUN_180010448(uint param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  undefined *puVar5;
  undefined *puVar6;
  
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    uVar3 = FUN_18001353c((longlong)param_2);
    puVar5 = &DAT_180034410;
    if (uVar3 + 2 < 2) {
      puVar6 = &DAT_180034410;
    }
    else {
      puVar6 = (undefined *)
               ((&DAT_180058e80)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    if (puVar6[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_180058e80)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1800104f4;
    }
    p_Var4 = FUN_180010168();
    *(undefined4 *)p_Var4 = 0x16;
    FUN_180010fac();
  }
  else {
LAB_1800104f4:
    if ((param_1 != 0xffffffff) &&
       (((*(uint *)((longlong)param_2 + 0x14) & 1) != 0 ||
        (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 6) == 6)))) {
      if (param_2[1] == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (*param_2 == param_2[1]) {
        if ((int)param_2[2] != 0) {
          return 0xffffffff;
        }
        *param_2 = *param_2 + 1;
      }
      lVar2 = *param_2;
      pcVar1 = (char *)(lVar2 + -1);
      *param_2 = (longlong)pcVar1;
      if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        *param_2 = lVar2;
        return 0xffffffff;
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}




/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (_File == (FILE *)0x0) {
    p_Var2 = FUN_180010168();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180010fac();
    uVar1 = 0xffffffff;
  }
  else {
    FUN_18000fc68((longlong)_File);
    uVar1 = FUN_180010448(_Ch,(longlong *)_File);
    FUN_18000fc74((longlong)_File);
  }
  return uVar1;
}




/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_180010b90((longlong *)_File,(LARGE_INTEGER)*_Pos,0);
    return iVar1;
  }
  p_Var2 = FUN_180010168();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_180010fac();
  return -1;
}




ulonglong FUN_1800105f8(undefined1 (*param_1) [32],ulonglong param_2,ulonglong param_3,
                       ulonglong param_4,longlong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  __acrt_ptd *p_Var6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  ulonglong uVar11;
  
  plVar3 = param_5;
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_1 != (undefined1 (*) [32])0x0) {
      if ((param_5 != (longlong *)0x0) &&
         (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
         param_4 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
LAB_180010696:
        if ((*(uint *)((longlong)param_5 + 0x14) & 0x4c0) == 0) {
          param_5._0_4_ = 0x1000;
        }
        else {
          param_5._0_4_ = *(uint *)(param_5 + 4);
        }
        uVar8 = param_3 * param_4;
        pauVar9 = param_1;
        uVar10 = param_2;
        do {
          if (uVar8 == 0) {
            return param_4;
          }
          if ((*(uint *)((longlong)plVar3 + 0x14) & 0x4c0) == 0) {
LAB_180010756:
            if (uVar8 < (uint)param_5) {
              uVar7 = FUN_180016fc4(plVar3);
              if ((int)uVar7 == -1) goto LAB_180010841;
              if (uVar10 == 0) goto LAB_180010819;
              uVar8 = uVar8 - 1;
              uVar10 = uVar10 - 1;
              uVar11 = 1;
              (*pauVar9)[0] = (char)uVar7;
              param_5._0_4_ = *(uint *)(plVar3 + 4);
            }
            else {
              uVar11 = uVar8 & 0xffffffff;
              if (0x7fffffff < uVar8) {
                uVar11 = 0x7fffffff;
              }
              if ((uint)param_5 != 0) {
                uVar11 = (ulonglong)(uint)((int)uVar11 - (int)(uVar11 % (ulonglong)(uint)param_5));
              }
              if (uVar10 < uVar11) {
LAB_180010819:
                if (param_2 != 0xffffffffffffffff) {
                  FUN_180021e70(param_1,0,param_2);
                }
                p_Var6 = FUN_180010168();
                *(undefined4 *)p_Var6 = 0x22;
                goto LAB_18001063c;
              }
              *(undefined4 *)(plVar3 + 2) = 0;
              *plVar3 = plVar3[1];
              uVar4 = FUN_18001353c((longlong)plVar3);
              iVar5 = FUN_1800188b8(uVar4,(LPWSTR)pauVar9,(uint)uVar11);
              if (iVar5 == 0) {
                LOCK();
                *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 8;
                UNLOCK();
                goto LAB_180010841;
              }
              if (iVar5 < 0) goto LAB_18001083c;
              uVar11 = (ulonglong)iVar5;
              uVar8 = uVar8 - uVar11;
              uVar10 = uVar10 - uVar11;
            }
          }
          else {
            uVar4 = *(uint *)(plVar3 + 2);
            if (uVar4 == 0) goto LAB_180010756;
            if ((int)uVar4 < 0) {
LAB_18001083c:
              LOCK();
              *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x10;
              UNLOCK();
LAB_180010841:
              return (param_3 * param_4 - uVar8) / param_3;
            }
            uVar11 = (ulonglong)uVar4;
            if (uVar8 < (ulonglong)(longlong)(int)uVar4) {
              uVar11 = uVar8 & 0xffffffff;
            }
            if (uVar10 < uVar11) goto LAB_180010819;
            if (uVar11 != 0) {
              if (pauVar9 != (undefined1 (*) [32])0x0) {
                if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
                  FUN_1800217d0((undefined8 *)pauVar9,(undefined8 *)*plVar3,uVar11);
                  goto LAB_18001073d;
                }
                FUN_180021e70(pauVar9,0,uVar10);
              }
              p_Var6 = FUN_180010168();
              *(undefined4 *)p_Var6 = 0x16;
              FUN_180010fac();
            }
LAB_18001073d:
            *(int *)(plVar3 + 2) = (int)plVar3[2] - (int)uVar11;
            uVar8 = uVar8 - uVar11;
            *plVar3 = *plVar3 + uVar11;
            uVar10 = uVar10 - uVar11;
          }
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + uVar11);
        } while( true );
      }
      if (param_2 != 0xffffffffffffffff) {
        FUN_180021e70(param_1,0,param_2);
      }
      if ((param_5 != (longlong *)0x0) &&
         (auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
         param_4 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0)))
      goto LAB_180010696;
    }
    p_Var6 = FUN_180010168();
    *(undefined4 *)p_Var6 = 0x16;
LAB_18001063c:
    FUN_180010fac();
  }
  return 0;
}




/* Library Function - Single Match
    fread
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sVar1;
}




/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_18000fc68((longlong)_File);
      uVar2 = FUN_1800105f8(_DstBuf,_DstSize,_ElementSize,_Count,(longlong *)_File);
      FUN_18000fc74((longlong)_File);
      return uVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_180021e70(_DstBuf,0,_DstSize);
    }
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_180010fac();
  }
  return 0;
}




int FUN_180010920(longlong *param_1,LARGE_INTEGER param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  
  if ((param_1 == (longlong *)0x0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    iVar1 = -1;
  }
  else {
    FUN_18000fc68((longlong)param_1);
    iVar1 = FUN_180010aa4(param_1,param_2,param_3,param_4);
    FUN_18000fc74((longlong)param_1);
  }
  return iVar1;
}




ulonglong FUN_1800109bc(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if ((((param_3 != 2) &&
       (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
       (*(uint *)((longlong)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
      (*(uint *)((longlong)param_1 + 0x14) & 6) == 0)) && (0 < (int)param_1[2])) {
    uVar1 = *(uint *)(param_1 + 3);
    in_RAX = (longlong)(int)uVar1 >> 6;
    if ((-1 < *(char *)((&DAT_180058e80)[in_RAX] + 0x38 + (ulonglong)(uVar1 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_180058e80)[in_RAX] + 0x39 + (ulonglong)(uVar1 & 0x3f) * 0x48) == '\0')) {
      lVar3 = param_2;
      if (param_3 == 0) {
        in_RAX = FUN_180018f78(uVar1,(LARGE_INTEGER)0x0,1);
        if ((longlong)in_RAX < 0) goto LAB_180010a96;
        lVar2 = in_RAX - (longlong)(int)param_1[2];
        lVar3 = param_2 - lVar2;
        iVar4 = -(int)(param_2 >> 0x3f);
        in_RAX = (longlong)(int)param_1[2];
        if ((iVar4 != -(int)(lVar2 >> 0x3f)) && (in_RAX = 0, iVar4 != -(int)(lVar3 >> 0x3f)))
        goto LAB_180010a96;
      }
      if ((param_1[1] - *param_1 <= lVar3) && (lVar3 <= (int)param_1[2])) {
        *param_1 = *param_1 + lVar3;
        *(int *)(param_1 + 2) = (int)param_1[2] - (int)lVar3;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_180010a96:
  return in_RAX & 0xffffffffffffff00;
}




int FUN_180010aa4(longlong *param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  LARGE_INTEGER LVar3;
  longlong lVar4;
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) == 0) {
    *(undefined1 *)(param_4 + 6) = 1;
    iVar1 = -1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff7;
    UNLOCK();
    uVar2 = FUN_1800109bc(param_1,param_2.QuadPart,param_3);
    if ((char)uVar2 == '\0') {
      if (param_3 == 1) {
        LVar3 = thunk_FUN_180017d78(param_1,param_4);
        param_2.QuadPart = param_2.QuadPart + LVar3.QuadPart;
        param_3 = 0;
      }
      FUN_18000ed94((int *)param_1,param_4);
      *param_1 = param_1[1];
      *(undefined4 *)(param_1 + 2) = 0;
      if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
        if ((((byte)*(undefined4 *)((longlong)param_1 + 0x14) & 0x41) == 0x41) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(undefined4 *)(param_1 + 4) = 0x200;
        }
      }
      else {
        LOCK();
        *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffffc;
        UNLOCK();
      }
      lVar4 = thunk_FUN_180018e28(*(uint *)(param_1 + 3),param_2,param_3,(longlong)param_4);
      iVar1 = (lVar4 != -1) - 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}




int FUN_180010b90(longlong *param_1,LARGE_INTEGER param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  iVar1 = FUN_180010920(param_1,param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}




__acrt_ptd * FUN_180010c28(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  p_Var1 = (__acrt_ptd *)*param_1;
  lVar2 = 0;
  if (p_Var1 == (__acrt_ptd *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_180013da0(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
  }
  return p_Var1;
}




longlong FUN_180010c94(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __acrt_call_reportfault
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 local_res8 [8];
  undefined1 auStackY_608 [32];
  DWORD64 local_5c8;
  _EXCEPTION_POINTERS local_5c0;
  ulonglong local_5b0;
  PVOID local_5a8 [2];
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_180034040 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_180008890();
  }
  FUN_180021e70((undefined1 (*) [32])&local_598,0,0x98);
  FUN_180021e70((undefined1 (*) [32])&local_4f8,0,0x4d0);
  local_5c0.ExceptionRecord = &local_598;
  local_5c0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8,local_4f8.Rip,FunctionEntry,&local_4f8,local_5a8,&local_5b0,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)local_res8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5c0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_180008890();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180010e3c(undefined8 param_1)

{
  _DAT_180058a98 = param_1;
  return;
}




void FUN_180010e44(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  )

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  FUN_180010ee0(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}




void FUN_180010ee0(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,longlong *param_6)

{
  __acrt_ptd *p_Var1;
  ulonglong *puVar2;
  byte bVar3;
  
  p_Var1 = FUN_180010c28(param_6);
  if (((p_Var1 == (__acrt_ptd *)0x0) || (*(longlong *)(p_Var1 + 0x3b8) == 0)) &&
     (puVar2 = (ulonglong *)FUN_180010c94(0x180058a98,(longlong)param_6),
     bVar3 = (byte)DAT_180034040 & 0x3f,
     (*puVar2 ^ DAT_180034040) >> bVar3 == 0 && (*puVar2 ^ DAT_180034040) << 0x40 - bVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_180010fac(void)

{
  FUN_180010e44((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return;
}




void FUN_180010fcc(void)

{
  FUN_180010e44((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}




/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x18001102a;
  __acrt_call_reportfault(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x180011030;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x00018001103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}




uint FUN_180011044(LPCSTR param_1,longlong param_2,undefined8 param_3,UINT param_4)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_1 == (LPCSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_180016ba8(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar2 = FUN_18001907c(param_4,9,param_1,-1,(LPWSTR)0x0,0);
      uVar7 = (ulonglong)iVar2;
      if (iVar2 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_180016ba8(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar4 = _malloc_base(uVar7 * 2);
          *(LPVOID *)(param_2 + 0x10) = pvVar4;
          uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
          uVar6 = 0;
          if (uVar1 == 0) {
            uVar6 = uVar7;
          }
          *(bool *)(param_2 + 0x28) = uVar1 == 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar1 != 0) {
            return uVar1;
          }
        }
        iVar2 = FUN_18001907c(param_4,9,param_1,-1,*(LPWSTR *)(param_2 + 0x10),(int)uVar6);
        if ((longlong)iVar2 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar2 + -1;
          return 0;
        }
      }
      DVar3 = GetLastError();
      FUN_1800100dc(DVar3);
      p_Var5 = FUN_180010168();
      return *(uint *)p_Var5;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_180016ba8(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar4 = _malloc_base(2);
      *(LPVOID *)(param_2 + 0x10) = pvVar4;
      uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
      *(bool *)(param_2 + 0x28) = uVar1 == 0;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)(uVar1 == 0);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}




LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  undefined7 extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_180016ba8(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_1800595b0,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_18001f410();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_1800124ec(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      p_Var4 = FUN_180010168();
      *(undefined4 *)p_Var4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




/* Library Function - Single Match
    islower
   
   Library: Visual Studio 2019 Release */

int __cdecl islower(int _C)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong *local_res10 [3];
  
  if (DAT_180058e68 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1800342a0 + (longlong)_C * 2) & 2;
    }
  }
  else {
    p_Var2 = FUN_180013b60();
    local_res10[0] = *(longlong **)(p_Var2 + 0x90);
    __acrt_update_locale_info((longlong)p_Var2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 2;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,2,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}




/* Library Function - Single Match
    isupper
   
   Library: Visual Studio 2019 Release */

int __cdecl isupper(int _C)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong *local_res10 [3];
  
  if (DAT_180058e68 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1800342a0 + (longlong)_C * 2) & 1;
    }
  }
  else {
    p_Var2 = FUN_180013b60();
    local_res10[0] = *(longlong **)(p_Var2 + 0x90);
    __acrt_update_locale_info((longlong)p_Var2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 1;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,1,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_180011360(param_3);
  __acrt_unlock(*param_4);
  return;
}




void FUN_180011360(undefined8 *param_1)

{
  undefined *puVar1;
  
  if (DAT_180058ab0 != '\0') {
    return;
  }
  LOCK();
  DAT_180058aa0 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_180058aa8 != DAT_180034040) {
      (*(code *)PTR__guard_dispatch_icall_1800252e8)(0,0,0);
    }
    puVar1 = &DAT_180058e38;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_1800113da;
    puVar1 = &DAT_180058e50;
  }
  FUN_18001307c(puVar1);
LAB_1800113da:
  if (*(int *)*param_1 == 0) {
    FUN_1800132dc((undefined8 *)&DAT_180025530,(undefined8 *)&DAT_180025550);
  }
  FUN_1800132dc((undefined8 *)&DAT_180025558,(undefined8 *)&DAT_180025560);
  if (*(int *)param_1[1] == 0) {
    DAT_180058ab0 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}




void FUN_18001142c(UINT param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  HMODULE pHVar2;
  int *piVar3;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34 [3];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
        (piVar3 = (int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused),
        *piVar3 == 0x4550)) &&
       ((((short)piVar3[6] == 0x20b && (0xe < (uint)piVar3[0x21])) && (piVar3[0x3e] != 0)))) {
      FUN_18001154c(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  operator()<>(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] != 0) {
    return;
  }
  FUN_1800114f4(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




void FUN_1800114f4(UINT param_1)

{
  bool bVar1;
  HANDLE hProcess;
  
  bVar1 = FUN_180011528();
  if (bVar1) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_18001154c(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}




bool FUN_180011528(void)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = FUN_1800191bc();
  if (CONCAT31(extraout_var,bVar1) == 1) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_180019188();
    bVar1 = (char)uVar2 == '\0';
  }
  return bVar1;
}




void FUN_18001154c(undefined4 param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}




void FUN_1800115bc(undefined8 param_1)

{
  DAT_180058aa8 = param_1;
  return;
}




void FUN_1800115c4(void)

{
  FUN_18001142c(0,0,1);
  return;
}




void FUN_1800115d4(UINT param_1)

{
  FUN_18001142c(param_1,2,0);
  return;
}




undefined4 FUN_1800115e0(void)

{
  return DAT_180058aa0;
}




/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_18001766c((LPCRITICAL_SECTION)(&DAT_180058ac0 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_180058cf0 = DAT_180058cf0 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xe);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180011642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180058ac0 + (longlong)param_1 * 0x28));
  return;
}




/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180058cf0;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180058ac0 + uVar1 * 0x28));
    DAT_180058cf0 = DAT_180058cf0 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180011696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180058ac0 + (longlong)param_1 * 0x28));
  return;
}




/* Library Function - Single Match
    _lock_locales
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _lock_locales(void)

{
  __acrt_eagerly_load_locale_apis();
                    /* WARNING: Could not recover jumptable at 0x0001800116b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180058b60);
  return;
}




void FUN_1800116bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001800116c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180058b60);
  return;
}




LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800595b0,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18001f410();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800124ec(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_180010168();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




/* Library Function - Multiple Matches With Same Base Name
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_41e84717acc955b55e9d0d529e507b68>,class <lambda_b37934c380d97b75fd242ea49540127a> &
   __ptr64,class <lambda_bb6db9f9ac473960206e0d4b942b5506> >(class
   <lambda_41e84717acc955b55e9d0d529e507b68> && __ptr64,class
   <lambda_b37934c380d97b75fd242ea49540127a> & __ptr64,class
   <lambda_bb6db9f9ac473960206e0d4b942b5506> && __ptr64) __ptr64
    public: char * __ptr64 __cdecl __crt_seh_guarded_call<char * __ptr64>::operator()<class
   <lambda_9bd929c17696992ce54f1d748594fc62>,class <lambda_082c17da81b0962e08c0587ee0fac50c> &
   __ptr64,class <lambda_9c08ac857f4975304d44e9f601d9b878> >(class
   <lambda_9bd929c17696992ce54f1d748594fc62> && __ptr64,class
   <lambda_082c17da81b0962e08c0587ee0fac50c> & __ptr64,class
   <lambda_9c08ac857f4975304d44e9f601d9b878> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPWSTR operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  LPWSTR pWVar1;
  
  __acrt_lock(*param_2);
  pWVar1 = FUN_180011714(param_3);
  __acrt_unlock(*param_4);
  return pWVar1;
}




LPWSTR FUN_180011714(undefined8 *param_1)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  LPWSTR pWVar7;
  __acrt_ptd *p_Var8;
  LPWSTR pWVar9;
  ulonglong local_res8;
  ulonglong local_res10;
  longlong local_38;
  undefined8 local_30;
  
  pbVar1 = *(byte **)param_1[1];
  iVar5 = *(int *)*param_1;
  if (pbVar1 == (byte *)0x0) {
    pwVar6 = _wsetlocale(iVar5,(wchar_t *)0x0);
  }
  else {
    iVar4 = FUN_180019508(&local_res10,(LPWSTR)0x0,0,pbVar1,0x7fffffff);
    if ((iVar4 == 0x16) || (iVar4 == 0x22)) {
LAB_180011982:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pWVar7 = _calloc_base(local_res10,2);
    pWVar9 = (LPWSTR)0x0;
    if (pWVar7 == (LPWSTR)0x0) goto LAB_180011796;
    iVar4 = FUN_180019508((ulonglong *)0x0,pWVar7,local_res10,pbVar1,0xffffffffffffffff);
    if (iVar4 != 0) {
      if ((iVar4 == 0x16) || (pWVar9 = pWVar7, iVar4 == 0x22)) goto LAB_180011982;
      goto LAB_180011796;
    }
    pwVar6 = _wsetlocale(iVar5,pWVar7);
    FUN_180016ba8(pWVar7);
  }
  if (pwVar6 == (LPCWSTR)0x0) {
    return (LPWSTR)0x0;
  }
  p_Var8 = FUN_180013b60();
  local_38 = *(longlong *)(p_Var8 + 0x90);
  local_30 = *(undefined8 *)(p_Var8 + 0x88);
  local_res8 = 0;
  iVar5 = FUN_180019a04(&local_res8,(byte *)0x0,0,pwVar6,0,(undefined4 *)&local_38);
  if (iVar5 == 0) {
    pWVar9 = _malloc_base(local_res8 + 4);
    if (pWVar9 == (LPWSTR)0x0) {
      return (LPWSTR)0x0;
    }
    pWVar7 = pWVar9 + 2;
    iVar5 = FUN_180019a04((ulonglong *)0x0,(byte *)pWVar7,local_res8,pwVar6,0xffffffffffffffff,
                          (undefined4 *)&local_38);
    lVar3 = local_38;
    if (iVar5 == 0) {
      piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + local_38);
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FUN_180016ba8(*(LPVOID *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + local_38));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = 0;
        }
      }
      if (((DAT_180034560 & *(uint *)(p_Var8 + 0x3a8)) == 0) &&
         (piVar2 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3), piVar2 != (int *)0x0
         )) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FUN_180016ba8(*(LPVOID *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3));
          *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = 0;
        }
      }
      *(undefined4 *)pWVar9 = *(undefined4 *)(lVar3 + 0x10);
      *(LPWSTR *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = pWVar9;
      *(LPWSTR *)(((longlong)*(int *)*param_1 + 1) * 0x20 + lVar3) = pWVar7;
      return pWVar7;
    }
    if ((iVar5 != 0x16) && (iVar5 != 0x22)) {
LAB_180011796:
      FUN_180016ba8(pWVar9);
      return (LPWSTR)0x0;
    }
  }
  else if ((iVar5 != 0x16) && (iVar5 != 0x22)) {
    return (LPWSTR)0x0;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}




/* Library Function - Single Match
    setlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl setlocale(int _Category,char *_Locale)

{
  LPWSTR pWVar1;
  int local_res8 [2];
  char *local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char **local_18;
  
  local_res8[0] = _Category;
  local_res10 = _Locale;
  __acrt_eagerly_load_locale_apis();
  local_20 = local_res8;
  local_18 = &local_res10;
  local_res20[0] = 4;
  local_28[0] = 4;
  pWVar1 = operator()<>(local_res18,local_28,&local_20,local_res20);
  return (char *)pWVar1;
}




undefined8 FUN_1800119fc(void)

{
  __acrt_ptd *p_Var1;
  undefined8 *local_res8 [4];
  
  p_Var1 = FUN_180013b60();
  local_res8[0] = *(undefined8 **)(p_Var1 + 0x90);
  __acrt_update_locale_info((longlong)p_Var1,(longlong *)local_res8);
  return *local_res8[0];
}




undefined4 FUN_180011a2c(void)

{
  __acrt_ptd *p_Var1;
  longlong local_res8 [4];
  
  p_Var1 = FUN_180013b60();
  local_res8[0] = *(longlong *)(p_Var1 + 0x90);
  __acrt_update_locale_info((longlong)p_Var1,local_res8);
  return *(undefined4 *)(local_res8[0] + 0xc);
}




longlong FUN_180011a5c(void)

{
  __acrt_ptd *p_Var1;
  longlong local_res8 [4];
  
  p_Var1 = FUN_180013b60();
  local_res8[0] = *(longlong *)(p_Var1 + 0x90);
  __acrt_update_locale_info((longlong)p_Var1,local_res8);
  return local_res8[0] + 0x128;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LPCSTR FUN_180011a90(undefined8 *param_1)

{
  UINT *pUVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  BOOL BVar6;
  int iVar7;
  LPWSTR pWVar8;
  LPCSTR pCVar9;
  LPCSTR pCVar10;
  LPCSTR pCVar11;
  LPCSTR pCVar12;
  longlong lVar13;
  LPCSTR pCVar14;
  BYTE *pBVar15;
  LPCSTR pCVar16;
  LPCSTR pCVar17;
  LPCSTR pCVar18;
  undefined1 auStackY_c8 [32];
  undefined4 *local_70;
  undefined8 *local_58;
  undefined8 local_50;
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_180034040 ^ (ulonglong)auStackY_c8;
  pCVar16 = (LPCSTR)0x0;
  local_50 = 0;
  if ((ushort *)param_1[0x27] == (ushort *)0x0) {
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    param_1[0x20] = 0;
    *param_1 = &DAT_180027c90;
    param_1[0x21] = 0;
    param_1[0x22] = &DAT_180027f10;
    param_1[0x23] = &DAT_180028090;
    *(undefined4 *)(param_1 + 1) = 1;
    return (LPCSTR)0x0;
  }
  pUVar1 = (UINT *)((longlong)param_1 + 0xc);
  local_70 = (undefined4 *)0x0;
  pCVar17 = (LPCSTR)0x1;
  local_58 = param_1;
  if ((*pUVar1 != 0) ||
     (pWVar8 = FUN_180019c38((__crt_locale_pointers *)&local_58,0,(ushort *)param_1[0x27],0x1004,
                             (longlong *)pUVar1), pCVar11 = pCVar16, pCVar12 = pCVar16,
     pCVar9 = pCVar16, pCVar10 = pCVar16, (int)pWVar8 == 0)) {
    local_70 = _calloc_base(1,4);
    FUN_180016ba8((LPVOID)0x0);
    pCVar9 = _calloc_base(0x180,2);
    FUN_180016ba8((LPVOID)0x0);
    pCVar10 = _calloc_base(0x180,1);
    FUN_180016ba8((LPVOID)0x0);
    pCVar11 = _calloc_base(0x180,1);
    FUN_180016ba8((LPVOID)0x0);
    pCVar12 = _calloc_base(0x101,1);
    FUN_180016ba8((LPVOID)0x0);
    if ((local_70 != (undefined4 *)0x0) &&
       ((((pCVar9 != (LPCSTR)0x0 && (pCVar12 != (LPCSTR)0x0)) && (pCVar10 != (LPCSTR)0x0)) &&
        (pCVar14 = pCVar16, pCVar18 = pCVar12, pCVar11 != (LPCSTR)0x0)))) {
      do {
        *pCVar18 = (CHAR)pCVar14;
        uVar5 = (int)pCVar14 + 1;
        pCVar14 = (LPCSTR)(ulonglong)uVar5;
        pCVar18 = pCVar18 + 1;
      } while ((int)uVar5 < 0x100);
      BVar6 = GetCPInfo(*pUVar1,&local_48);
      if ((BVar6 != 0) && (local_48.MaxCharSize < 6)) {
        if (1 < (ushort)local_48.MaxCharSize) {
          if (*pUVar1 == 0xfde9) {
            FUN_180021e70((undefined1 (*) [32])(pCVar12 + 0x80),0x20,0x80);
          }
          else {
            pBVar15 = local_48.LeadByte;
            bVar2 = local_48.LeadByte[0];
            while ((bVar2 != 0 && (pBVar15[1] != 0))) {
              uVar5 = (uint)*pBVar15;
              if (*pBVar15 <= pBVar15[1]) {
                do {
                  lVar13 = (longlong)(int)uVar5;
                  uVar5 = uVar5 + 1;
                  pCVar12[lVar13] = ' ';
                } while ((int)uVar5 <= (int)(uint)pBVar15[1]);
              }
              pBVar15 = pBVar15 + 2;
              bVar2 = *pBVar15;
            }
          }
        }
        iVar7 = __acrt_LCMapStringA((__crt_locale_pointers *)0x0,(ushort *)param_1[0x27],0x100,
                                    pCVar12 + 1,0xff,pCVar10 + 0x81,0xff,*pUVar1,0);
        if ((iVar7 != 0) &&
           (iVar7 = __acrt_LCMapStringA((__crt_locale_pointers *)0x0,(ushort *)param_1[0x27],0x200,
                                        pCVar12 + 1,0xff,pCVar11 + 0x81,0xff,*pUVar1,0), iVar7 != 0)
           ) {
          BVar6 = FUN_180019e00((__crt_locale_pointers *)0x0,1,pCVar12,0x100,
                                (LPWORD)(pCVar9 + 0x100),*pUVar1,0);
          if (BVar6 != 0) {
            pCVar17 = pCVar9 + 0xfe;
            pCVar17[0] = '\0';
            pCVar17[1] = '\0';
            pCVar10[0x7f] = '\0';
            pCVar11[0x7f] = '\0';
            pCVar10[0x80] = '\0';
            pCVar11[0x80] = '\0';
            if (1 < (local_48.MaxCharSize & 0xffff)) {
              if (*pUVar1 == 0xfde9) {
                pCVar14 = pCVar11 + 0x100;
                pCVar18 = pCVar9 + 0x200;
                iVar7 = 0x80;
                do {
                  uVar4 = 0;
                  if (iVar7 - 0xc2U < 0x33) {
                    uVar4 = 0x8000;
                  }
                  *(undefined2 *)pCVar18 = uVar4;
                  pCVar18 = pCVar18 + 2;
                  pCVar14[(longlong)pCVar10 - (longlong)pCVar11] = (CHAR)iVar7;
                  *pCVar14 = (CHAR)iVar7;
                  iVar7 = iVar7 + 1;
                  pCVar14 = pCVar14 + 1;
                } while (iVar7 < 0x100);
              }
              else {
                pBVar15 = local_48.LeadByte;
                while ((local_48.LeadByte[0] != 0 && (pBVar15[1] != 0))) {
                  uVar5 = (uint)*pBVar15;
                  if (*pBVar15 <= pBVar15[1]) {
                    do {
                      lVar13 = (longlong)(int)uVar5;
                      (pCVar9 + lVar13 * 2 + 0x100)[0] = '\0';
                      (pCVar9 + lVar13 * 2 + 0x100)[1] = -0x80;
                      pCVar10[lVar13 + 0x80] = (CHAR)uVar5;
                      pCVar11[lVar13 + 0x80] = (CHAR)uVar5;
                      uVar5 = uVar5 + 1;
                    } while ((int)uVar5 <= (int)(uint)pBVar15[1]);
                  }
                  pBVar15 = pBVar15 + 2;
                  local_48.LeadByte[0] = *pBVar15;
                }
              }
            }
            *(undefined8 *)pCVar9 = *(undefined8 *)(pCVar9 + 0x200);
            *(undefined8 *)(pCVar9 + 8) = *(undefined8 *)(pCVar9 + 0x208);
            *(undefined8 *)(pCVar9 + 0x10) = *(undefined8 *)(pCVar9 + 0x210);
            *(undefined8 *)(pCVar9 + 0x18) = *(undefined8 *)(pCVar9 + 0x218);
            *(undefined8 *)(pCVar9 + 0x20) = *(undefined8 *)(pCVar9 + 0x220);
            *(undefined8 *)(pCVar9 + 0x28) = *(undefined8 *)(pCVar9 + 0x228);
            *(undefined8 *)(pCVar9 + 0x30) = *(undefined8 *)(pCVar9 + 0x230);
            *(undefined8 *)(pCVar9 + 0x38) = *(undefined8 *)(pCVar9 + 0x238);
            *(undefined8 *)(pCVar9 + 0x40) = *(undefined8 *)(pCVar9 + 0x240);
            *(undefined8 *)(pCVar9 + 0x48) = *(undefined8 *)(pCVar9 + 0x248);
            *(undefined8 *)(pCVar9 + 0x50) = *(undefined8 *)(pCVar9 + 0x250);
            *(undefined8 *)(pCVar9 + 0x58) = *(undefined8 *)(pCVar9 + 600);
            *(undefined8 *)(pCVar9 + 0x60) = *(undefined8 *)(pCVar9 + 0x260);
            *(undefined8 *)(pCVar9 + 0x68) = *(undefined8 *)(pCVar9 + 0x268);
            *(undefined8 *)(pCVar9 + 0x70) = *(undefined8 *)(pCVar9 + 0x270);
            *(undefined8 *)(pCVar9 + 0x78) = *(undefined8 *)(pCVar9 + 0x278);
            *(undefined8 *)(pCVar9 + 0x80) = *(undefined8 *)(pCVar9 + 0x280);
            *(undefined8 *)(pCVar9 + 0x88) = *(undefined8 *)(pCVar9 + 0x288);
            *(undefined8 *)(pCVar9 + 0x90) = *(undefined8 *)(pCVar9 + 0x290);
            *(undefined8 *)(pCVar9 + 0x98) = *(undefined8 *)(pCVar9 + 0x298);
            *(undefined8 *)(pCVar9 + 0xa0) = *(undefined8 *)(pCVar9 + 0x2a0);
            *(undefined8 *)(pCVar9 + 0xa8) = *(undefined8 *)(pCVar9 + 0x2a8);
            *(undefined8 *)(pCVar9 + 0xb0) = *(undefined8 *)(pCVar9 + 0x2b0);
            *(undefined8 *)(pCVar9 + 0xb8) = *(undefined8 *)(pCVar9 + 0x2b8);
            *(undefined8 *)(pCVar9 + 0xc0) = *(undefined8 *)(pCVar9 + 0x2c0);
            *(undefined8 *)(pCVar9 + 200) = *(undefined8 *)(pCVar9 + 0x2c8);
            *(undefined8 *)(pCVar9 + 0xd0) = *(undefined8 *)(pCVar9 + 0x2d0);
            *(undefined8 *)(pCVar9 + 0xd8) = *(undefined8 *)(pCVar9 + 0x2d8);
            *(undefined8 *)(pCVar9 + 0xe0) = *(undefined8 *)(pCVar9 + 0x2e0);
            *(undefined8 *)(pCVar9 + 0xe8) = *(undefined8 *)(pCVar9 + 0x2e8);
            *(undefined8 *)(pCVar9 + 0xf0) = *(undefined8 *)(pCVar9 + 0x2f0);
            *(undefined4 *)(pCVar9 + 0xf8) = *(undefined4 *)(pCVar9 + 0x2f8);
            *(undefined2 *)(pCVar9 + 0xfc) = *(undefined2 *)(pCVar9 + 0x2fc);
            *(undefined8 *)pCVar10 = *(undefined8 *)(pCVar10 + 0x100);
            *(undefined8 *)(pCVar10 + 8) = *(undefined8 *)(pCVar10 + 0x108);
            *(undefined8 *)(pCVar10 + 0x10) = *(undefined8 *)(pCVar10 + 0x110);
            *(undefined8 *)(pCVar10 + 0x18) = *(undefined8 *)(pCVar10 + 0x118);
            *(undefined8 *)(pCVar10 + 0x20) = *(undefined8 *)(pCVar10 + 0x120);
            *(undefined8 *)(pCVar10 + 0x28) = *(undefined8 *)(pCVar10 + 0x128);
            *(undefined8 *)(pCVar10 + 0x30) = *(undefined8 *)(pCVar10 + 0x130);
            *(undefined8 *)(pCVar10 + 0x38) = *(undefined8 *)(pCVar10 + 0x138);
            *(undefined8 *)(pCVar10 + 0x40) = *(undefined8 *)(pCVar10 + 0x140);
            *(undefined8 *)(pCVar10 + 0x48) = *(undefined8 *)(pCVar10 + 0x148);
            *(undefined8 *)(pCVar10 + 0x50) = *(undefined8 *)(pCVar10 + 0x150);
            *(undefined8 *)(pCVar10 + 0x58) = *(undefined8 *)(pCVar10 + 0x158);
            *(undefined8 *)(pCVar10 + 0x60) = *(undefined8 *)(pCVar10 + 0x160);
            *(undefined8 *)(pCVar10 + 0x68) = *(undefined8 *)(pCVar10 + 0x168);
            *(undefined8 *)(pCVar10 + 0x70) = *(undefined8 *)(pCVar10 + 0x170);
            *(undefined4 *)(pCVar10 + 0x78) = *(undefined4 *)(pCVar10 + 0x178);
            *(undefined2 *)(pCVar10 + 0x7c) = *(undefined2 *)(pCVar10 + 0x17c);
            pCVar10[0x7e] = pCVar10[0x17e];
            *(undefined8 *)pCVar11 = *(undefined8 *)(pCVar11 + 0x100);
            *(undefined8 *)(pCVar11 + 8) = *(undefined8 *)(pCVar11 + 0x108);
            *(undefined8 *)(pCVar11 + 0x10) = *(undefined8 *)(pCVar11 + 0x110);
            *(undefined8 *)(pCVar11 + 0x18) = *(undefined8 *)(pCVar11 + 0x118);
            *(undefined8 *)(pCVar11 + 0x20) = *(undefined8 *)(pCVar11 + 0x120);
            *(undefined8 *)(pCVar11 + 0x28) = *(undefined8 *)(pCVar11 + 0x128);
            *(undefined8 *)(pCVar11 + 0x30) = *(undefined8 *)(pCVar11 + 0x130);
            *(undefined8 *)(pCVar11 + 0x38) = *(undefined8 *)(pCVar11 + 0x138);
            *(undefined8 *)(pCVar11 + 0x40) = *(undefined8 *)(pCVar11 + 0x140);
            *(undefined8 *)(pCVar11 + 0x48) = *(undefined8 *)(pCVar11 + 0x148);
            *(undefined8 *)(pCVar11 + 0x50) = *(undefined8 *)(pCVar11 + 0x150);
            *(undefined8 *)(pCVar11 + 0x58) = *(undefined8 *)(pCVar11 + 0x158);
            *(undefined8 *)(pCVar11 + 0x60) = *(undefined8 *)(pCVar11 + 0x160);
            *(undefined8 *)(pCVar11 + 0x68) = *(undefined8 *)(pCVar11 + 0x168);
            *(undefined8 *)(pCVar11 + 0x70) = *(undefined8 *)(pCVar11 + 0x170);
            *(undefined4 *)(pCVar11 + 0x78) = *(undefined4 *)(pCVar11 + 0x178);
            *(undefined2 *)(pCVar11 + 0x7c) = *(undefined2 *)(pCVar11 + 0x17c);
            pCVar11[0x7e] = pCVar11[0x17e];
            piVar3 = (int *)param_1[0x20];
            if (piVar3 != (int *)0x0) {
              LOCK();
              iVar7 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                FUN_180016ba8((LPVOID)(param_1[0x21] + -0xfe));
                FUN_180016ba8((LPVOID)(param_1[0x22] + -0x80));
                FUN_180016ba8((LPVOID)(param_1[0x23] + -0x80));
                FUN_180016ba8((LPVOID)param_1[0x20]);
              }
            }
            *local_70 = 1;
            param_1[0x20] = local_70;
            *param_1 = pCVar9 + 0x100;
            param_1[0x21] = pCVar17;
            param_1[0x22] = pCVar10 + 0x80;
            param_1[0x23] = pCVar11 + 0x80;
            *(UINT *)(param_1 + 1) = local_48.MaxCharSize & 0xffff;
            pCVar17 = pCVar16;
            goto LAB_180012069;
          }
        }
      }
    }
  }
  FUN_180016ba8(local_70);
  FUN_180016ba8(pCVar9);
  FUN_180016ba8(pCVar10);
  FUN_180016ba8(pCVar11);
LAB_180012069:
  FUN_180016ba8(pCVar12);
  return pCVar17;
}




LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800595b0,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18001f410();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800124ec(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_180010168();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




wchar_t * FUN_1800120fc(wchar_t *param_1)

{
  errno_t eVar1;
  wchar_t *_Dst;
  longlong lVar2;
  rsize_t _SizeInWords;
  longlong lVar3;
  
  if (param_1 != (wchar_t *)0x0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_1[lVar2] != L'\0');
    _SizeInWords = lVar3 + 2;
    _Dst = _malloc_base(_SizeInWords * 2);
    if (_Dst != (wchar_t *)0x0) {
      eVar1 = wcscpy_s(_Dst,_SizeInWords,param_1);
      if (eVar1 == 0) {
        return _Dst;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (wchar_t *)0x0;
}




/* Library Function - Single Match
    abort
   
   Library: Visual Studio 2019 Release */

void __cdecl abort(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_18001a638(0x16);
  }
  if ((DAT_180034288 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1800121cb;
    __acrt_call_reportfault(3,0x40000015,1);
  }
  *(undefined8 *)(puVar4 + -8) = 0x1800121d5;
  FUN_1800115d4(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}




/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}




undefined4 FUN_1800121f0(LPCWSTR param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  __acrt_ptd *p_Var3;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar1 = FUN_18001a8b4(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_180012244;
        }
        iVar1 = FUN_18001a8b4(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),(LPBOOL)0x0,(LPBOOL)0x0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_1800100dc(DVar2);
      p_Var3 = FUN_180010168();
      return *(undefined4 *)p_Var3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_180012244:
      p_Var3 = FUN_180010168();
      *(undefined4 *)p_Var3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}




ulonglong FUN_18001230c(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  ulonglong uVar2;
  undefined1 (*pauVar3) [32];
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  pauVar3 = param_1;
  if (DAT_180034090 < 5) {
    if (DAT_180034090 < 1) {
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar4 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = (-(ulonglong)(uVar4 != 0) & 0x10 - uVar4) >> 1;
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + uVar4 * 2) && (*(short *)*pauVar3 != 0));
          pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
      uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
      if (uVar2 != uVar4) {
        return uVar2;
      }
      for (pauVar3 = (undefined1 (*) [32])(*param_1 + uVar2 * 2);
          pauVar3 !=
          (undefined1 (*) [32])(*param_1 + ((param_2 - uVar4 & 0xfffffffffffffff0) + uVar2) * 2);
          pauVar3 = (undefined1 (*) [32])(*pauVar3 + 0x10)) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar3 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar3 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar3 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar3 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar3 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar3 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar3 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar3 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar5 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar5 >> 0x3f,0) & 1) != 0) || (SUB161(auVar5 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar5 >> 0x4f,0) & 1) != 0) || (SUB161(auVar5 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || (SUB161(auVar5 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar5 >> 0x6f,0) & 1) != 0) || (auVar5._14_2_ >> 7 & 1) != 0) ||
            (auVar5._14_2_ & 0x8000) != 0) break;
      }
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
    }
    else {
      for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
      }
    }
  }
  else if (((ulonglong)param_1 & 1) == 0) {
    uVar4 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = (-(ulonglong)(uVar4 != 0) & 0x20 - uVar4) >> 1;
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + uVar4 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
    }
    uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
    if (uVar2 != uVar4) {
      return uVar2;
    }
    pauVar3 = (undefined1 (*) [32])(*param_1 + uVar2 * 2);
    while ((pauVar3 !=
            (undefined1 (*) [32])(*param_1 + ((param_2 - uVar4 & 0xffffffffffffffe0) + uVar2) * 2)
           && (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar3),
              (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                           (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                          (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                             SUB321(auVar1 >> 0x7f,0) == '\0') &&
                            (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                           (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                          (SUB321(auVar1 >> 0x97,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xb7,0) & 1) == 0) && SUB321(auVar1 >> 0xbf,0) == '\0') &&
                    (SUB321(auVar1 >> 199,0) & 1) == 0) && (SUB321(auVar1 >> 0xcf,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xd7,0) & 1) == 0) && (SUB321(auVar1 >> 0xdf,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xe7,0) & 1) == 0) && (SUB321(auVar1 >> 0xef,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xf7,0) & 1) == 0) && -1 < auVar1[0x1f]))) {
      pauVar3 = pauVar3 + 1;
    }
    for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
    }
  }
  else {
    for (; (pauVar3 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (undefined1 (*) [32])(*pauVar3 + 2)) {
    }
  }
  return (longlong)pauVar3 - (longlong)param_1 >> 1;
}




void FUN_1800124e4(undefined8 param_1)

{
  DAT_180058d00 = param_1;
  return;
}




bool FUN_1800124ec(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = FUN_18001252c();
  bVar3 = false;
  if (uVar2 != 0) {
    iVar1 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}




ulonglong FUN_18001252c(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_180034040 & 0x3f;
  uVar2 = DAT_180058d00 ^ DAT_180034040;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




void FUN_180012564(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180013b60();
  if (*(longlong *)(p_Var1 + 0x18) != 0) {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    _seh_filter_dll
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _seh_filter_dll(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_1800125a4(-0x1f928c9d,param_2);
  return uVar1;
}




undefined4 FUN_1800125a4(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  p_Var5 = FUN_180013cd8();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    piVar2 = *(int **)p_Var5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        lVar3 = *(longlong *)(piVar6 + 2);
        if (lVar3 == 0) {
          return 0;
        }
        if (lVar3 == 5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (lVar3 != 1) {
          uVar4 = *(undefined8 *)(p_Var5 + 8);
          *(undefined8 *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_1800126e2:
              *(undefined4 *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_1800126e2;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_1800126e2;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_1800126e2;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_1800126e2;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_1800126e2;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_1800126e2;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_1800126e2;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_1800126e2;
              }
            }
            (*(code *)PTR__guard_dispatch_icall_1800252e8)(8,uVar8);
            *(undefined4 *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*(code *)PTR__guard_dispatch_icall_1800252e8)(piVar6[1]);
          }
          *(undefined8 *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}




void FUN_180012728(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = FUN_18001c12c((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_1800127e0;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_1800127e0:
  bVar2 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = FUN_18001c12c((int)*pcVar6);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}




/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Library: Visual Studio 2019 Release */

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_180016ba8((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _configure_narrow_argv
   
   Library: Visual Studio 2019 Release */

ulonglong _configure_narrow_argv(int param_1)

{
  longlong lVar1;
  __acrt_ptd *p_Var2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  char *pcVar8;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar5 = 0;
  if (param_1 != 0) {
    if (param_1 - 1U < 2) {
      __acrt_initialize_multibyte();
      FUN_18001b460((HMODULE)0x0,&DAT_180058d10,0x104);
      _DAT_180059580 = &DAT_180058d10;
      if ((DAT_1800595a0 == (char *)0x0) || (pcVar8 = DAT_1800595a0, *DAT_1800595a0 == '\0')) {
        pcVar8 = &DAT_180058d10;
      }
      local_res18 = 0;
      local_res20 = 0;
      FUN_180012728(pcVar8,(undefined8 *)0x0,(char *)0x0,(longlong *)&local_res18,
                    (longlong *)&local_res20);
      uVar4 = local_res18;
      plVar3 = __acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
      if (plVar3 != (longlong *)0x0) {
        FUN_180012728(pcVar8,plVar3,(char *)(plVar3 + uVar4),(longlong *)&local_res18,
                      (longlong *)&local_res20);
        if (param_1 == 1) {
          _DAT_180059588 = (int)local_res18 + -1;
          plVar6 = (longlong *)0x0;
          DAT_180059590 = plVar3;
        }
        else {
          local_res10 = (longlong *)0x0;
          uVar4 = thunk_FUN_18001ad40(plVar3,&local_res10);
          plVar6 = local_res10;
          if ((int)uVar4 != 0) {
            FUN_180016ba8(local_res10);
            local_res10 = (longlong *)0x0;
            FUN_180016ba8(plVar3);
            return uVar4 & 0xffffffff;
          }
          _DAT_180059588 = 0;
          lVar1 = *local_res10;
          while (lVar1 != 0) {
            local_res10 = local_res10 + 1;
            uVar5 = uVar5 + 1;
            _DAT_180059588 = (int)uVar5;
            lVar1 = *local_res10;
          }
          local_res10 = (longlong *)0x0;
          DAT_180059590 = plVar6;
          FUN_180016ba8((LPVOID)0x0);
          local_res10 = (longlong *)0x0;
          plVar6 = plVar3;
        }
        FUN_180016ba8(plVar6);
        return 0;
      }
      p_Var2 = FUN_180010168();
      uVar7 = 0xc;
      *(undefined4 *)p_Var2 = 0xc;
      FUN_180016ba8((LPVOID)0x0);
    }
    else {
      p_Var2 = FUN_180010168();
      uVar7 = 0x16;
      *(undefined4 *)p_Var2 = 0x16;
      FUN_180010fac();
    }
    uVar5 = (ulonglong)uVar7;
  }
  return uVar5;
}




undefined8 FUN_180012ad8(void)

{
  undefined8 *puVar1;
  LPSTR pCVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_180058e18 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pCVar2 = FUN_18001c168();
    if (pCVar2 == (LPSTR)0x0) {
      FUN_180016ba8((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_180012b4c(pCVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_180058e18;
        puVar1 = DAT_180058e30;
      }
      DAT_180058e30 = puVar1;
      DAT_180058e18 = puVar4;
      FUN_180016ba8((LPVOID)0x0);
      FUN_180016ba8(pCVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 * FUN_180012b4c(char *param_1)

{
  errno_t eVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong _SizeInBytes;
  undefined8 *puVar8;
  
  cVar6 = *param_1;
  lVar7 = 0;
  pcVar5 = param_1;
  while (cVar6 != '\0') {
    lVar2 = lVar7 + 1;
    if (cVar6 == '=') {
      lVar2 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar3 = lVar7;
      lVar7 = lVar3 + 1;
    } while (pcVar5[lVar7] != '\0');
    pcVar5 = pcVar5 + lVar3 + 2;
    lVar7 = lVar2;
    cVar6 = *pcVar5;
  }
  puVar4 = _calloc_base(lVar7 + 1,8);
  puVar8 = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
LAB_180012baf:
    FUN_180016ba8((LPVOID)0x0);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + _SizeInBytes) {
      lVar7 = -1;
      do {
        lVar2 = lVar7;
        lVar7 = lVar2 + 1;
      } while (param_1[lVar7] != '\0');
      _SizeInBytes = lVar2 + 2;
      if (*param_1 != '=') {
        pcVar5 = _calloc_base(_SizeInBytes,1);
        if (pcVar5 == (char *)0x0) {
          free_environment<>(puVar4);
          FUN_180016ba8((LPVOID)0x0);
          goto LAB_180012baf;
        }
        eVar1 = strcpy_s(pcVar5,_SizeInBytes,param_1);
        if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar8 = pcVar5;
        puVar8 = puVar8 + 1;
        FUN_180016ba8((LPVOID)0x0);
      }
    }
    FUN_180016ba8((LPVOID)0x0);
  }
  return puVar4;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_180016ba8(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_180016ba8(param_1);
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_180058e30) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_180058e28) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}




void FUN_180012cd8(void)

{
  uninitialize_environment_internal<>(&DAT_180058e18);
  uninitialize_environment_internal<>((undefined8 *)&DAT_180058e20);
  free_environment<>(DAT_180058e30);
  free_environment<>(DAT_180058e28);
  return;
}




undefined8 thunk_FUN_180012ad8(void)

{
  undefined8 *puVar1;
  LPSTR pCVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_180058e18 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pCVar2 = FUN_18001c168();
    if (pCVar2 == (LPSTR)0x0) {
      FUN_180016ba8((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_180012b4c(pCVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_180058e18;
        puVar1 = DAT_180058e30;
      }
      DAT_180058e30 = puVar1;
      DAT_180058e18 = puVar4;
      FUN_180016ba8((LPVOID)0x0);
      FUN_180016ba8(pCVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_180012d9c(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}




/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d> &
   __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(class
   <lambda_638799b9deba96c50f710eeac98168cd> && __ptr64,class
   <lambda_22ebabd17bc4fa466a2aca6d8deb888d> & __ptr64,class
   <lambda_a6f7d7db0129f75315ebf26d50c089f1> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_7777bce6b2f8c936911f934f8298dc43>,class <lambda_f03950bc5685219e0bcd2087efbe011e> &
   __ptr64,class <lambda_3883c3dff614d5e0c5f61bb1ac94921c> >(class
   <lambda_7777bce6b2f8c936911f934f8298dc43> && __ptr64,class
   <lambda_f03950bc5685219e0bcd2087efbe011e> & __ptr64,class
   <lambda_3883c3dff614d5e0c5f61bb1ac94921c> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_8b90c8310d35b3462fe809c44bbb350d>,class <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> &
   __ptr64,class <lambda_e797892004ba4c0bb152531b9d8c3715> >(class
   <lambda_8b90c8310d35b3462fe809c44bbb350d> && __ptr64,class
   <lambda_c1ccdfe150d00dafd355d15f2a9edeaa> & __ptr64,class
   <lambda_e797892004ba4c0bb152531b9d8c3715> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86>,class <lambda_4e60a939b0d047cfe11ddc22648dfba9> &
   __ptr64,class <lambda_332c3edc96d0294ec56c57d38c1cdfd5> >(class
   <lambda_b8c45f8f788dd370798f47cfe8ac3a86> && __ptr64,class
   <lambda_4e60a939b0d047cfe11ddc22648dfba9> & __ptr64,class
   <lambda_332c3edc96d0294ec56c57d38c1cdfd5> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  __acrt_lock(*param_2);
  uVar1 = FUN_180012f4c(param_3);
  __acrt_unlock(*param_4);
  return uVar1 & 0xffffffff;
}




undefined8 FUN_180012d9c(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_180012f30:
    uVar2 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_180034040 & 0x3f;
    pvVar6 = (LPVOID)((DAT_180034040 ^ *puVar4) >> bVar3 | (DAT_180034040 ^ *puVar4) << 0x40 - bVar3
                     );
    puVar10 = (ulonglong *)
              ((DAT_180034040 ^ puVar4[1]) >> bVar3 | (DAT_180034040 ^ puVar4[1]) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((DAT_180034040 ^ puVar4[2]) >> bVar3 | (DAT_180034040 ^ puVar4[2]) << 0x40 - bVar3);
    if (puVar10 == puVar4) {
      uVar5 = (longlong)puVar4 - (longlong)pvVar6 >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar8 = uVar7 + uVar5;
      if (uVar7 + uVar5 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar5) {
LAB_180012e3e:
        uVar8 = uVar5 + 4;
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_180016ba8((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_180012f30;
      }
      else {
        pvVar1 = _recalloc_base(pvVar6,uVar8,8);
        FUN_180016ba8((LPVOID)0x0);
        if (pvVar1 == (LPVOID)0x0) goto LAB_180012e3e;
      }
      pvVar6 = pvVar1;
      uVar7 = DAT_180034040;
      puVar10 = (ulonglong *)((longlong)pvVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)((longlong)pvVar6 + uVar8 * 8);
      uVar5 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar10)) >> 3;
      if (puVar4 < puVar10) {
        uVar5 = 0;
      }
      puVar9 = puVar10;
      if (uVar5 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = uVar7;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_180034040 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
               DAT_180034040;
    bVar3 = -((byte)DAT_180034040 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar6 >> bVar3 | (longlong)pvVar6 << 0x40 - bVar3) ^ DAT_180034040;
    bVar3 = -((byte)DAT_180034040 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar3 | (longlong)(puVar10 + 1) << 0x40 - bVar3) ^
         DAT_180034040;
    bVar3 = 0x40 - ((byte)DAT_180034040 & 0x3f) & 0x3f;
    uVar2 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_180034040;
  }
  return uVar2;
}




undefined8 FUN_180012f4c(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = DAT_180034040;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_180034040 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_180034040 ^ *puVar8) >> bVar5 | (DAT_180034040 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_180034040 ^ puVar8[1]) >> bVar5 | (DAT_180034040 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_180034040 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_180034040;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          *puVar8 = uVar1;
          (*(code *)PTR__guard_dispatch_icall_1800252e8)(uVar7);
          uVar7 = (uint)DAT_180034040 & 0x3f;
          uVar11 = DAT_180034040 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_180034040 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_180034040;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_180016ba8(puVar10);
        uVar3 = DAT_180034040;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_18001306c(undefined8 param_1)

{
  _register_onexit_function(&DAT_180058e38,param_1);
  return;
}




void FUN_18001307c(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  return;
}




/* Library Function - Single Match
    _initialize_onexit_table
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180034040;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_180034040;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}




/* Library Function - Single Match
    _register_onexit_function
   
   Library: Visual Studio 2019 Release */

void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}




undefined8 FUN_180013144(void)

{
  undefined8 uVar1;
  
  _initialize_onexit_table((longlong *)&DAT_180058e38);
  uVar1 = _initialize_onexit_table((longlong *)&DAT_180058e50);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




undefined1 FUN_180013168(void)

{
  FUN_180012cd8();
  return 1;
}




undefined1 FUN_180013178(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_180034040;
  FUN_180010e3c(DAT_180034040);
  FUN_1800124e4(uVar1);
  FUN_18001a618(uVar1);
  FUN_18001c434(uVar1);
  FUN_1800115bc(uVar1);
  return 1;
}




undefined8 FUN_1800131c0(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_180059570;
  uVar2 = (ulonglong)uVar1;
  *DAT_180059570 = *DAT_180059570 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_180059570 != (uint *)&DAT_180034710)) {
    uVar2 = FUN_180016ba8(DAT_180059570);
    DAT_180059570 = (uint *)&DAT_180034710;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}




undefined1 FUN_180013200(void)

{
  FUN_180016ba8(DAT_180059440);
  DAT_180059440 = (LPVOID)0x0;
  FUN_180016ba8(DAT_180059448);
  DAT_180059448 = (LPVOID)0x0;
  FUN_180016ba8(DAT_180059590);
  DAT_180059590 = (LPVOID)0x0;
  FUN_180016ba8(DAT_180059598);
  DAT_180059598 = (LPVOID)0x0;
  return 1;
}




void FUN_18001325c(void)

{
  FUN_18001c338(&PTR_LAB_1800284d0,(undefined8 *)&DAT_1800285d0);
  return;
}




bool FUN_180013270(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180013cd8();
  return p_Var1 != (__acrt_ptd *)0x0;
}




/* Library Function - Single Match
    __acrt_thread_detach
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 __acrt_thread_detach(void)

{
  __acrt_freeptd();
  return 1;
}




/* Library Function - Single Match
    __acrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined8 __acrt_uninitialize(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1) {
    if (DAT_180058a88 != 0) {
      iVar1 = common_flush_all(true);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_18001c3cc(0x1800284d0,0x1800285d0);
  return uVar2;
}




undefined4 FUN_1800132cc(void)

{
  undefined4 uVar1;
  
  uVar1 = __acrt_uninitialize_ptd();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}




void FUN_1800132dc(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1800252e8)();
    }
  }
  return;
}




undefined8 FUN_180013320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if ((*param_1 != 0) &&
       (uVar1 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(), (int)uVar1 != 0)) break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}




/* Library Function - Single Match
    strcpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  errno_t eVar3;
  char *pcVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      pcVar4 = _Dst;
      do {
        cVar1 = pcVar4[(longlong)_Src - (longlong)_Dst];
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      *_Dst = '\0';
      p_Var2 = FUN_180010168();
      eVar3 = 0x22;
      goto LAB_18001338b;
    }
    *_Dst = '\0';
  }
  p_Var2 = FUN_180010168();
  eVar3 = 0x16;
LAB_18001338b:
  *(errno_t *)p_Var2 = eVar3;
  FUN_180010fac();
  return eVar3;
}




uint FUN_1800133c8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58 [4];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_58[2] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  local_58[1] = 0;
  local_58[0] = param_1;
  uVar1 = FUN_18000f120(local_58 + 2,local_58,10,1);
  if (local_20 == '\x02') {
    *(uint *)(local_58[2] + 0x3a8) = *(uint *)(local_58[2] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}




/* Library Function - Single Match
    strncmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    do {
      if (((ulonglong)_Str1 & 7) == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
    } while ((_MaxCount != 0) && (bVar1 != 0));
  }
  return 0;
}




/* Library Function - Single Match
    wcsncmp
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}




undefined4 FUN_18001353c(longlong param_1)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 == 0) {
    p_Var2 = FUN_180010168();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180010fac();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}




bool FUN_180013564(undefined1 param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  local_res8[0] = param_1;
  uVar1 = FUN_18001353c((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 0xc0) == 0) {
    iVar3 = FUN_180016780(uVar1,(wchar_t *)local_res8,1,param_3);
    bVar7 = iVar3 == 1;
  }
  else {
    uVar2 = 0;
    uVar6 = (int)*param_2 - (int)param_2[1];
    *param_2 = param_2[1] + 1;
    *(int *)(param_2 + 2) = (int)param_2[4] + -1;
    if ((int)uVar6 < 1) {
      if (uVar1 + 2 < 2) {
        puVar5 = &DAT_180034410;
      }
      else {
        puVar5 = (undefined *)
                 ((&DAT_180058e80)[(longlong)(int)uVar1 >> 6] + (ulonglong)(uVar1 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) &&
         (lVar4 = FUN_180018ed4(uVar1,(LARGE_INTEGER)0x0,2), lVar4 == -1)) {
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar2 = FUN_180016780(uVar1,(wchar_t *)param_2[1],uVar6,param_3);
    }
    bVar7 = uVar2 == uVar6;
    *(undefined1 *)param_2[1] = local_res8[0];
  }
  return bVar7;
}




/* Library Function - Single Match
    bool __cdecl stream_is_at_end_of_file_nolock(class __crt_stdio_stream)
   
   Library: Visual Studio 2019 Release */

bool __cdecl stream_is_at_end_of_file_nolock(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if (((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
        (hFile = (HANDLE)FUN_18001c724(*(uint *)(param_1 + 3)), hFile != (HANDLE)0xffffffffffffffff)
        ) && ((BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1), BVar2 != 0 &&
              (BVar2 = GetFileSizeEx(hFile,&local_res8), BVar2 != 0)))) {
      return local_res10[0].QuadPart == local_res8.QuadPart;
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




ulonglong FUN_1800136d8(byte param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  FUN_18001353c((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 6) == 0) {
    *(undefined4 *)((longlong)param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
      if ((*(uint *)((longlong)param_2 + 0x14) & 1) != 0) {
        bVar1 = stream_is_at_end_of_file_nolock(param_2);
        *(undefined4 *)(param_2 + 2) = 0;
        if (!bVar1) goto LAB_18001370a;
        *param_2 = param_2[1];
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 2;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)(param_2 + 2) = 0;
      if (((*(uint *)((longlong)param_2 + 0x14) & 0x4c0) == 0) &&
         (uVar2 = FUN_180017bb8((undefined *)param_2), (char)uVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      bVar1 = FUN_180013564(param_1,param_2,param_3);
      if (bVar1) {
        return (ulonglong)param_1;
      }
      goto LAB_18001370a;
    }
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 6) = 1;
LAB_18001370a:
  LOCK();
  *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
  UNLOCK();
  return 0xffffffff;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_0ae27a3a962d80f24befdcbee591983d>,class <lambda_8d0ee55de4b1038c4002e0adecdf1839> &
   __ptr64,class <lambda_dc504788e8f1664fe9b84e20bfb512f2> >(class
   <lambda_0ae27a3a962d80f24befdcbee591983d> && __ptr64,class
   <lambda_8d0ee55de4b1038c4002e0adecdf1839> & __ptr64,class
   <lambda_dc504788e8f1664fe9b84e20bfb512f2> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5>,class <lambda_876a65b173b8412d3a47c70a915b0cf4> &
   __ptr64,class <lambda_41932305e351933ebe8f8be3ed8bb5dc> >(class
   <lambda_72d1df2b273a38828b1ce30cbf4cdab5> && __ptr64,class
   <lambda_876a65b173b8412d3a47c70a915b0cf4> & __ptr64,class
   <lambda_41932305e351933ebe8f8be3ed8bb5dc> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_2d41944a1d46af3157314b8a01080d33>,class <lambda_8f455de75cd7d7f24b4096f044d8b9e6> &
   __ptr64,class <lambda_aa500f224e6afead328df44964fe2772> >(class
   <lambda_2d41944a1d46af3157314b8a01080d33> && __ptr64,class
   <lambda_8f455de75cd7d7f24b4096f044d8b9e6> & __ptr64,class
   <lambda_aa500f224e6afead328df44964fe2772> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095>,class <lambda_698284760c8add0bfb0756c19673e34b> &
   __ptr64,class <lambda_dfb8eca1e75fef3034a8fb18dd509707> >(class
   <lambda_fb3a7dec4e47f37f22dae91bb15c9095> && __ptr64,class
   <lambda_698284760c8add0bfb0756c19673e34b> & __ptr64,class
   <lambda_dfb8eca1e75fef3034a8fb18dd509707> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock(*(__acrt_ptd **)*param_3,(__crt_locale_data *)0x0);
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf>,class <lambda_4466841279450cc726390878d4a41900> &
   __ptr64,class <lambda_341c25c0346d94847f1f3c463c57e077> >(class
   <lambda_5e887d1dcbef67a5eb4283622ba103bf> && __ptr64,class
   <lambda_4466841279450cc726390878d4a41900> & __ptr64,class
   <lambda_341c25c0346d94847f1f3c463c57e077> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11>,class <lambda_92619d2358a28f41a33ba319515a20b9> &
   __ptr64,class <lambda_6992ecaafeb10aed2b74cb1fae11a551> >(class
   <lambda_aa87e3671a710a21b5dc78c0bdf72e11> && __ptr64,class
   <lambda_92619d2358a28f41a33ba319515a20b9> & __ptr64,class
   <lambda_6992ecaafeb10aed2b74cb1fae11a551> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  replace_current_thread_locale_nolock
            (*(__acrt_ptd **)*param_3,(__crt_locale_data *)**(undefined8 **)param_3[1]);
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_46352004c1216016012b18bd6f87e700>,class <lambda_3bd07e1a1191394380780325891bf33f> &
   __ptr64,class <lambda_334532d3f185bcaa59b5be82d7d22bff> >(class
   <lambda_46352004c1216016012b18bd6f87e700> && __ptr64,class
   <lambda_3bd07e1a1191394380780325891bf33f> & __ptr64,class
   <lambda_334532d3f185bcaa59b5be82d7d22bff> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_f2e299630e499de9f9a165e60fcd3db5>,class <lambda_2ae9d31cdba2644fcbeaf08da7c24588> &
   __ptr64,class <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> >(class
   <lambda_f2e299630e499de9f9a165e60fcd3db5> && __ptr64,class
   <lambda_2ae9d31cdba2644fcbeaf08da7c24588> & __ptr64,class
   <lambda_40d01ff24d0e7b3814fdbdcee8eab3c7> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  __acrt_lock(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_180034710)) {
      FUN_180016ba8(piVar2);
    }
  }
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_180058e70;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_1800283a0;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_180034710;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}




void FUN_18001399c(__acrt_ptd *param_1)

{
  if (param_1 != (__acrt_ptd *)0x0) {
    destroy_ptd_array(param_1);
    FUN_180016ba8(param_1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_1800283a0) {
    FUN_180016ba8(*(undefined **)param_1);
  }
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x70));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x58));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x60));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x68));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x48));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x50));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x78));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x80));
  FUN_180016ba8(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}




/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_180058e70) && (ppuVar1 != &PTR_DAT_1800342a0)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}




/* Library Function - Single Match
    __acrt_freeptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_freeptd(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_180034290 != 0xffffffff) {
    p_Var1 = FlsGetValue(DAT_180034290);
    if (p_Var1 != (__acrt_ptd *)0x0) {
      FlsSetValue(DAT_180034290,(PVOID)0x0);
      destroy_ptd_array(p_Var1);
      FUN_180016ba8(p_Var1);
    }
  }
  return;
}




__acrt_ptd * FUN_180013b60(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_180034290 == 0xffffffff) ||
     (lpFlsData = FlsGetValue(DAT_180034290), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_180034290,(PVOID)0xffffffffffffffff);
    lpFlsData = p_Var2;
    if (BVar1 != 0) {
      lpFlsData = _calloc_base(1,0x3c8);
      if (lpFlsData == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_180034290,(PVOID)0x0);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_180034290,lpFlsData);
        if (BVar1 != 0) {
          construct_ptd_array(lpFlsData);
          FUN_180016ba8((LPVOID)0x0);
          goto LAB_180013c0d;
        }
        FlsSetValue(DAT_180034290,(PVOID)0x0);
      }
      FUN_180016ba8(lpFlsData);
      lpFlsData = p_Var2;
    }
  }
  else if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
    lpFlsData = p_Var2;
  }
LAB_180013c0d:
  SetLastError(dwErrCode);
  if (lpFlsData == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return lpFlsData;
}




__acrt_ptd * FUN_180013c34(void)

{
  BOOL BVar1;
  __acrt_ptd *p_Var2;
  
  if ((DAT_180034290 == 0xffffffff) ||
     (p_Var2 = FlsGetValue(DAT_180034290), p_Var2 == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_180034290,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      p_Var2 = _calloc_base(1,0x3c8);
      if (p_Var2 == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_180034290,(PVOID)0x0);
        p_Var2 = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_180034290,p_Var2);
        if (BVar1 != 0) {
          construct_ptd_array(p_Var2);
          FUN_180016ba8((LPVOID)0x0);
          return p_Var2;
        }
        FlsSetValue(DAT_180034290,(PVOID)0x0);
      }
      FUN_180016ba8(p_Var2);
    }
  }
  else if (p_Var2 != (__acrt_ptd *)0xffffffffffffffff) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




__acrt_ptd * FUN_180013cd8(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_180034290 == 0xffffffff) ||
     (lpFlsData = FlsGetValue(DAT_180034290), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_180034290,(PVOID)0xffffffffffffffff);
    lpFlsData = p_Var2;
    if (BVar1 != 0) {
      lpFlsData = _calloc_base(1,0x3c8);
      if (lpFlsData == (__acrt_ptd *)0x0) {
        FlsSetValue(DAT_180034290,(PVOID)0x0);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        BVar1 = FlsSetValue(DAT_180034290,lpFlsData);
        if (BVar1 != 0) {
          construct_ptd_array(lpFlsData);
          FUN_180016ba8((LPVOID)0x0);
          goto LAB_180013d85;
        }
        FlsSetValue(DAT_180034290,(PVOID)0x0);
      }
      FUN_180016ba8(lpFlsData);
      lpFlsData = p_Var2;
    }
  }
  else if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
    lpFlsData = p_Var2;
  }
LAB_180013d85:
  SetLastError(dwErrCode);
  return lpFlsData;
}




__acrt_ptd * FUN_180013da0(undefined8 param_1,longlong param_2)

{
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if ((DAT_180034290 == 0xffffffff) ||
     (lpFlsData = FlsGetValue(DAT_180034290), lpFlsData == (__acrt_ptd *)0x0)) {
    BVar1 = FlsSetValue(DAT_180034290,(PVOID)0xffffffffffffffff);
    if (BVar1 == 0) {
      return (__acrt_ptd *)0x0;
    }
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData == (__acrt_ptd *)0x0) {
      FlsSetValue(DAT_180034290,(PVOID)0x0);
      lpFlsData = (__acrt_ptd *)0x0;
    }
    else {
      BVar1 = FlsSetValue(DAT_180034290,lpFlsData);
      if (BVar1 != 0) {
        construct_ptd_array(lpFlsData);
        FUN_180016ba8((LPVOID)0x0);
        goto LAB_180013e41;
      }
      FlsSetValue(DAT_180034290,(PVOID)0x0);
    }
    FUN_180016ba8(lpFlsData);
  }
  else {
    if (lpFlsData == (__acrt_ptd *)0xffffffffffffffff) {
      return (__acrt_ptd *)0x0;
    }
LAB_180013e41:
    p_Var2 = lpFlsData + param_2 * 0x3c8;
  }
  return p_Var2;
}




/* Library Function - Single Match
    __acrt_initialize_ptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_initialize_ptd(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;
  undefined4 extraout_var;
  
  DAT_180034290 = FlsAlloc(FUN_18001399c);
  uVar2 = CONCAT44(extraout_var,DAT_180034290);
  if (DAT_180034290 != 0xffffffff) {
    p_Var3 = FUN_180013cd8();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = __acrt_uninitialize_ptd();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}




/* Library Function - Single Match
    __acrt_uninitialize_ptd
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 __acrt_uninitialize_ptd(void)

{
  BOOL in_EAX;
  
  if (DAT_180034290 != 0xffffffff) {
    in_EAX = FlsFree(DAT_180034290);
    DAT_180034290 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_1d892b297fdedeee07ed8124eeb2f2fa>,class <lambda_ffc046909424fd52df0ac47e64813305> &
   __ptr64,class <lambda_01a7098693036236037e7cdb9bca3d73> >(class
   <lambda_1d892b297fdedeee07ed8124eeb2f2fa> && __ptr64,class
   <lambda_ffc046909424fd52df0ac47e64813305> & __ptr64,class
   <lambda_01a7098693036236037e7cdb9bca3d73> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_1d892b297fdedeee07ed8124eeb2f2fa>,class_<lambda_ffc046909424fd52df0ac47e64813305>&___ptr64,class_<lambda_01a7098693036236037e7cdb9bca3d73>_>
          (__crt_seh_guarded_call<void> *this,<lambda_1d892b297fdedeee07ed8124eeb2f2fa> *param_1,
          <lambda_ffc046909424fd52df0ac47e64813305> *param_2,
          <lambda_01a7098693036236037e7cdb9bca3d73> *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  
  __acrt_lock(*(int *)param_1);
  FUN_18001446c((undefined8 *)**(undefined8 **)param_2,
                *(undefined8 **)(**(longlong **)(param_2 + 8) + 0x90));
  lVar3 = FUN_180014ca4(**(longlong **)param_2,(ulonglong)**(uint **)(param_2 + 0x18),
                        (wchar_t *)**(undefined8 **)(param_2 + 0x20));
  **(longlong **)(param_2 + 0x10) = lVar3;
  if (lVar3 == 0) {
    __acrt_release_locale_ref(**(longlong **)param_2);
    __acrt_free_locale((LPVOID)**(undefined8 **)param_2);
  }
  else {
    psVar4 = (short *)**(undefined8 **)(param_2 + 0x20);
    if (psVar4 != (short *)0x0) {
      lVar3 = (longlong)&DAT_180034408 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar3);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        LOCK();
        DAT_180058e68 = 1;
        UNLOCK();
      }
    }
    _updatetlocinfoEx_nolock
              ((undefined8 *)(**(longlong **)(param_2 + 8) + 0x90),
               (undefined **)**(undefined8 **)param_2);
    __acrt_release_locale_ref(**(longlong **)param_2);
    if (((*(byte *)(**(longlong **)(param_2 + 8) + 0x3a8) & 2) == 0) &&
       (((byte)DAT_180034560 & 1) == 0)) {
      _updatetlocinfoEx_nolock(&DAT_180058e70,*(undefined ***)(**(longlong **)(param_2 + 8) + 0x90))
      ;
      PTR_PTR_180034278 = (undefined *)DAT_180058e70[0x1f];
      PTR_DAT_1800341d0 = (undefined *)*DAT_180058e70;
      _DAT_18003440c = *(undefined4 *)(DAT_180058e70 + 1);
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}




/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_410d79af7f07d98d83a3f525b3859a53>,class <lambda_3e16ef9562a7dcce91392c22ab16ea36> &
   __ptr64,class <lambda_38119f0e861e05405d8a144b9b982f0a> >(class
   <lambda_410d79af7f07d98d83a3f525b3859a53> && __ptr64,class
   <lambda_3e16ef9562a7dcce91392c22ab16ea36> & __ptr64,class
   <lambda_38119f0e861e05405d8a144b9b982f0a> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
          (__crt_seh_guarded_call<void> *this,<lambda_410d79af7f07d98d83a3f525b3859a53> *param_1,
          <lambda_3e16ef9562a7dcce91392c22ab16ea36> *param_2,
          <lambda_38119f0e861e05405d8a144b9b982f0a> *param_3)

{
  undefined **ppuVar1;
  longlong *plVar2;
  
  __acrt_lock(*(int *)param_1);
  for (plVar2 = &DAT_180058e70; plVar2 != &DAT_180058e78; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_1800342a0) {
      ppuVar1 = _updatetlocinfoEx_nolock(plVar2,&PTR_DAT_1800342a0);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  __acrt_unlock(*(int *)param_3);
  return;
}




/* Library Function - Single Match
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class <lambda_2a444430fde8c29194d880d93eed5e8f> &
   __ptr64,class <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64>(class
   <lambda_7f2adfce497ff2baa965cd4f576ecfd1> && __ptr64,class
   <lambda_2a444430fde8c29194d880d93eed5e8f> & __ptr64,class
   <lambda_8dff2cf36a5417162780cd64fa2883ef> & __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_seh_guarded_call<void>::
operator()<class_<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class_<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,class_<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
          (__crt_seh_guarded_call<void> *this,<lambda_7f2adfce497ff2baa965cd4f576ecfd1> *param_1,
          <lambda_2a444430fde8c29194d880d93eed5e8f> *param_2,
          <lambda_8dff2cf36a5417162780cd64fa2883ef> *param_3)

{
  <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(param_2);
  *(uint *)(**(longlong **)param_3 + 0x3a8) = *(uint *)(**(longlong **)param_3 + 0x3a8) & 0xffffffef
  ;
  return;
}




/* Library Function - Single Match
    public: __cdecl <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(void)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
<lambda_2a444430fde8c29194d880d93eed5e8f>::operator()
          (<lambda_2a444430fde8c29194d880d93eed5e8f> *this)

{
  LPVOID pvVar1;
  __crt_seh_guarded_call<void> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pvVar1 = _calloc_base(1,0x158);
  **(undefined8 **)this = pvVar1;
  FUN_180016ba8((LPVOID)0x0);
  if (pvVar1 != (LPVOID)0x0) {
    local_38 = *(undefined8 *)this;
    local_30 = *(undefined8 *)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    local_20 = *(undefined8 *)(this + 0x18);
    local_18 = *(undefined8 *)(this + 0x20);
    local_res10[0] = 4;
    local_res18[0] = 4;
    __crt_seh_guarded_call<void>::
    operator()<class_<lambda_1d892b297fdedeee07ed8124eeb2f2fa>,class_<lambda_ffc046909424fd52df0ac47e64813305>&___ptr64,class_<lambda_01a7098693036236037e7cdb9bca3d73>_>
              (local_res8,(<lambda_1d892b297fdedeee07ed8124eeb2f2fa> *)local_res18,
               (<lambda_ffc046909424fd52df0ac47e64813305> *)&local_38,
               (<lambda_01a7098693036236037e7cdb9bca3d73> *)local_res10);
  }
  return;
}




void FUN_180014128(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_18001dbac((short *)(param_1[2] + 600),0x55,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = FUN_18001dbac((short *)*param_1,param_1[1],param_2,param_3);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}




short * FUN_1800141a0(undefined1 (*param_1) [32])

{
  int iVar1;
  ulonglong uVar2;
  short *psVar3;
  
  if (((param_1 == (undefined1 (*) [32])0x0) || (uVar2 = FUN_18001230c(param_1,0x55), 0x54 < uVar2))
     || (psVar3 = _malloc_base(uVar2 * 2 + 2), psVar3 == (short *)0x0)) {
    psVar3 = (short *)0x0;
  }
  else {
    iVar1 = FUN_18001dbac(psVar3,uVar2 + 1,(longlong)param_1,uVar2 + 1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return psVar3;
}




undefined4 FUN_180014224(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_180058e68;
  LOCK();
  DAT_180058e68 = 1;
  UNLOCK();
  return uVar1;
}




/* Library Function - Single Match
    __acrt_uninitialize_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_uninitialize_locale(void)

{
  <lambda_3e16ef9562a7dcce91392c22ab16ea36> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 4;
  local_res18[0] = 4;
  __crt_seh_guarded_call<void>::
  operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
            ((__crt_seh_guarded_call<void> *)local_res8,
             (<lambda_410d79af7f07d98d83a3f525b3859a53> *)local_res18,local_res8,
             (<lambda_38119f0e861e05405d8a144b9b982f0a> *)local_res10);
  return;
}




void FUN_180014260(wchar_t *param_1,rsize_t param_2,wchar_t *param_3)

{
  errno_t eVar1;
  
  eVar1 = wcscpy_s(param_1,param_2,param_3);
  if (eVar1 == 0) {
    if (param_3[0x40] != L'\0') {
      FUN_1800149ac(param_1,param_2,2,&DAT_180028788);
    }
    if (param_3[0x80] != L'\0') {
      FUN_1800149ac(param_1,param_2,2,&DAT_18002878c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}




undefined8 FUN_180014304(undefined1 (*param_1) [32],wchar_t *param_2)

{
  wchar_t wVar1;
  int iVar2;
  size_t sVar3;
  undefined1 (*pauVar4) [32];
  longlong lVar5;
  uint uVar6;
  
  FUN_180021e70(param_1,0,0x1ca);
  uVar6 = 0;
  if (*param_2 != L'\0') {
    if ((*param_2 != L'.') || (param_2[1] == L'\0')) {
      do {
        sVar3 = wcscspn(param_2,L"_.,");
        if (sVar3 == 0) {
          return 0xffffffff;
        }
        wVar1 = param_2[sVar3];
        if (uVar6 == 0) {
          if (0x3f < sVar3) {
            return 0xffffffff;
          }
          iVar2 = FUN_18001dbac((short *)param_1,0x40,(longlong)param_2,sVar3);
          if (iVar2 != 0) goto LAB_180014455;
          uVar6 = (uint)(wVar1 == L'.');
        }
        else {
          if (uVar6 == 1) {
            if (0x3f < sVar3) {
              return 0xffffffff;
            }
            if (wVar1 == L'_') {
              return 0xffffffff;
            }
            pauVar4 = param_1 + 4;
            lVar5 = 0x40;
          }
          else {
            if (uVar6 != 2) {
              return 0xffffffff;
            }
            if (0xf < sVar3) {
              return 0xffffffff;
            }
            if ((wVar1 != L'\0') && (wVar1 != L',')) {
              return 0xffffffff;
            }
            pauVar4 = param_1 + 8;
            lVar5 = 0x10;
          }
          iVar2 = FUN_18001dbac((short *)pauVar4,lVar5,(longlong)param_2,sVar3);
          if (iVar2 != 0) goto LAB_180014455;
        }
        if (wVar1 == L',') {
          return 0;
        }
        if (wVar1 == L'\0') {
          return 0;
        }
        param_2 = param_2 + sVar3 + 1;
        uVar6 = uVar6 + 1;
      } while( true );
    }
    iVar2 = FUN_18001dbac((short *)(param_1 + 8),0x10,(longlong)(param_2 + 1),0xf);
    if (iVar2 != 0) {
LAB_180014455:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *(undefined2 *)(param_1[8] + 0x1e) = 0;
  }
  return 0;
}




void FUN_18001446c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((param_2 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) && (param_1 != param_2)) {
    lVar3 = 2;
    puVar2 = param_1;
    do {
      puVar5 = puVar2;
      puVar4 = param_2;
      uVar1 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar1;
      uVar1 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar1;
      uVar1 = puVar4[5];
      puVar5[4] = puVar4[4];
      puVar5[5] = uVar1;
      uVar1 = puVar4[7];
      puVar5[6] = puVar4[6];
      puVar5[7] = uVar1;
      uVar1 = puVar4[9];
      puVar5[8] = puVar4[8];
      puVar5[9] = uVar1;
      uVar1 = puVar4[0xb];
      puVar5[10] = puVar4[10];
      puVar5[0xb] = uVar1;
      uVar1 = puVar4[0xd];
      puVar5[0xc] = puVar4[0xc];
      puVar5[0xd] = uVar1;
      uVar1 = puVar4[0xf];
      puVar5[0xe] = puVar4[0xe];
      puVar5[0xf] = uVar1;
      lVar3 = lVar3 + -1;
      param_2 = puVar4 + 0x10;
      puVar2 = puVar5 + 0x10;
    } while (lVar3 != 0);
    uVar1 = puVar4[0x11];
    puVar5[0x10] = puVar4[0x10];
    puVar5[0x11] = uVar1;
    uVar1 = puVar4[0x13];
    puVar5[0x12] = puVar4[0x12];
    puVar5[0x13] = uVar1;
    uVar1 = puVar4[0x15];
    puVar5[0x14] = puVar4[0x14];
    puVar5[0x15] = uVar1;
    uVar1 = puVar4[0x17];
    puVar5[0x16] = puVar4[0x16];
    puVar5[0x17] = uVar1;
    uVar1 = puVar4[0x19];
    puVar5[0x18] = puVar4[0x18];
    puVar5[0x19] = uVar1;
    puVar5[0x1a] = puVar4[0x1a];
    *(undefined4 *)(param_1 + 2) = 0;
    __acrt_add_locale_ref((longlong)param_1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

__acrt_ptd *
FUN_18001452c(wchar_t *param_1,__acrt_ptd *param_2,rsize_t param_3,short *param_4,ulonglong param_5,
             undefined4 *param_6)

{
  __acrt_ptd *_Src;
  wchar_t wVar1;
  wchar_t wVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  errno_t eVar6;
  int iVar7;
  uint uVar8;
  __acrt_ptd *p_Var9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  longlong lVar15;
  __acrt_ptd *unaff_R13;
  char cVar16;
  char cVar17;
  ulonglong uVar18;
  undefined1 auStackY_2a8 [32];
  ulonglong local_278;
  __acrt_ptd *local_270;
  __acrt_ptd *local_268;
  short *local_260;
  ulonglong local_258;
  __acrt_ptd *local_250;
  char local_248;
  undefined4 *local_240;
  rsize_t local_238;
  __acrt_ptd *local_230;
  WCHAR local_228 [128];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  short local_122;
  short local_120;
  short sStack_11e;
  wchar_t local_108 [88];
  ulonglong local_58;
  ulonglong uVar19;
  
  local_58 = DAT_180034040 ^ (ulonglong)auStackY_2a8;
  local_278 = param_5;
  local_240 = param_6;
  if (param_1 == (wchar_t *)0x0) {
    return unaff_R13;
  }
  local_238 = param_3;
  local_230 = param_2;
  if ((*param_1 == L'C') && (param_1[1] == L'\0')) {
    eVar6 = wcscpy_s((wchar_t *)param_2,param_3,L"C");
    if (eVar6 == 0) {
      *param_6 = 0;
      return unaff_R13;
    }
    goto LAB_18001497f;
  }
  p_Var9 = FUN_180013b60();
  local_250 = p_Var9 + 0x98;
  local_258 = param_5;
  cVar16 = '\0';
  local_248 = '\0';
  local_270 = p_Var9 + 0xb8;
  local_268 = p_Var9 + 0xbc;
  _Src = p_Var9 + 0x1c2;
  local_260 = param_4;
  iVar7 = FUN_18001dbac(param_4,param_5,(longlong)(p_Var9 + 0x2f0),0x55);
  if (iVar7 != 0) goto LAB_18001497f;
  uVar18 = 0xffffffffffffffff;
  do {
    uVar19 = uVar18;
    uVar18 = uVar19 + 1;
  } while (param_1[uVar18] != L'\0');
  if (uVar18 < 0x83) {
    p_Var9 = _Src;
    do {
      wVar1 = *(wchar_t *)p_Var9;
      wVar2 = *(wchar_t *)(p_Var9 + ((longlong)param_1 - (longlong)_Src));
      if (wVar1 != wVar2) break;
      p_Var9 = p_Var9 + 2;
    } while (wVar2 != L'\0');
    cVar17 = '\0';
    if (wVar1 != wVar2) {
      p_Var9 = local_268;
      do {
        sVar3 = *(short *)p_Var9;
        sVar4 = *(short *)(p_Var9 + ((longlong)param_1 - (longlong)local_268));
        if (sVar3 != sVar4) break;
        p_Var9 = p_Var9 + 2;
      } while (sVar4 != 0);
      if (sVar3 != sVar4) goto LAB_1800146a9;
    }
LAB_180014953:
    cVar16 = cVar17;
    *local_240 = *(undefined4 *)local_270;
    eVar6 = wcscpy_s((wchar_t *)local_230,local_238,(wchar_t *)_Src);
    if (eVar6 != 0) goto LAB_18001497f;
  }
  else {
LAB_1800146a9:
    bVar5 = FUN_180017910();
    uVar10 = FUN_180014304((undefined1 (*) [32])local_228,param_1);
    p_Var9 = local_270;
    if ((int)uVar10 == 0) {
      if (bVar5) {
        uVar10 = FUN_18001e4bc(local_228,(uint *)local_270,local_228);
        iVar7 = (int)uVar10;
      }
      else {
        uVar10 = __acrt_get_qualified_locale_downlevel
                           ((longlong)local_228,(UINT *)local_270,local_228);
        iVar7 = (int)uVar10;
      }
      if (iVar7 == 0) goto LAB_180014742;
      FUN_180014260((wchar_t *)_Src,0x83,local_228);
      lVar14 = -1;
      do {
        lVar15 = lVar14;
        lVar14 = lVar15 + 1;
      } while (local_108[lVar14] != L'\0');
      cVar17 = '\x01';
      iVar7 = FUN_18001dbac(param_4,local_278,(longlong)local_108,lVar15 + 2);
      if (iVar7 != 0) goto LAB_180014994;
LAB_18001491b:
      if ((*param_1 == L'\0') || (0x82 < uVar18)) {
        *(undefined2 *)local_268 = 0;
      }
      else {
        iVar7 = FUN_18001dbac((short *)local_268,0x83,(longlong)param_1,uVar19 + 2);
        if (iVar7 != 0) {
LAB_180014994:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_180014953;
    }
LAB_180014742:
    iVar7 = FUN_1800176dc((ushort *)param_1);
    if (iVar7 != 0) {
      local_278 = local_278 & 0xffffffff00000000;
      iVar7 = FUN_180017570((ushort *)param_1,0x20001004,(LPWSTR)&local_278,2);
      if ((iVar7 == 0) || (uVar12 = (uint)local_278, (uint)local_278 == 0)) {
        uVar12 = 0xfde9;
      }
      *(uint *)p_Var9 = uVar12 & 0xffff;
      lVar14 = uVar19 + 2;
      iVar7 = FUN_18001dbac((short *)_Src,0x83,(longlong)param_1,lVar14);
      pwVar13 = param_1;
      if (iVar7 != 0) goto LAB_180014994;
LAB_18001490c:
      FUN_180014128(&local_260,(longlong)pwVar13,lVar14);
      cVar17 = local_248;
      goto LAB_18001491b;
    }
    uVar11 = FUN_180015280((undefined1 (*) [32])local_228,param_1);
    if (((char)uVar11 != '\0') && (iVar7 = FUN_1800176dc((ushort *)local_108), iVar7 != 0)) {
      if (local_128 == 0) {
        local_278 = local_278 & 0xffffffff00000000;
        iVar7 = FUN_180017570((ushort *)local_108,0x20001004,(LPWSTR)&local_278,2);
        if ((iVar7 == 0) || (uVar12 = (uint)local_278, (uint)local_278 == 0)) goto LAB_1800148c2;
      }
      else {
        uVar8 = (uint)local_128;
        uVar12 = uVar8 + 0x20;
        if (0x19 < uVar8 - 0x41) {
          uVar12 = uVar8;
        }
        if (uVar12 == 0x75) {
          uVar12 = local_126 + 0x20;
          if (0x19 < local_126 - 0x41) {
            uVar12 = (uint)local_126;
          }
          if (uVar12 == 0x74) {
            uVar12 = local_124 + 0x20;
            if (0x19 < local_124 - 0x41) {
              uVar12 = (uint)local_124;
            }
            if (((uVar12 == 0x66) && (local_122 == 0x38)) && (local_120 == 0)) goto LAB_1800148c2;
          }
        }
        if (((local_122 != 0x2d) || (local_120 != 0x38)) || (sStack_11e != 0)) goto LAB_180014860;
LAB_1800148c2:
        uVar12 = 0xfde9;
      }
      *(uint *)p_Var9 = uVar12 & 0xffff;
      iVar7 = FUN_18001dbac((short *)_Src,0x83,(longlong)param_1,uVar19 + 2);
      lVar15 = -1;
      if (iVar7 != 0) goto LAB_180014994;
      do {
        lVar14 = lVar15;
        lVar15 = lVar14 + 1;
      } while (local_108[lVar15] != L'\0');
      lVar14 = lVar14 + 2;
      pwVar13 = local_108;
      goto LAB_18001490c;
    }
  }
LAB_180014860:
  if ((cVar16 != '\0') ||
     (iVar7 = FUN_18001dbac((short *)(local_250 + 600),0x55,(longlong)local_260,local_258),
     iVar7 == 0)) {
    return unaff_R13;
  }
LAB_18001497f:
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}




void FUN_1800149ac(short *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int local_res18 [2];
  longlong local_res20;
  
  if (0 < param_3) {
    local_res20 = param_4;
    iVar2 = 0;
    plVar3 = (longlong *)local_res18;
    local_res18[0] = param_3;
    do {
      plVar3 = plVar3 + 1;
      iVar1 = FUN_18001da3c(param_1,param_2,*plVar3);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res18[0]);
  }
  return;
}




/* Library Function - Single Match
    _wsetlocale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale)

{
  __acrt_ptd *p_Var1;
  int local_res8 [2];
  wchar_t *local_res10;
  <lambda_7f2adfce497ff2baa965cd4f576ecfd1> local_res18 [8];
  __acrt_ptd *local_res20;
  wchar_t *local_48;
  undefined8 local_40;
  __acrt_ptd **local_38;
  undefined8 *local_30;
  __acrt_ptd **local_28;
  wchar_t **local_20;
  int *local_18;
  wchar_t **local_10;
  
  local_48 = (wchar_t *)0x0;
  local_40 = 0;
  local_res8[0] = _Category;
  local_res10 = _Locale;
  if ((uint)_Category < 6) {
    local_res20 = FUN_180013b60();
    __acrt_eagerly_load_locale_apis();
    __acrt_update_thread_locale_data();
    *(uint *)(local_res20 + 0x3a8) = *(uint *)(local_res20 + 0x3a8) | 0x10;
    local_38 = &local_res20;
    local_30 = &local_40;
    local_28 = &local_res20;
    local_20 = &local_48;
    local_18 = local_res8;
    local_10 = &local_res10;
    __crt_seh_guarded_call<void>::
    operator()<class_<lambda_7f2adfce497ff2baa965cd4f576ecfd1>,class_<lambda_2a444430fde8c29194d880d93eed5e8f>&___ptr64,class_<lambda_8dff2cf36a5417162780cd64fa2883ef>&___ptr64>
              ((__crt_seh_guarded_call<void> *)local_res18,local_res18,
               (<lambda_2a444430fde8c29194d880d93eed5e8f> *)&local_30,
               (<lambda_8dff2cf36a5417162780cd64fa2883ef> *)&local_38);
  }
  else {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_180010fac();
    local_48 = (wchar_t *)0x0;
  }
  return local_48;
}




short * FUN_180014ab8(longlong param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  longlong lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  
  psVar7 = _malloc_base(0x6a6);
  psVar8 = psVar7;
  if (psVar7 != (short *)0x0) {
    psVar8 = psVar7 + 2;
    psVar7[0] = 1;
    psVar7[1] = 0;
    *psVar8 = 0;
    puVar12 = (undefined8 *)(param_1 + 0x48);
    FUN_1800149ac(psVar8,0x351,3,PTR_u_LC_COLLATE_180028668);
    ppuVar11 = &PTR_u_LC_COLLATE_180028668;
    bVar5 = true;
    do {
      iVar6 = FUN_18001da3c(psVar8,0x351,0x180028768);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      psVar9 = (short *)*puVar12;
      lVar10 = puVar12[4] - (longlong)psVar9;
      do {
        sVar1 = *psVar9;
        sVar2 = *(short *)((longlong)psVar9 + lVar10);
        if (sVar1 != sVar2) break;
        psVar9 = psVar9 + 1;
      } while (sVar2 != 0);
      bVar4 = false;
      if (sVar1 == sVar2) {
        bVar4 = bVar5;
      }
      ppuVar11 = ppuVar11 + 3;
      puVar12 = puVar12 + 4;
      FUN_1800149ac(psVar8,0x351,3,*ppuVar11);
      bVar5 = bVar4;
    } while ((longlong)ppuVar11 < 0x1800286c8);
    if (bVar4) {
      FUN_180016ba8(psVar7);
      piVar3 = *(int **)(param_1 + 0x38);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FUN_180016ba8(*(LPVOID *)(param_1 + 0x38));
        }
      }
      piVar3 = *(int **)(param_1 + 0x30);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FUN_180016ba8(*(LPVOID *)(param_1 + 0x30));
        }
      }
      psVar8 = *(short **)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      piVar3 = *(int **)(param_1 + 0x38);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FUN_180016ba8(*(LPVOID *)(param_1 + 0x38));
        }
      }
      piVar3 = *(int **)(param_1 + 0x30);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FUN_180016ba8(*(LPVOID *)(param_1 + 0x30));
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(short **)(param_1 + 0x38) = psVar7;
      *(short **)(param_1 + 0x28) = psVar8;
    }
  }
  return psVar8;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180014ca4(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  short sVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  longlong lVar7;
  longlong extraout_RAX;
  __acrt_ptd *p_Var8;
  ulonglong uVar9;
  size_t sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined **ppuVar17;
  undefined1 auStackY_248 [32];
  undefined4 local_218 [4];
  __acrt_ptd local_208 [272];
  short local_f8 [88];
  ulonglong local_48;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStackY_248;
  uVar13 = 0;
  if ((int)param_2 != 0) {
    if (param_3 == (wchar_t *)0x0) {
      return;
    }
    FUN_180014f34(param_1,param_2,param_3);
    return;
  }
  if (param_3 != (wchar_t *)0x0) {
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        pwVar5 = wcspbrk(param_3,L"=;");
        if (pwVar5 == (wchar_t *)0x0) {
          return;
        }
        sVar10 = (longlong)pwVar5 - (longlong)param_3 >> 1;
        if (sVar10 == 0) {
          return;
        }
        if (*pwVar5 == L';') {
          return;
        }
        uVar15 = 1;
        ppuVar17 = &PTR_u_LC_COLLATE_180028668;
        do {
          iVar4 = wcsncmp((wchar_t *)*ppuVar17,param_3,sVar10);
          if (iVar4 == 0) {
            sVar6 = 0xffffffffffffffff;
            do {
              sVar6 = sVar6 + 1;
            } while (*(short *)(*ppuVar17 + sVar6 * 2) != 0);
            if (sVar10 == sVar6) break;
          }
          uVar15 = uVar15 + 1;
          ppuVar17 = ppuVar17 + 3;
        } while ((longlong)ppuVar17 < 0x1800286c9);
        pwVar5 = pwVar5 + 1;
        sVar10 = wcscspn(pwVar5,L";");
        if ((sVar10 == 0) && (*pwVar5 != L';')) {
          return;
        }
        if ((int)uVar15 < 6) {
          iVar4 = FUN_18001dbac((short *)local_208,0x83,(longlong)pwVar5,sVar10);
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < sVar10 * 2) {
            __report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined2 *)(local_208 + sVar10 * 2) = 0;
          lVar7 = FUN_180014f34(param_1,(ulonglong)uVar15,(wchar_t *)local_208);
          if (lVar7 != 0) {
            uVar13 = (ulonglong)((int)uVar13 + 1);
          }
        }
        iVar4 = (int)uVar13;
      } while ((pwVar5[sVar10] != L'\0') && (param_3 = pwVar5 + sVar10 + 1, *param_3 != L'\0'));
    }
    else {
      FUN_18001452c(param_3,local_208,0x83,local_f8,0x55,local_218);
      if (extraout_RAX == 0) {
        return;
      }
      plVar16 = (longlong *)(param_1 + 0x28);
      uVar9 = uVar13;
      uVar11 = 1;
      uVar14 = uVar13;
      do {
        uVar12 = uVar11;
        if ((int)uVar9 != 0) {
          p_Var8 = local_208;
          lVar7 = *plVar16 - (longlong)p_Var8;
          do {
            sVar1 = *(short *)p_Var8;
            sVar2 = *(short *)(p_Var8 + lVar7);
            if (sVar1 != sVar2) break;
            p_Var8 = p_Var8 + 2;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) ||
             (lVar7 = FUN_180014f34(param_1,uVar9,(wchar_t *)local_208), uVar12 = uVar13, lVar7 != 0
             )) {
            uVar14 = (ulonglong)((int)uVar14 + 1);
            uVar12 = uVar11;
          }
        }
        iVar4 = (int)uVar14;
        uVar15 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar15;
        plVar16 = plVar16 + 4;
        uVar11 = uVar12;
      } while ((int)uVar15 < 6);
      if ((int)uVar12 != 0) goto LAB_180014e47;
    }
    if (iVar4 == 0) {
      return;
    }
  }
LAB_180014e47:
  FUN_180014ab8(param_1);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180014f34(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  __acrt_ptd *p_Var1;
  wchar_t wVar2;
  wchar_t wVar3;
  undefined8 uVar4;
  int *piVar5;
  errno_t eVar6;
  BOOL BVar7;
  int iVar8;
  __acrt_ptd *p_Var9;
  longlong extraout_RAX;
  undefined4 *puVar10;
  ushort *puVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  short *psVar14;
  short *psVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar20;
  __acrt_ptd *p_Var21;
  undefined1 auStackY_368 [32];
  undefined4 local_328;
  undefined4 local_324;
  undefined *local_320;
  undefined8 local_318;
  wchar_t local_308;
  short local_306;
  short local_1f8 [88];
  WORD local_148 [128];
  ulonglong local_48;
  short *psVar19;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStackY_368;
  p_Var9 = FUN_180013b60();
  p_Var1 = p_Var9 + 0x2c8;
  p_Var21 = FUN_18001452c(param_3,(__acrt_ptd *)&local_308,0x83,local_1f8,0x55,&local_328);
  if (extraout_RAX != 0) {
    pwVar12 = &local_308;
    lVar16 = (longlong)p_Var21 * 0x20;
    lVar17 = *(longlong *)(lVar16 + 0x28 + param_1);
    lVar20 = lVar17 - (longlong)pwVar12;
    do {
      wVar2 = *pwVar12;
      wVar3 = *(wchar_t *)((longlong)pwVar12 + lVar20);
      if (wVar2 != wVar3) break;
      pwVar12 = pwVar12 + 1;
    } while (wVar3 != L'\0');
    if (wVar2 == wVar3) {
      return lVar17;
    }
    lVar17 = -1;
    do {
      lVar20 = lVar17;
      lVar17 = lVar20 + 1;
    } while ((&local_308)[lVar17] != L'\0');
    puVar10 = _malloc_base(lVar17 * 2 + 6);
    if (puVar10 != (undefined4 *)0x0) {
      local_320 = *(undefined **)(lVar16 + 0x28 + param_1);
      local_318 = *(undefined8 *)(param_1 + 0x128 + (longlong)p_Var21 * 8);
      local_324 = *(undefined4 *)(param_1 + 0xc);
      eVar6 = wcscpy_s((wchar_t *)(puVar10 + 1),lVar20 + 2,&local_308);
      psVar14 = (short *)0x0;
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined4 **)(lVar16 + 0x28 + param_1) = puVar10 + 1;
      if ((local_308 != L'C') || (psVar15 = psVar14, local_306 != 0)) {
        psVar15 = FUN_1800141a0((undefined1 (*) [32])local_1f8);
      }
      *(short **)(param_1 + 0x128 + (longlong)p_Var21 * 8) = psVar15;
      iVar8 = (int)p_Var21;
      if (iVar8 == 2) {
        *(undefined4 *)(param_1 + 0xc) = local_328;
        uVar13 = *(undefined8 *)(p_Var9 + 0x2e8);
        psVar15 = psVar14;
        psVar19 = psVar14;
        do {
          uVar18 = (uint)psVar19;
          if (*(int *)(param_1 + 0xc) == *(int *)(p_Var1 + (longlong)psVar15 * 8)) {
            if (uVar18 != 0) {
              *(undefined8 *)p_Var1 = *(undefined8 *)(p_Var1 + (longlong)(int)uVar18 * 8);
              *(undefined8 *)(p_Var1 + (longlong)(int)uVar18 * 8) = uVar13;
            }
            break;
          }
          uVar4 = *(undefined8 *)(p_Var1 + (longlong)psVar15 * 8);
          uVar18 = uVar18 + 1;
          psVar19 = (short *)(ulonglong)uVar18;
          *(undefined8 *)(p_Var1 + (longlong)psVar15 * 8) = uVar13;
          psVar15 = (short *)((longlong)psVar15 + 1);
          uVar13 = uVar4;
        } while ((longlong)psVar15 < 5);
        if (uVar18 == 5) {
          BVar7 = FUN_180019e00((__crt_locale_pointers *)0x0,1,
                                "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                                ,0x7f,local_148,*(UINT *)(param_1 + 0xc),1);
          if (BVar7 == 0) {
            uVar18 = 0;
          }
          else {
            puVar11 = local_148;
            do {
              uVar18 = (int)psVar14 + 1;
              psVar14 = (short *)(ulonglong)uVar18;
              *puVar11 = *puVar11 & 0x1ff;
              puVar11 = puVar11 + 1;
            } while (uVar18 < 0x7f);
            iVar8 = memcmp(local_148,PTR_DAT_180034298,0xfe);
            uVar18 = (uint)(iVar8 == 0);
          }
          *(uint *)(p_Var9 + 0x2cc) = uVar18;
          *(undefined4 *)p_Var1 = *(undefined4 *)(param_1 + 0xc);
        }
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(p_Var9 + 0x2cc);
      }
      else if (iVar8 == 1) {
        *(undefined4 *)(param_1 + 0x14) = local_328;
      }
      else if (iVar8 == 5) {
        *(undefined4 *)(param_1 + 0x18) = local_328;
      }
      iVar8 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1);
      if (iVar8 == 0) {
        if (local_320 != &DAT_180034408) {
          piVar5 = *(int **)(lVar16 + 0x38 + param_1);
          LOCK();
          iVar8 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            FUN_180016ba8(*(LPVOID *)(lVar16 + 0x38 + param_1));
            FUN_180016ba8(*(LPVOID *)(lVar16 + 0x30 + param_1));
            FUN_180016ba8(*(LPVOID *)(param_1 + 0x128 + (longlong)p_Var21 * 8));
            *(undefined8 *)(lVar16 + 0x28 + param_1) = 0;
            *(undefined8 *)(param_1 + 0x128 + (longlong)p_Var21 * 8) = 0;
          }
        }
        *puVar10 = 1;
        *(undefined4 **)(lVar16 + 0x38 + param_1) = puVar10;
        return *(longlong *)(lVar16 + 0x28 + param_1);
      }
      *(undefined **)(lVar16 + 0x28 + param_1) = local_320;
      FUN_180016ba8(*(LPVOID *)(param_1 + 0x128 + (longlong)p_Var21 * 8));
      *(undefined8 *)(param_1 + 0x128 + (longlong)p_Var21 * 8) = local_318;
      FUN_180016ba8(puVar10);
      *(undefined4 *)(param_1 + 0xc) = local_324;
    }
  }
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180015280(undefined1 (*param_1) [32],wchar_t *param_2)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined1 (*pauVar3) [32];
  size_t sVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong *plVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  size_t *psVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  size_t local_a0 [2];
  longlong local_90 [3];
  longlong local_78 [3];
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStack_c8;
  pauVar3 = FUN_180021e70(param_1,0,0x1ca);
  uVar10 = 0;
  psVar9 = local_a0;
  uVar6 = 1;
  uVar8 = uVar10;
  uVar11 = uVar10;
  do {
    while( true ) {
      do {
        uVar7 = uVar8;
        if (3 < uVar7) goto LAB_180015452;
        if ((int)uVar11 == 2) {
          sVar4 = 0xffffffffffffffff;
          do {
            sVar4 = sVar4 + 1;
          } while (param_2[sVar4] != L'\0');
        }
        else {
          sVar4 = wcscspn(param_2,L"-_.");
        }
        psVar9[-1] = (size_t)param_2;
        uVar8 = uVar7 + 1;
        *psVar9 = sVar4;
        wVar1 = param_2[sVar4];
        pauVar3 = (undefined1 (*) [32])(ulonglong)(ushort)wVar1;
        param_2 = param_2 + sVar4 + 1;
        *(int *)(psVar9 + 1) = (int)uVar11;
        psVar9 = psVar9 + 3;
        if (wVar1 == L'\0') goto LAB_180015332;
        uVar11 = uVar10;
      } while (wVar1 == L'-');
      if (wVar1 != L'.') break;
      uVar11 = 2;
    }
  } while (wVar1 == L'_');
LAB_180015332:
  if (uVar7 == 0) {
    uVar8 = FUN_1800154c4((short *)param_1,&local_a8);
    return uVar8;
  }
  if (uVar7 == 1) {
    uVar8 = FUN_1800154c4((short *)param_1,&local_a8);
    if ((char)uVar8 != '\0') {
      uVar8 = FUN_180015644((longlong)param_1,local_90);
      if (((char)uVar8 != '\0') ||
         (uVar8 = FUN_180015550((longlong)param_1,local_90), (char)uVar8 != '\0'))
      goto LAB_18001543f;
      plVar5 = local_90;
LAB_180015430:
      uVar2 = FUN_18001547c((longlong)param_1,plVar5);
      uVar8 = CONCAT44(extraout_var_00,uVar2);
      if ((char)uVar2 != '\0') goto LAB_18001543f;
    }
  }
  else if (uVar7 == 2) {
    uVar8 = FUN_1800154c4((short *)param_1,&local_a8);
    if ((char)uVar8 != '\0') {
      uVar8 = FUN_180015644((longlong)param_1,local_90);
      if ((char)uVar8 != '\0') {
        uVar8 = FUN_180015550((longlong)param_1,local_78);
        if ((char)uVar8 != '\0') goto LAB_18001543f;
        uVar2 = FUN_18001547c((longlong)param_1,local_78);
        uVar8 = CONCAT44(extraout_var,uVar2);
        if ((char)uVar2 != '\0') goto LAB_18001543f;
      }
      uVar8 = FUN_180015550((longlong)param_1,local_90);
      if ((char)uVar8 != '\0') {
        plVar5 = local_78;
        goto LAB_180015430;
      }
    }
  }
  else {
    if (uVar7 != 3) {
LAB_180015452:
      return (ulonglong)pauVar3 & 0xffffffffffffff00;
    }
    uVar8 = FUN_1800154c4((short *)param_1,&local_a8);
    if ((((char)uVar8 != '\0') &&
        (uVar8 = FUN_180015644((longlong)param_1,local_90), (char)uVar8 != '\0')) &&
       (uVar8 = FUN_180015550((longlong)param_1,local_78), (char)uVar8 != '\0')) {
      plVar5 = local_60;
      goto LAB_180015430;
    }
  }
  uVar6 = 0;
LAB_18001543f:
  return CONCAT71((int7)(uVar8 >> 8),uVar6);
}




uint FUN_18001547c(longlong param_1,longlong *param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  
  if ((int)param_2[2] == 2) {
    iVar2 = FUN_18001dbac((short *)(param_1 + 0x100),0x10,*param_2,param_2[1]);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}




ulonglong FUN_1800154c4(short *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  
  if ((int)param_2[2] == 0) {
    in_RAX = param_2[1] - 2;
    if ((in_RAX < 2) && (in_RAX = FUN_1800156d4(*param_2,param_2[1]), (char)in_RAX != '\0')) {
      iVar1 = FUN_18001dbac(param_1,0x40,*param_2,param_2[1]);
      if (iVar1 == 0) {
        iVar1 = FUN_18001dbac(param_1 + 0x90,0x55,*param_2,param_2[1]);
        if (iVar1 == 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
        }
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180015550(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar4;
  
  if ((int)param_2[2] == 0) {
    if ((param_2[1] != 2) || (in_RAX = FUN_1800156d4(*param_2,2), (char)in_RAX == '\0')) {
      if (param_2[1] != 3) goto LAB_180015619;
      lVar2 = *param_2;
      uVar4 = 0;
      do {
        uVar1 = *(ushort *)(lVar2 + uVar4 * 2);
        in_RAX = FUN_1800119fc();
        if ((0xff < uVar1) ||
           (uVar1 = *(ushort *)(in_RAX + (ulonglong)uVar1 * 2), in_RAX = (ulonglong)uVar1,
           (uVar1 >> 2 & 1) == 0)) goto LAB_180015619;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
    }
    iVar3 = FUN_18001dbac((short *)(param_1 + 0x80),0x40,*param_2,param_2[1]);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_18001dab4((short *)(param_1 + 0x120),0x55,(short *)&DAT_180026864,1), iVar3 == 0
       )) {
      iVar3 = FUN_18001dab4((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]);
      if (iVar3 == 0) {
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),1);
      }
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_180015619:
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_180015644(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  
  if ((((int)param_2[2] == 0) && (param_2[1] == 4)) &&
     (in_RAX = FUN_1800156d4(*param_2,4), (char)in_RAX != '\0')) {
    iVar1 = FUN_18001dab4((short *)(param_1 + 0x120),0x55,(short *)&DAT_180026864,1);
    if (iVar1 == 0) {
      iVar1 = FUN_18001dab4((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]);
      if (iVar1 == 0) {
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
      }
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_1800156d4(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  undefined8 in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      lVar2 = FUN_1800119fc();
      in_RAX = 0;
      if ((0xff < uVar1) || ((*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) & 0x103) == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* Library Function - Single Match
    void __cdecl initialize_inherited_file_handles_nolock(void)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl initialize_inherited_file_handles_nolock(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  GetStartupInfoW(&local_78);
  lVar5 = 0;
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_180059280 < (int)uVar7) {
      uVar7 = DAT_180059280;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      do {
        if ((((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0))
           && (((*puVar6 & 8) != 0 || (DVar2 = GetFileType(*(HANDLE *)pbVar4), DVar2 != 0)))) {
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_180058e80)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}




void FUN_180015830(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_180058e80)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_18001590e;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_180058a88 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_180058a88) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_18001590e:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}




/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  longlong lVar1;
  bool bVar2;
  
  __acrt_lock(7);
  lVar1 = __acrt_lowio_ensure_fh_exists(0);
  bVar2 = (int)lVar1 == 0;
  if (bVar2) {
    initialize_inherited_file_handles_nolock();
    FUN_180015830();
  }
  __acrt_unlock(7);
  return bVar2;
}




/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((longlong)&DAT_180058e80 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      __acrt_lowio_destroy_handle_array(*(LPCRITICAL_SECTION *)((longlong)&DAT_180058e80 + uVar1));
      *(undefined8 *)((longlong)&DAT_180058e80 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800159b4(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                       undefined8 param_6,int param_7,UINT param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  LPCWSTR pWVar9;
  LPCWSTR pWVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 auStackY_88 [32];
  undefined4 local_38 [2];
  ulonglong local_30;
  
  puVar11 = auStackY_88;
  puVar13 = auStackY_88;
  local_30 = DAT_180034040 ^ (ulonglong)local_38;
  iVar2 = param_5;
  if (0 < param_5) {
    sVar5 = __strncnt(param_4,(longlong)param_5);
    iVar4 = (int)sVar5;
    iVar2 = iVar4 + 1;
    if (param_5 <= iVar4) {
      iVar2 = iVar4;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  uVar6 = FUN_18001907c(param_8,(-(uint)(param_9 != 0) & 8) + 1,param_4,iVar2,(LPWSTR)0x0,0);
  pWVar9 = (LPCWSTR)0x0;
  iVar4 = (int)uVar6;
  puVar14 = auStackY_88;
  if (iVar4 == 0) goto LAB_180015cbf;
  uVar6 = (longlong)iVar4 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)iVar4 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
LAB_180015ca5:
    uVar6 = 0;
    if (pWVar9 != (LPCWSTR)0x0) goto LAB_180015cac;
  }
  else {
    if (uVar6 < 0x401) {
      uVar8 = uVar6 + 0xf;
      if (uVar8 <= uVar6) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar13 = auStackY_88 + lVar1;
      puVar11 = auStackY_88 + lVar1;
      puVar7 = (undefined4 *)((longlong)local_38 + lVar1);
      pWVar9 = (LPCWSTR)0x0;
      if (puVar7 == (undefined4 *)0x0) goto LAB_180015ca5;
      *puVar7 = 0xcccc;
LAB_180015ac0:
      pWVar9 = (LPCWSTR)(puVar7 + 4);
      puVar13 = puVar11;
    }
    else {
      puVar7 = _malloc_base(uVar6);
      pWVar9 = (LPCWSTR)0x0;
      puVar13 = auStackY_88;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0xdddd;
        goto LAB_180015ac0;
      }
    }
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_180015ca5;
    *(int *)(puVar13 + 0x28) = iVar4;
    *(LPCWSTR *)(puVar13 + 0x20) = pWVar9;
    *(undefined8 *)(puVar13 + -8) = 0x180015aea;
    iVar2 = FUN_18001907c(param_8,1,param_4,iVar2,*(LPWSTR *)(puVar13 + 0x20),
                          *(int *)(puVar13 + 0x28));
    if (iVar2 == 0) goto LAB_180015ca5;
    *(undefined8 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + 0x38) = 0;
    *(undefined8 *)(puVar13 + 0x30) = 0;
    *(undefined4 *)(puVar13 + 0x28) = 0;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + -8) = 0x180015b1d;
    iVar2 = FUN_1800177c4(param_2,param_3,pWVar9,iVar4,*(LPWSTR *)(puVar13 + 0x20),
                          *(int *)(puVar13 + 0x28),*(undefined8 *)(puVar13 + 0x30),
                          *(undefined8 *)(puVar13 + 0x38),*(undefined8 *)(puVar13 + 0x40));
    pWVar10 = (LPCWSTR)0x0;
    uVar6 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_180015ca5;
    if ((param_3 & 0x400) == 0) {
      uVar8 = uVar6 * 2 + 0x10;
      uVar8 = -(ulonglong)(uVar6 * 2 < uVar8) & uVar8;
      if (uVar8 == 0) goto LAB_180015c88;
      if (uVar8 < 0x401) {
        uVar6 = uVar8 + 0xf;
        if (uVar6 <= uVar8) {
          uVar6 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar13 + -8) = 0x180015bc0;
        lVar1 = -(uVar6 & 0xfffffffffffffff0);
        puVar12 = puVar13 + lVar1;
        puVar7 = (undefined4 *)(puVar13 + lVar1 + 0x50);
        puVar13 = puVar13 + lVar1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xcccc;
          puVar13 = puVar12;
LAB_180015bee:
          pWVar10 = (LPCWSTR)(puVar7 + 4);
          goto LAB_180015bf2;
        }
      }
      else {
        *(undefined8 *)(puVar13 + -8) = 0x180015bde;
        puVar7 = _malloc_base(uVar8);
        pWVar10 = (LPCWSTR)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0xdddd;
          goto LAB_180015bee;
        }
LAB_180015bf2:
        if (pWVar10 != (LPCWSTR)0x0) {
          *(undefined8 *)(puVar13 + 0x40) = 0;
          *(undefined8 *)(puVar13 + 0x38) = 0;
          *(undefined8 *)(puVar13 + 0x30) = 0;
          *(int *)(puVar13 + 0x28) = iVar2;
          *(LPCWSTR *)(puVar13 + 0x20) = pWVar10;
          *(undefined8 *)(puVar13 + -8) = 0x180015c24;
          iVar4 = FUN_1800177c4(param_2,param_3,pWVar9,iVar4,*(LPWSTR *)(puVar13 + 0x20),
                                *(int *)(puVar13 + 0x28),*(undefined8 *)(puVar13 + 0x30),
                                *(undefined8 *)(puVar13 + 0x38),*(undefined8 *)(puVar13 + 0x40));
          if (iVar4 != 0) {
            *(undefined8 *)(puVar13 + 0x38) = 0;
            *(undefined8 *)(puVar13 + 0x30) = 0;
            if (param_7 == 0) {
              *(undefined4 *)(puVar13 + 0x28) = 0;
              *(undefined8 *)(puVar13 + 0x20) = 0;
              *(undefined8 *)(puVar13 + -8) = 0x180015c52;
              uVar3 = FUN_18001a8b4(param_8,0,pWVar10,iVar2,*(LPSTR *)(puVar13 + 0x20),
                                    *(int *)(puVar13 + 0x28),*(LPBOOL *)(puVar13 + 0x30),
                                    *(LPBOOL *)(puVar13 + 0x38));
              if (uVar3 == 0) goto LAB_180015c88;
            }
            else {
              *(int *)(puVar13 + 0x28) = param_7;
              *(undefined8 *)(puVar13 + 0x20) = param_6;
              *(undefined8 *)(puVar13 + -8) = 0x180015c6c;
              uVar3 = FUN_18001a8b4(param_8,0,pWVar10,iVar2,*(LPSTR *)(puVar13 + 0x20),
                                    *(int *)(puVar13 + 0x28),*(LPBOOL *)(puVar13 + 0x30),
                                    *(LPBOOL *)(puVar13 + 0x38));
              if (uVar3 == 0) goto LAB_180015c8d;
            }
            uVar6 = (ulonglong)uVar3;
            if (*(int *)(pWVar10 + -8) == 0xdddd) {
              *(undefined8 *)(puVar13 + -8) = 0x180015c83;
              FUN_180016ba8(pWVar10 + -8);
            }
            goto LAB_180015cac;
          }
LAB_180015c88:
          if (pWVar10 != (LPCWSTR)0x0) {
LAB_180015c8d:
            if (*(int *)(pWVar10 + -8) == 0xdddd) {
              *(undefined8 *)(puVar13 + -8) = 0x180015c9e;
              FUN_180016ba8(pWVar10 + -8);
            }
          }
        }
      }
      uVar6 = 0;
    }
    else if (param_7 != 0) {
      if (iVar2 <= param_7) {
        *(undefined8 *)(puVar13 + 0x40) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        *(int *)(puVar13 + 0x28) = param_7;
        *(undefined8 *)(puVar13 + 0x20) = param_6;
        *(undefined8 *)(puVar13 + -8) = 0x180015b75;
        uVar3 = FUN_1800177c4(param_2,param_3,pWVar9,iVar4,*(LPWSTR *)(puVar13 + 0x20),
                              *(int *)(puVar13 + 0x28),*(undefined8 *)(puVar13 + 0x30),
                              *(undefined8 *)(puVar13 + 0x38),*(undefined8 *)(puVar13 + 0x40));
        uVar6 = (ulonglong)uVar3;
        if (uVar3 != 0) goto LAB_180015cac;
      }
      goto LAB_180015ca5;
    }
LAB_180015cac:
    if (*(int *)(pWVar9 + -8) == 0xdddd) {
      *(undefined8 *)(puVar13 + -8) = 0x180015cbd;
      FUN_180016ba8(pWVar9 + -8);
    }
  }
  uVar6 = uVar6 & 0xffffffff;
  puVar14 = puVar13;
LAB_180015cbf:
  *(undefined8 *)(puVar14 + -8) = 0x180015ccb;
  return uVar6;
}




/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,char *param_4,
                        int param_5,undefined8 param_6,int param_7,UINT param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_1800159b4(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}




/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_180058e70) && ((DAT_180034560 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}




void FUN_180015db4(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;
  
  if ((*param_2 != (&DAT_180058e70)[param_3]) && ((DAT_180034560 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}




void FUN_180015dec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_180059570) && ((DAT_180034560 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_18001bddc();
    *param_2 = lVar1;
  }
  return;
}




void FUN_180015e20(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_180059570)[param_3]) && ((DAT_180034560 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_18001bddc();
    *param_2 = lVar1;
  }
  return;
}




undefined8 FUN_180015e58(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  
  FUN_18001c618(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_180058e80)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_18001c724(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_180015ecf;
    DVar3 = GetLastError();
    p_Var4 = FUN_180010148();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_180010168();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_180015ecf:
  FUN_18001c640(*param_4);
  return uVar5;
}




/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180059280)) &&
       ((*(byte *)((&DAT_180058e80)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_180015e58(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 9;
    FUN_180010fac();
  }
  return -1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD * FUN_180015f78(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  WCHAR local_c4 [2];
  uint local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_4f;
  CHAR local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_180034040 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar16 = (longlong)(int)param_2 >> 6;
  uVar6 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_180058e80)[lVar16] + 0x28 + uVar6 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar16;
  local_a0 = GetConsoleOutputCP();
  uVar14 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_18000f8c0(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar15 = uVar14;
  local_68 = lVar16;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    do {
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4[0] = L'\0';
      local_c4[1] = L'\0';
      uVar9 = 1;
      if (local_9c == 0xfde9) {
        pcVar7 = (char *)(uVar6 * 0x48 + 0x3e + (&DAT_180058e80)[local_68]);
        uVar15 = uVar14;
        uVar17 = uVar14;
        do {
          uVar9 = (uint)uVar15;
          if (*pcVar7 == '\0') break;
          uVar9 = uVar9 + 1;
          uVar15 = (ulonglong)uVar9;
          uVar17 = uVar17 + 1;
          pcVar7 = pcVar7 + 1;
        } while ((longlong)uVar17 < 5);
        if ((longlong)uVar17 < 1) {
          cVar1 = (&DAT_180034460)[*param_3];
          iVar3 = cVar1 + 1;
          lVar16 = (longlong)local_b8 - (longlong)param_3;
          if (lVar16 < iVar3) {
            uVar15 = uVar14;
            if (0 < lVar16) {
              do {
                *(byte *)((&DAT_180058e80)[local_90] + uVar14 + 0x3e + uVar6 * 0x48) =
                     param_3[uVar14];
                uVar9 = (int)uVar15 + 1;
                uVar14 = uVar14 + 1;
                uVar15 = (ulonglong)uVar9;
              } while ((int)uVar9 < lVar16);
            }
            param_1[1] = param_1[1] + (int)lVar16;
            return param_1;
          }
          local_a8[0] = 0;
          local_a8[1] = 0;
          uVar9 = (iVar3 == 4) + 1;
          local_78 = param_3;
          lVar16 = FUN_18001f228((ushort *)local_c4,&local_78,(ulonglong)uVar9,local_a8,
                                 (longlong)local_b0);
          if (lVar16 == -1) {
            return param_1;
          }
          pbVar13 = param_3 + cVar1;
          lVar16 = local_90;
        }
        else {
          cVar1 = (&DAT_180034460)[*(byte *)((&DAT_180058e80)[lVar16] + 0x3e + uVar6 * 0x48)];
          iVar3 = (cVar1 + 1) - uVar9;
          local_a8[0] = iVar3;
          lVar11 = (longlong)local_b8 - (longlong)param_3;
          uVar15 = (ulonglong)iVar3;
          if (lVar11 < (longlong)uVar15) {
            if (0 < lVar11) {
              uVar15 = uVar17;
              do {
                *(byte *)((&DAT_180058e80)[lVar16] + uVar15 + 0x3e + uVar6 * 0x48) =
                     param_3[uVar15 - uVar17];
                uVar9 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar9;
                uVar15 = uVar15 + 1;
              } while ((int)uVar9 < lVar11);
            }
            param_1[1] = param_1[1] + (int)lVar11;
            return param_1;
          }
          puVar12 = (undefined1 *)(uVar6 * 0x48 + 0x3e + (&DAT_180058e80)[local_68]);
          uVar8 = uVar14;
          do {
            *(undefined1 *)((longlong)&local_58 + uVar8) = *puVar12;
            uVar8 = uVar8 + 1;
            puVar12 = puVar12 + 1;
          } while ((longlong)uVar8 < (longlong)uVar17);
          uVar8 = uVar14;
          if (0 < (longlong)uVar15) {
            FUN_1800217d0((undefined8 *)((longlong)&local_58 + uVar17),(undefined8 *)param_3,uVar15)
            ;
          }
          do {
            *(undefined1 *)((&DAT_180058e80)[lVar16] + uVar8 + 0x3e + uVar6 * 0x48) = 0;
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)uVar17);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = &local_58;
          uVar9 = (cVar1 + 1 == 4) + 1;
          lVar11 = FUN_18001f228((ushort *)local_c4,&local_80,(ulonglong)uVar9,local_88,
                                 (longlong)local_b0);
          if (lVar11 == -1) {
            return param_1;
          }
          pbVar13 = param_3 + (int)(local_a8[0] - 1);
        }
      }
      else {
        lVar11 = (&DAT_180058e80)[lVar16];
        bVar2 = *(byte *)(lVar11 + 0x3d + uVar6 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
            pbVar13 = param_3 + 1;
            if (local_b8 <= pbVar13) {
              *(byte *)(lVar11 + 0x3e + uVar6 * 0x48) = *param_3;
              pbVar13 = (byte *)((&DAT_180058e80)[lVar16] + 0x3d + uVar6 * 0x48);
              *pbVar13 = *pbVar13 | 4;
              param_1[1] = (int)uVar15 + 1;
              return param_1;
            }
            iVar3 = FUN_18001a428(local_c4,param_3,2,local_b0);
            if (iVar3 == -1) {
              return param_1;
            }
            goto LAB_18001626e;
          }
          uVar15 = 1;
          pbVar13 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar11 + 0x3e + uVar6 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar11 + 0x3d + uVar6 * 0x48) = bVar2 & 0xfb;
          uVar15 = 2;
          pbVar13 = &local_50;
        }
        iVar3 = FUN_18001a428(local_c4,pbVar13,uVar15,local_b0);
        pbVar13 = param_3;
        if (iVar3 == -1) {
          return param_1;
        }
      }
LAB_18001626e:
      param_3 = pbVar13 + 1;
      uVar9 = FUN_18001a8b4(local_a0,0,local_c4,uVar9,local_48,5,(LPBOOL)0x0,(LPBOOL)0x0);
      hFile = local_70;
      if (uVar9 == 0) {
        return param_1;
      }
      BVar4 = WriteFile(local_70,local_48,uVar9,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
LAB_1800163bb:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        return param_1;
      }
      uVar10 = ((int)param_3 - (int)local_98) + param_1[2];
      param_1[1] = uVar10;
      if (local_c0[0] < uVar9) {
        return param_1;
      }
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_1800163bb;
        if (local_c0[0] == 0) {
          return param_1;
        }
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        uVar10 = param_1[1];
      }
      uVar15 = (ulonglong)uVar10;
    } while (param_3 < local_b8);
  }
  return param_1;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD * __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 in_register_0000000c;
  DWORD *pDVar4;
  uint nNumberOfBytesToWrite;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 in_register_00000084;
  ulonglong in_R9;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  char local_1428 [5120];
  ulonglong local_28;
  undefined8 local_20;
  
  pcVar7 = (char *)CONCAT44(in_register_00000084,param_3);
  pDVar4 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  local_20 = 0x180016408;
  local_28 = DAT_180034040 ^ (ulonglong)auStackY_1468;
  pcVar6 = pcVar7 + (in_R9 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_180058e80)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar4[0] = 0;
  pDVar4[1] = 0;
  pDVar4[2] = 0;
  do {
    if (pcVar6 <= pcVar7) {
      return pDVar4;
    }
    pcVar5 = local_1428;
    do {
      if (pcVar6 <= pcVar7) break;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (cVar1 == '\n') {
        pDVar4[2] = pDVar4[2] + 1;
        *pcVar5 = '\r';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < local_1428 + 0x13ff);
    nNumberOfBytesToWrite = (int)pcVar5 - (int)local_1428;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *pDVar4 = DVar3;
      return pDVar4;
    }
    pDVar4[1] = pDVar4[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return pDVar4;
    }
  } while( true );
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf16le_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD * __cdecl write_text_utf16le_nolock(int param_1,char *param_2,uint param_3)

{
  short sVar1;
  HANDLE hFile;
  uint nNumberOfBytesToWrite;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 in_register_0000000c;
  DWORD *pDVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_register_00000084;
  ulonglong in_R9;
  undefined1 auStackY_1468 [32];
  uint local_1438 [4];
  short local_1428 [2560];
  ulonglong local_28;
  undefined8 local_20;
  
  psVar7 = (short *)CONCAT44(in_register_00000084,param_3);
  pDVar4 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  local_20 = 0x18001650c;
  local_28 = DAT_180034040 ^ (ulonglong)auStackY_1468;
  psVar6 = (short *)((in_R9 & 0xffffffff) + (longlong)psVar7);
  hFile = *(HANDLE *)
           ((&DAT_180058e80)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar4[0] = 0;
  pDVar4[1] = 0;
  pDVar4[2] = 0;
  do {
    if (psVar6 <= psVar7) {
      return pDVar4;
    }
    psVar5 = local_1428;
    do {
      if (psVar6 <= psVar7) break;
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
      if (sVar1 == 10) {
        pDVar4[2] = pDVar4[2] + 2;
        *psVar5 = 0xd;
        psVar5 = psVar5 + 1;
      }
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
    } while (psVar5 < local_1428 + 0x9ff);
    nNumberOfBytesToWrite = (int)((longlong)psVar5 - (longlong)local_1428 >> 1) * 2;
    BVar2 = WriteFile(hFile,local_1428,nNumberOfBytesToWrite,local_1438,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *pDVar4 = DVar3;
      return pDVar4;
    }
    pDVar4[1] = pDVar4[1] + local_1438[0];
    if (local_1438[0] < nNumberOfBytesToWrite) {
      return pDVar4;
    }
  } while( true );
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_utf8_nolock(int,char const *
   __ptr64 const,unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD * __cdecl write_text_utf8_nolock(int param_1,char *param_2,uint param_3)

{
  WCHAR WVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  WCHAR *pWVar5;
  undefined4 in_register_0000000c;
  DWORD *pDVar6;
  uint uVar7;
  ulonglong uVar8;
  WCHAR *pWVar9;
  undefined4 in_register_00000084;
  uint in_R9D;
  WCHAR *pWVar10;
  undefined1 auStackY_1498 [32];
  DWORD local_1458 [4];
  WCHAR local_1448 [856];
  CHAR local_d98 [3424];
  ulonglong local_38;
  undefined8 local_30;
  
  pWVar9 = (WCHAR *)CONCAT44(in_register_00000084,param_3);
  pDVar6 = (DWORD *)CONCAT44(in_register_0000000c,param_1);
  local_30 = 0x18001662c;
  local_38 = DAT_180034040 ^ (ulonglong)auStackY_1498;
  pWVar10 = (WCHAR *)((ulonglong)in_R9D + (longlong)pWVar9);
  hFile = *(HANDLE *)
           ((&DAT_180058e80)[(longlong)(int)(uint)param_2 >> 6] + 0x28 +
           (ulonglong)((uint)param_2 & 0x3f) * 0x48);
  pDVar6[0] = 0;
  pDVar6[1] = 0;
  pDVar6[2] = 0;
  do {
    if (pWVar10 <= pWVar9) {
      return pDVar6;
    }
    pWVar5 = local_1448;
    do {
      if (pWVar10 <= pWVar9) break;
      WVar1 = *pWVar9;
      pWVar9 = pWVar9 + 1;
      if (WVar1 == L'\n') {
        *pWVar5 = L'\r';
        pWVar5 = pWVar5 + 1;
      }
      *pWVar5 = WVar1;
      pWVar5 = pWVar5 + 1;
    } while (pWVar5 < local_1448 + 0x354);
    uVar2 = FUN_18001a8b4(0xfde9,0,local_1448,(int)((longlong)pWVar5 - (longlong)local_1448 >> 1),
                          local_d98,0xd55,(LPBOOL)0x0,(LPBOOL)0x0);
    if (uVar2 == 0) {
LAB_180016749:
      DVar4 = GetLastError();
      *pDVar6 = DVar4;
      return pDVar6;
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        BVar3 = WriteFile(hFile,local_d98 + uVar8,uVar2 - (int)uVar8,local_1458,(LPOVERLAPPED)0x0);
        if (BVar3 == 0) goto LAB_180016749;
        uVar7 = (int)uVar8 + local_1458[0];
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar2);
    }
    pDVar6[1] = (int)pWVar9 - param_3;
  } while( true );
}




int FUN_180016780(uint param_1,wchar_t *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180059280 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_18001c618(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_1800168a0(param_1,param_2,param_3,param_4);
        }
        FUN_18001c640(param_1);
        return iVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}




int FUN_1800168a0(uint param_1,wchar_t *param_2,uint param_3,longlong *param_4)

{
  wchar_t *pwVar1;
  char cVar2;
  wchar_t _WCh;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  wchar_t wVar6;
  wint_t wVar7;
  BOOL BVar8;
  DWORD DVar9;
  int iVar10;
  ulonglong uVar11;
  undefined7 extraout_var;
  DWORD *pDVar12;
  DWORD DVar13;
  uint uVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined8 local_80;
  DWORD local_78;
  undefined8 local_70;
  DWORD local_60 [2];
  longlong local_58;
  
  DVar13 = 0;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_1800168d0:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar11 = (ulonglong)(param_1 & 0x3f);
  lVar15 = (longlong)(int)param_1 >> 6;
  cVar2 = *(char *)((&DAT_180058e80)[lVar15] + 0x39 + uVar11 * 0x48);
  local_58 = lVar15;
  if (((byte)(cVar2 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_1800168d0;
  if ((*(byte *)((&DAT_180058e80)[lVar15] + 0x38 + uVar11 * 0x48) & 0x20) != 0) {
    thunk_FUN_180018e28(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_70 = 0;
  bVar5 = FUN_18001f184(param_1);
  if (((int)CONCAT71(extraout_var,bVar5) == 0) ||
     (-1 < *(char *)((&DAT_180058e80)[lVar15] + 0x38 + uVar11 * 0x48))) {
LAB_180016a83:
    if (-1 < *(char *)((&DAT_180058e80)[lVar15] + 0x38 + uVar11 * 0x48)) {
      local_80 = 0;
      local_78 = 0;
      BVar8 = WriteFile(*(HANDLE *)((&DAT_180058e80)[lVar15] + 0x28 + uVar11 * 0x48),param_2,param_3
                        ,(LPDWORD)((longlong)&local_80 + 4),(LPOVERLAPPED)0x0);
      DVar13 = local_78;
      uVar4 = local_80;
      if (BVar8 == 0) {
        DVar13 = GetLastError();
        local_80 = CONCAT44(local_80._4_4_,DVar13);
        DVar13 = local_78;
        uVar4 = local_80;
      }
      goto LAB_180016b24;
    }
    uVar14 = (uint)param_2;
    if (cVar2 == '\0') {
      pDVar12 = (DWORD *)write_text_ansi_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14);
    }
    else if (cVar2 == '\x01') {
      pDVar12 = (DWORD *)write_text_utf8_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14);
    }
    else {
      DVar13 = 0;
      uVar4 = local_70;
      if (cVar2 != '\x02') goto LAB_180016b24;
      pDVar12 = (DWORD *)write_text_utf16le_nolock((int)&local_80,(char *)(ulonglong)param_1,uVar14)
      ;
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_18000f8c0(param_4);
    }
    if (((*(longlong *)(param_4[3] + 0x138) == 0) &&
        (*(char *)((&DAT_180058e80)[lVar15] + 0x39 + uVar11 * 0x48) == '\0')) ||
       (BVar8 = GetConsoleMode(*(HANDLE *)((&DAT_180058e80)[lVar15] + 0x28 + uVar11 * 0x48),local_60
                              ), BVar8 == 0)) goto LAB_180016a83;
    if (cVar2 != '\0') {
      if ((cVar2 == '\x01') || (uVar4 = local_70, cVar2 == '\x02')) {
        pwVar1 = (wchar_t *)((longlong)param_2 + (ulonglong)param_3);
        local_80 = 0;
        lVar15 = local_58;
        uVar4 = local_80;
        if (param_2 < pwVar1) {
          local_80._4_4_ = 0;
          pwVar16 = param_2;
          iVar10 = local_80._4_4_;
          do {
            _WCh = *pwVar16;
            wVar6 = _putwch_nolock(_WCh);
            if (wVar6 != _WCh) {
LAB_180016a47:
              DVar9 = GetLastError();
              local_80 = CONCAT44(local_80._4_4_,DVar9);
              lVar15 = local_58;
              uVar4 = local_80;
              break;
            }
            local_80 = CONCAT44(iVar10 + 2,(DWORD)local_80);
            iVar3 = iVar10 + 2;
            if (_WCh == L'\n') {
              wVar7 = _putwch_nolock(L'\r');
              if (wVar7 != 0xd) goto LAB_180016a47;
              local_80 = CONCAT44(iVar10 + 3,(DWORD)local_80);
              DVar13 = DVar13 + 1;
              iVar3 = iVar10 + 3;
            }
            iVar10 = iVar3;
            pwVar16 = pwVar16 + 1;
            lVar15 = local_58;
            uVar4 = local_80;
          } while (pwVar16 < pwVar1);
        }
      }
      goto LAB_180016b24;
    }
    pDVar12 = FUN_180015f78((DWORD *)&local_80,param_1,(byte *)param_2,(ulonglong)param_3,param_4);
  }
  DVar13 = pDVar12[2];
  uVar4 = *(undefined8 *)pDVar12;
LAB_180016b24:
  local_70 = uVar4;
  iVar10 = (int)((ulonglong)local_70 >> 0x20);
  if (iVar10 != 0) {
    return iVar10 - DVar13;
  }
  if ((int)local_70 != 0) {
    if ((int)local_70 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_180010124((int)local_70,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_180058e80)[lVar15] + 0x38 + uVar11 * 0x48) & 0x40) != 0) &&
     ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(undefined4 *)((longlong)param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 6) = 1;
  *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 7) = 1;
  return -1;
}




void FUN_180016ba8(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1800595b0,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = __acrt_errno_from_os_error(DVar2);
    p_Var4 = FUN_180010168();
    *(undefined4 *)p_Var4 = uVar3;
  }
  return;
}




ulonglong FUN_180016be4(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_18001c618(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_180058e80)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_180016d20(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_18001c640(*param_4);
  return uVar3;
}




ulonglong FUN_180016c5c(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_180059280)) &&
       ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_180016be4(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  return 0xffffffff;
}




undefined8 FUN_180016d20(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_18001c724(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_180058e80 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_180058e80 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_18001c724(2);
      lVar4 = FUN_18001c724(1);
      if (lVar4 == lVar3) goto LAB_180016d42;
    }
    hObject = (HANDLE)FUN_18001c724(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_180016da0;
    }
  }
LAB_180016d42:
  DVar2 = 0;
LAB_180016da0:
  FUN_18001c668(param_1);
  *(undefined1 *)
   ((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_180010124(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}




undefined4 FUN_180016df0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return uVar1;
}




/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_180016ba8((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}




/* Library Function - Single Match
    iswctype
   
   Library: Visual Studio 2019 Release */

int __cdecl iswctype(wint_t _C,wctype_t _Type)

{
  uint uVar1;
  BOOL BVar2;
  WORD local_res8 [4];
  WCHAR local_res18 [8];
  
  if (_C == 0xffff) {
LAB_180016eaf:
    uVar1 = 0;
  }
  else {
    if (_C < 0x100) {
      local_res8[0] = *(WORD *)(PTR_DAT_1800341d8 + (ulonglong)_C * 2);
    }
    else {
      local_res8[0] = 0;
      local_res18[0] = _C;
      BVar2 = GetStringTypeW(1,local_res18,1,local_res8);
      if (BVar2 == 0) goto LAB_180016eaf;
    }
    uVar1 = (uint)(local_res8[0] & _Type);
  }
  return uVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _isctype_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale)

{
  BOOL BVar1;
  int iVar2;
  undefined1 auStackY_88 [32];
  CHAR local_48;
  CHAR local_47;
  undefined1 local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  ushort local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (_C + 1U < 0x101) {
    local_20[0] = *(ushort *)(*local_38[0] + (longlong)_C * 2);
  }
  else {
    iVar2 = 1;
    if (*(short *)(*local_38[0] + (ulonglong)(_C >> 8 & 0xff) * 2) < 0) {
      iVar2 = 2;
      local_46 = 0;
      local_48 = (CHAR)((uint)_C >> 8);
      local_47 = (CHAR)_C;
    }
    else {
      local_47 = '\0';
      local_48 = (CHAR)_C;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    BVar1 = FUN_180019e00((__crt_locale_pointers *)local_38,1,&local_48,iVar2,local_20,
                          *(UINT *)((longlong)local_38[0] + 0xc),1);
    if (BVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  return (uint)local_20[0] & _Type;
}




ulonglong FUN_180016fc4(undefined8 *param_1)

{
  byte bVar1;
  LPWSTR pWVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  __acrt_ptd *p_Var6;
  undefined *puVar7;
  
  if (param_1 == (undefined8 *)0x0) {
    p_Var6 = FUN_180010168();
    *(undefined4 *)p_Var6 = 0x16;
    FUN_180010fac();
  }
  else if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)param_1 + 0x14) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)param_1 + 0x14) >> 1 & 1) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 1;
      UNLOCK();
      if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_1);
      }
      pWVar2 = (LPWSTR)param_1[1];
      uVar5 = *(uint *)(param_1 + 4);
      *param_1 = pWVar2;
      uVar3 = FUN_18001353c((longlong)param_1);
      iVar4 = FUN_180018798(uVar3,pWVar2,uVar5);
      *(int *)(param_1 + 2) = iVar4;
      if (1 < iVar4 + 1U) {
        if ((*(uint *)((longlong)param_1 + 0x14) & 6) == 0) {
          iVar4 = FUN_18001353c((longlong)param_1);
          if ((iVar4 == -1) || (iVar4 = FUN_18001353c((longlong)param_1), iVar4 == -2)) {
            puVar7 = &DAT_180034410;
          }
          else {
            iVar4 = FUN_18001353c((longlong)param_1);
            uVar5 = FUN_18001353c((longlong)param_1);
            puVar7 = (undefined *)
                     ((ulonglong)(uVar5 & 0x3f) * 0x48 + (&DAT_180058e80)[(longlong)iVar4 >> 6]);
          }
          if ((puVar7[0x38] & 0x82) == 0x82) {
            LOCK();
            *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x20;
            UNLOCK();
          }
        }
        if (((*(int *)(param_1 + 4) == 0x200) &&
            ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(undefined4 *)(param_1 + 4) = 0x1000;
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (ulonglong)bVar1;
      }
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) =
           *(uint *)((longlong)param_1 + 0x14) | (-(uint)(iVar4 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)(param_1 + 2) = 0;
    }
    else {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}




/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800595b0,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18001f410();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800124ec(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_180010168();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_48fc4a32460bb0512d3b13f8499328be>,class <lambda_6c3dac0a4f3f9cefca9bb494422f9b77> &
   __ptr64,class <lambda_0a2f2c9f9a56eb2b08bfa6ff61d331c5> >(class
   <lambda_48fc4a32460bb0512d3b13f8499328be> && __ptr64,class
   <lambda_6c3dac0a4f3f9cefca9bb494422f9b77> & __ptr64,class
   <lambda_0a2f2c9f9a56eb2b08bfa6ff61d331c5> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_bd00b5aa228bd7e7e5b2b5db5fd2933b>,class <lambda_777d11615145f89ee95b9466d285deeb> &
   __ptr64,class <lambda_6e5e48fbd24f9f8f81b203eb3d877683> >(class
   <lambda_bd00b5aa228bd7e7e5b2b5db5fd2933b> && __ptr64,class
   <lambda_777d11615145f89ee95b9466d285deeb> & __ptr64,class
   <lambda_6e5e48fbd24f9f8f81b203eb3d877683> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL operator()<>(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  byte bVar1;
  BOOL BVar2;
  
  __acrt_lock(*param_2);
  bVar1 = 0x40 - ((byte)DAT_180034040 & 0x3f) & 0x3f;
  DAT_180059438 =
       (*(ulonglong *)*param_3 >> bVar1 | *(ulonglong *)*param_3 << 0x40 - bVar1) ^ DAT_180034040;
  BVar2 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1800171a4,1);
  DAT_180059438 = DAT_180034040;
  __acrt_unlock(*param_4);
  return BVar2;
}




FARPROC FUN_180017258(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *lpLibFileName;
  DWORD DVar3;
  int iVar4;
  HMODULE hLibModule;
  byte bVar5;
  FARPROC pFVar6;
  
  bVar5 = (byte)DAT_180034040 & 0x3f;
  pFVar6 = (FARPROC)(((&DAT_180059340)[param_1] ^ DAT_180034040) >> bVar5 |
                    ((&DAT_180059340)[param_1] ^ DAT_180034040) << 0x40 - bVar5);
  if (pFVar6 != (FARPROC)0xffffffffffffffff) {
    if (pFVar6 != (FARPROC)0x0) {
      return pFVar6;
    }
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      uVar2 = *param_3;
      hLibModule = (HMODULE)(&DAT_180059290)[uVar2];
      if (hLibModule == (HMODULE)0x0) {
        lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_datetime_l1_1_1_180028e40)[uVar2];
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
        if ((hLibModule != (HMODULE)0x0) ||
           ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
              (iVar4 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar4 != 0)) &&
             (iVar4 = wcsncmp(lpLibFileName,L"ext-ms-",7), iVar4 != 0)) &&
            (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)))
           ) {
          LOCK();
          lVar1 = (&DAT_180059290)[uVar2];
          (&DAT_180059290)[uVar2] = hLibModule;
          UNLOCK();
          if (lVar1 != 0) {
            FreeLibrary(hLibModule);
          }
          goto LAB_1800173da;
        }
        LOCK();
        (&DAT_180059290)[uVar2] = 0xffffffffffffffff;
        UNLOCK();
      }
      else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_1800173da:
        pFVar6 = GetProcAddress(hLibModule,param_2);
        if (pFVar6 != (FARPROC)0x0) {
          bVar5 = 0x40 - ((byte)DAT_180034040 & 0x3f) & 0x3f;
          LOCK();
          (&DAT_180059340)[param_1] =
               ((ulonglong)pFVar6 >> bVar5 | (longlong)pFVar6 << 0x40 - bVar5) ^ DAT_180034040;
          UNLOCK();
          return pFVar6;
        }
        break;
      }
    }
    bVar5 = 0x40 - ((byte)DAT_180034040 & 0x3f) & 0x3f;
    LOCK();
    (&DAT_180059340)[param_1] = (0xffffffffffffffffU >> bVar5 | -1L << 0x40 - bVar5) ^ DAT_180034040
    ;
    UNLOCK();
  }
  return (FARPROC)0x0;
}




/* WARNING: Switch with 1 destination removed at 0x00018001745a */
/* WARNING: Switch with 1 destination removed at 0x000180021790 */

INT_PTR FUN_180017414(undefined8 param_1)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
  UNRECOVERED_JUMPTABLE =
       FUN_180017258(0x19,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_1800294d4,
                     (uint *)"AppPolicyGetProcessTerminationMethod");
  if (UNRECOVERED_JUMPTABLE == (FARPROC)0x0) {
    return 0xc0000225;
  }
                    /* WARNING: Could not recover jumptable at 0x000180021770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*UNRECOVERED_JUMPTABLE)(0xfffffffffffffffa,param_1);
  return IVar1;
}




/* WARNING: Switch with 1 destination removed at 0x00018001749f */
/* WARNING: Switch with 1 destination removed at 0x000180021790 */

INT_PTR FUN_18001746c(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
  UNRECOVERED_JUMPTABLE =
       FUN_180017258(0,"AreFileApisANSI",(uint *)&DAT_180029398,(uint *)&DAT_18002939c);
  if (UNRECOVERED_JUMPTABLE == (FARPROC)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000180021770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*UNRECOVERED_JUMPTABLE)();
  return IVar1;
}




void FUN_1800174b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FARPROC pFVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  int local_24 [3];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  pFVar1 = FUN_180017258(2,"EnumSystemLocalesEx",(uint *)&DAT_1800293c8,
                         (uint *)"EnumSystemLocalesEx");
  if (pFVar1 == (FARPROC)0x0) {
    local_18[0] = &local_res8;
    local_24[0] = 4;
    local_24[1] = 4;
    operator()<>(local_28,local_24 + 1,local_18,local_24);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)(local_res8,param_2,param_3,param_4);
  }
  return;
}




DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180017550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}




BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180017558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}




PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180017560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}




BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000180017568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}




void FUN_180017570(ushort *param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_180017258(8,"GetLocaleInfoEx",(uint *)&DAT_180029400,(uint *)"GetLocaleInfoEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_1800178b0(param_1,0);
    GetLocaleInfoW(Locale,param_2,param_3,param_4);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,param_2,param_3,param_4);
  }
  return;
}




void FUN_180017600(wchar_t *param_1,int param_2)

{
  LCID LVar1;
  FARPROC pFVar2;
  
  pFVar2 = FUN_180017258(0xc,"GetUserDefaultLocaleName",(uint *)&DAT_180029430,
                         (uint *)"GetUserDefaultLocaleName");
  if (pFVar2 == (FARPROC)0x0) {
    LVar1 = GetUserDefaultLCID();
    FUN_180017740(LVar1,param_1,param_2,0);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,param_2);
  }
  return;
}




void FUN_18001766c(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180017258(0xf,"InitializeCriticalSectionEx",(uint *)&DAT_180029458,
                         (uint *)&DAT_180029460);
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,param_2,param_3);
  }
  return;
}




/* WARNING: Switch with 1 destination removed at 0x00018001771b */
/* WARNING: Switch with 1 destination removed at 0x000180021790 */

void FUN_1800176dc(ushort *param_1)

{
  LCID Locale;
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE =
       FUN_180017258(0x10,"IsValidLocaleName",(uint *)&DAT_180029460,(uint *)"IsValidLocaleName");
  if (UNRECOVERED_JUMPTABLE == (FARPROC)0x0) {
    Locale = FUN_1800178b0(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000180017738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IsValidLocale(Locale,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180021770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}




void FUN_180017740(uint param_1,wchar_t *param_2,int param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180017258(0x12,"LCIDToLocaleName",(uint *)&DAT_180029498,(uint *)"LCIDToLocaleName");
  if (pFVar1 == (FARPROC)0x0) {
    FUN_18001f418(param_1,param_2,param_3);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,param_2,param_3,param_4);
  }
  return;
}




void FUN_1800177c4(ushort *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_180017258(0x11,"LCMapStringEx",(uint *)&DAT_180029480,(uint *)"LCMapStringEx");
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_1800178b0(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}




void FUN_1800178b0(ushort *param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180017258(0x13,"LocaleNameToLCID",(uint *)&DAT_1800294b8,(uint *)"LocaleNameToLCID");
  if (pFVar1 == (FARPROC)0x0) {
    FUN_18001f500(param_1);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,param_2);
  }
  return;
}




bool FUN_180017910(void)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180017258(1,"CompareStringEx",(uint *)&DAT_1800293b0,(uint *)"CompareStringEx");
  return pFVar1 != (FARPROC)0x0;
}




/* Library Function - Single Match
    __acrt_eagerly_load_locale_apis
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_eagerly_load_locale_apis(void)

{
  FUN_180017258(0,"AreFileApisANSI",(uint *)&DAT_180029398,(uint *)&DAT_18002939c);
  FUN_180017258(1,"CompareStringEx",(uint *)&DAT_1800293b0,(uint *)"CompareStringEx");
  FUN_180017258(2,"EnumSystemLocalesEx",(uint *)&DAT_1800293c8,(uint *)"EnumSystemLocalesEx");
  FUN_180017258(4,"GetDateFormatEx",(uint *)&DAT_1800293e8,(uint *)"GetDateFormatEx");
  FUN_180017258(8,"GetLocaleInfoEx",(uint *)&DAT_180029400,(uint *)"GetLocaleInfoEx");
  FUN_180017258(0xb,"GetTimeFormatEx",(uint *)&DAT_180029418,(uint *)"GetTimeFormatEx");
  FUN_180017258(0xc,"GetUserDefaultLocaleName",(uint *)&DAT_180029430,
                (uint *)"GetUserDefaultLocaleName");
  FUN_180017258(0x10,"IsValidLocaleName",(uint *)&DAT_180029460,(uint *)"IsValidLocaleName");
  FUN_180017258(0x11,"LCMapStringEx",(uint *)&DAT_180029480,(uint *)"LCMapStringEx");
  FUN_180017258(0x12,"LCIDToLocaleName",(uint *)&DAT_180029498,(uint *)"LCIDToLocaleName");
  FUN_180017258(0x13,"LocaleNameToLCID",(uint *)&DAT_1800294b8,(uint *)"LocaleNameToLCID");
  return;
}




undefined8 FUN_180017a9c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_180034040;
  puVar3 = &DAT_180059340;
  for (lVar2 = 0x1f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  }
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_180059290;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_180059338;
    } while (puVar1 != (undefined8 *)&DAT_180059338);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




int FUN_180017b04(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_180058a80; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_180058a88 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_18000f088(*(int **)(DAT_180058a88 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_180058a88 + lVar4 * 8) + 0x30));
      FUN_180016ba8(*(LPVOID *)(DAT_180058a88 + lVar4 * 8));
      *(undefined8 *)(DAT_180058a88 + lVar4 * 8) = 0;
    }
  }
  __acrt_unlock(8);
  return local_18;
}




ulonglong FUN_180017bb8(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  puVar3 = FUN_18000fbb0(2);
  if (param_1 == puVar3) {
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  else {
    puVar3 = FUN_18000fbb0(1);
    if (param_1 == puVar3) {
      uVar2 = FUN_18001353c((longlong)param_1);
      bVar1 = FUN_18001f184(uVar2);
      uVar4 = CONCAT71(extraout_var,(int)CONCAT71(extraout_var,bVar1) != 0);
    }
    else {
      uVar4 = (ulonglong)puVar3 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180017c04(longlong *param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_180017bb8((undefined *)param_1);
  if ((char)plVar1 != '\0') {
    plVar1 = (longlong *)FUN_18000fbb0(1);
    if (param_1 == plVar1) {
      plVar3 = &DAT_180059440;
    }
    else {
      plVar1 = (longlong *)FUN_18000fbb0(2);
      if (param_1 != plVar1) goto LAB_180017cbe;
      plVar3 = &DAT_180059448;
    }
    _DAT_180058a90 = _DAT_180058a90 + 1;
    plVar1 = (longlong *)(ulonglong)*(uint *)((longlong)param_1 + 0x14);
    if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x282;
      UNLOCK();
      if (*plVar3 == 0) {
        pvVar2 = _malloc_base(0x1000);
        *plVar3 = (longlong)pvVar2;
        plVar1 = (longlong *)FUN_180016ba8((LPVOID)0x0);
      }
      if (*plVar3 == 0) {
        *(undefined4 *)(param_1 + 2) = 2;
        param_1[1] = (longlong)param_1 + 0x1c;
        *param_1 = (longlong)param_1 + 0x1c;
        *(undefined4 *)(param_1 + 4) = 2;
      }
      else {
        param_1[1] = *plVar3;
        plVar1 = (longlong *)*plVar3;
        *param_1 = (longlong)plVar1;
        *(undefined4 *)(param_1 + 2) = 0x1000;
        *(undefined4 *)(param_1 + 4) = 0x1000;
      }
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
  }
LAB_180017cbe:
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}




void FUN_180017ccc(char param_1,int *param_2,longlong *param_3)

{
  if ((param_1 != '\0') && (((uint)param_2[5] >> 9 & 1) != 0)) {
    FUN_18000ed94(param_2,param_3);
    LOCK();
    param_2[5] = param_2[5] & 0xfffffd7f;
    UNLOCK();
    param_2[8] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  return;
}




LARGE_INTEGER FUN_180017d0c(longlong *param_1,longlong *param_2)

{
  LARGE_INTEGER LVar1;
  
  if (param_1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    LVar1.QuadPart = -1;
  }
  else {
    FUN_18000fc68((longlong)param_1);
    LVar1 = FUN_180017d78(param_1,param_2);
    FUN_18000fc74((longlong)param_1);
  }
  return (LARGE_INTEGER)LVar1.QuadPart;
}




LARGE_INTEGER FUN_180017d78(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    uVar2 = FUN_18001353c((longlong)param_1);
    if ((int)param_1[2] < 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    LVar3.QuadPart = thunk_FUN_180018d08(uVar2,(LARGE_INTEGER)0x0,1,param_2);
    if (-1 < LVar3.QuadPart) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) {
        return (LARGE_INTEGER)(LVar3.QuadPart - (int)param_1[2]);
      }
      uVar6 = *param_1 - param_1[1];
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_180058e80)[lVar5] + 0x39 + uVar4 * 0x48);
      if ((*(uint *)((longlong)param_1 + 0x14) & 3) == 0) {
        if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 6) = 1;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
          return (LARGE_INTEGER)-1;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_180058e80)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          LVar3 = FUN_180018024(param_1,LVar3,param_2);
          return (LARGE_INTEGER)LVar3.QuadPart;
        }
        if (*(char *)((&DAT_180058e80)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_1800181a8((short *)param_1[1],(short *)*param_1,cVar1);
          uVar6 = uVar6 + lVar5;
        }
      }
      if (LVar3.QuadPart == 0) {
        return (LARGE_INTEGER)uVar6;
      }
      if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
        if (cVar1 == '\x01') {
          uVar6 = uVar6 >> 1;
        }
        return (LARGE_INTEGER)(uVar6 + LVar3.QuadPart);
      }
      LVar3 = FUN_180017ec8(param_1,LVar3,uVar6,param_2);
      return (LARGE_INTEGER)LVar3.QuadPart;
    }
  }
  return (LARGE_INTEGER)((LARGE_INTEGER)0xffffffffffffffff).QuadPart;
}




LARGE_INTEGER
FUN_180017ec8(longlong *param_1,LARGE_INTEGER param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar2 = FUN_18001353c((longlong)param_1);
  uVar4 = (ulonglong)(uVar2 & 0x3f);
  cVar1 = *(char *)((&DAT_180058e80)[(longlong)(int)uVar2 >> 6] + 0x39 + uVar4 * 0x48);
  lVar6 = (ulonglong)(cVar1 == '\x01') + 1;
  if ((int)param_1[2] != 0) {
    lVar5 = ((longlong)(int)param_1[2] - param_1[1]) + *param_1;
    if (*(char *)((&DAT_180058e80)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) < '\0') {
      lVar3 = thunk_FUN_180018d08(uVar2,(LARGE_INTEGER)0x0,2,param_4);
      if (lVar3 == param_2.QuadPart) {
        lVar3 = FUN_1800181a8((short *)param_1[1],(short *)(param_1[1] + lVar5),cVar1);
        bVar7 = (*(uint *)((longlong)param_1 + 0x14) >> 5 & 1) == 0;
        lVar5 = lVar3 + lVar5;
      }
      else {
        lVar3 = thunk_FUN_180018d08(uVar2,param_2,0,param_4);
        if (lVar3 == -1) {
          return (LARGE_INTEGER)-1;
        }
        lVar3 = 0x200;
        if (((0x200 < lVar5) || ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) == 0)) ||
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) != 0)) {
          lVar3 = (longlong)(int)param_1[4];
        }
        bVar7 = (*(byte *)((&DAT_180058e80)[(longlong)(int)uVar2 >> 6] + 0x38 + uVar4 * 0x48) & 4)
                == 0;
        lVar5 = lVar3;
      }
      if (!bVar7) {
        lVar5 = lVar5 + (ulonglong)((byte)(cVar1 - 1U) < 2) + 1;
      }
    }
    param_2.QuadPart = (param_3 / lVar6 - lVar5 / lVar6) + param_2.QuadPart;
  }
  return (LARGE_INTEGER)param_2.QuadPart;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LARGE_INTEGER FUN_180018024(longlong *param_1,LARGE_INTEGER param_2,longlong *param_3)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 auStackY_1088 [32];
  uint local_1058 [3];
  byte abStack_1049 [4097];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18001803e;
  local_48 = DAT_180034040 ^ (ulonglong)auStackY_1088;
  uVar1 = FUN_18001353c((longlong)param_1);
  lVar8 = 0;
  if ((int)param_1[2] != 0) {
    uVar6 = (ulonglong)(uVar1 & 0x3f);
    lVar3 = (*param_1 - param_1[1]) / 2;
    lVar4 = thunk_FUN_180018d08(uVar1,*(LARGE_INTEGER *)
                                       ((&DAT_180058e80)[(longlong)(int)uVar1 >> 6] + 0x30 +
                                       uVar6 * 0x48),0,param_3);
    if ((((lVar4 == *(longlong *)((&DAT_180058e80)[(longlong)(int)uVar1 >> 6] + 0x30 + uVar6 * 0x48)
          ) && (BVar2 = ReadFile(*(HANDLE *)
                                  ((&DAT_180058e80)[(longlong)(int)uVar1 >> 6] + 0x28 + uVar6 * 0x48
                                  ),abStack_1049 + 1,0x1000,local_1058,(LPOVERLAPPED)0x0),
               BVar2 != 0)) && (lVar5 = thunk_FUN_180018d08(uVar1,param_2,0,param_3), -1 < lVar5))
       && (uVar6 = (ulonglong)local_1058[0], lVar3 <= (longlong)uVar6)) {
      pbVar7 = abStack_1049 + 1;
      if (lVar3 != 0) {
        do {
          if (abStack_1049 + uVar6 + 1 <= pbVar7) break;
          if (*pbVar7 == 0xd) {
            if ((pbVar7 < abStack_1049 + uVar6) && (pbVar7[1] == 10)) {
              pbVar7 = pbVar7 + 1;
            }
          }
          else {
            pbVar7 = pbVar7 + (char)(&DAT_180034460)[*pbVar7];
          }
          lVar8 = lVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (lVar8 != lVar3);
      }
      param_2.QuadPart = (longlong)pbVar7 + (lVar4 - (longlong)(abStack_1049 + 1));
    }
    else {
      param_2.QuadPart = -1;
    }
  }
  return (LARGE_INTEGER)param_2.QuadPart;
}




longlong FUN_1800181a8(short *param_1,short *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (1 < (byte)(param_3 - 1U)) {
    lVar2 = 0;
    for (; param_1 != param_2; param_1 = (short *)((longlong)param_1 + 1)) {
      lVar1 = lVar2 + 1;
      if ((char)*param_1 != '\n') {
        lVar1 = lVar2;
      }
      lVar2 = lVar1;
    }
    return lVar2;
  }
  lVar2 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = lVar2 + 1;
    if (*param_1 != 10) {
      lVar1 = lVar2;
    }
    lVar2 = lVar1;
  }
  return lVar2 * 2;
}




LARGE_INTEGER FUN_180018200(longlong *param_1)

{
  LARGE_INTEGER LVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  LVar1 = FUN_180017d0c(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return (LARGE_INTEGER)LVar1.QuadPart;
}




LARGE_INTEGER thunk_FUN_180017d78(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    uVar2 = FUN_18001353c((longlong)param_1);
    if ((int)param_1[2] < 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    LVar3.QuadPart = thunk_FUN_180018d08(uVar2,(LARGE_INTEGER)0x0,1,param_2);
    if (-1 < LVar3.QuadPart) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) {
        return (LARGE_INTEGER)(LVar3.QuadPart - (int)param_1[2]);
      }
      uVar6 = *param_1 - param_1[1];
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_180058e80)[lVar5] + 0x39 + uVar4 * 0x48);
      if ((*(uint *)((longlong)param_1 + 0x14) & 3) == 0) {
        if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 6) = 1;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
          return (LARGE_INTEGER)-1;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_180058e80)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          LVar3 = FUN_180018024(param_1,LVar3,param_2);
          return (LARGE_INTEGER)LVar3.QuadPart;
        }
        if (*(char *)((&DAT_180058e80)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_1800181a8((short *)param_1[1],(short *)*param_1,cVar1);
          uVar6 = uVar6 + lVar5;
        }
      }
      if (LVar3.QuadPart == 0) {
        return (LARGE_INTEGER)uVar6;
      }
      if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
        if (cVar1 == '\x01') {
          uVar6 = uVar6 >> 1;
        }
        return (LARGE_INTEGER)(uVar6 + LVar3.QuadPart);
      }
      LVar3 = FUN_180017ec8(param_1,LVar3,uVar6,param_2);
      return (LARGE_INTEGER)LVar3.QuadPart;
    }
  }
  return (LARGE_INTEGER)((LARGE_INTEGER)0xffffffffffffffff).QuadPart;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  _DAT_180058a90 = _DAT_180058a90 + 1;
  uVar2 = 0x1000;
  pvVar1 = _calloc_base(0x1000,1);
  param_1[1] = pvVar1;
  FUN_180016ba8((LPVOID)0x0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}




int FUN_180018310(uint param_1,short *param_2,longlong param_3)

{
  short *psVar1;
  short *psVar2;
  byte *pbVar3;
  byte bVar4;
  HANDLE hFile;
  BOOL BVar5;
  ulonglong uVar6;
  longlong lVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];
  
  uVar6 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  lVar12 = 0;
  lVar7 = (&DAT_180058e80)[lVar11];
  hFile = *(HANDLE *)(lVar7 + 0x28 + uVar6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar3 = (byte *)(lVar7 + 0x38 + uVar6 * 0x48);
    *pbVar3 = *pbVar3 & 0xfb;
  }
  else {
    pbVar3 = (byte *)(lVar7 + 0x38 + uVar6 * 0x48);
    *pbVar3 = *pbVar3 | 4;
  }
  psVar2 = param_2 + param_3;
  psVar10 = param_2;
  if (param_2 < psVar2) {
    psVar9 = param_2;
    do {
      sVar8 = *psVar9;
      if (sVar8 == 0x1a) {
        bVar4 = *(byte *)((&DAT_180058e80)[lVar11] + 0x38 + uVar6 * 0x48);
        sVar8 = 0x1a;
        if ((bVar4 & 0x40) != 0) {
LAB_18001848b:
          *psVar10 = sVar8;
          goto LAB_18001848e;
        }
        *(byte *)((&DAT_180058e80)[lVar11] + 0x38 + uVar6 * 0x48) = bVar4 | 2;
        break;
      }
      psVar1 = psVar9 + 1;
      if (sVar8 == 0xd) {
        if (psVar2 <= psVar1) {
          BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
          if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_180018486:
            sVar8 = 0xd;
            goto LAB_18001848b;
          }
          if ((*(byte *)((&DAT_180058e80)[lVar11] + 0x38 + uVar6 * 0x48) & 0x48) == 0) {
            if ((local_res8[0] != 10) || (psVar10 != param_2)) {
              FUN_180018f78(param_1,(LARGE_INTEGER)0xfffffffffffffffe,1);
              if (local_res8[0] != 10) goto LAB_180018486;
              break;
            }
          }
          else if (local_res8[0] != 10) {
            local_res10[0] = local_res8[0];
            *psVar10 = 0xd;
            do {
              *(undefined1 *)((&DAT_180058e80)[lVar11] + uVar6 * 0x48 + 0x3a + lVar12) =
                   *(undefined1 *)((longlong)local_res10 + lVar12);
              lVar12 = lVar12 + 1;
            } while (lVar12 < 2);
            *(undefined1 *)((&DAT_180058e80)[lVar11] + 0x3c + uVar6 * 0x48) = 10;
LAB_18001848e:
            psVar10 = psVar10 + 1;
            break;
          }
          *psVar10 = 10;
          goto LAB_18001848e;
        }
        lVar7 = 2;
        if (*psVar1 == 10) {
          lVar7 = 4;
        }
        psVar9 = (short *)((longlong)psVar9 + lVar7);
        sVar8 = 10;
        if (*psVar1 != 10) {
          sVar8 = 0xd;
        }
        *psVar10 = sVar8;
      }
      else {
        *psVar10 = sVar8;
        psVar9 = psVar1;
      }
      psVar10 = psVar10 + 1;
    } while (psVar9 < psVar2);
  }
  return (int)((longlong)psVar10 - (longlong)param_2 >> 1) * 2;
}




int FUN_1800184d0(uint param_1,byte *param_2,longlong param_3,LPWSTR param_4,int param_5)

{
  byte bVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong uVar4;
  byte *pbVar5;
  __acrt_ptd *p_Var6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  char local_res8 [8];
  DWORD local_res10 [2];
  
  uVar4 = (ulonglong)(param_1 & 0x3f);
  lVar14 = (longlong)(int)param_1 >> 6;
  lVar7 = (&DAT_180058e80)[lVar14];
  hFile = *(HANDLE *)(lVar7 + 0x28 + uVar4 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar12 = (byte *)(lVar7 + 0x38 + uVar4 * 0x48);
    *pbVar12 = *pbVar12 & 0xfb;
  }
  else {
    pbVar12 = (byte *)(lVar7 + 0x38 + uVar4 * 0x48);
    *pbVar12 = *pbVar12 | 4;
  }
  pbVar12 = param_2;
  pbVar13 = param_2;
  do {
    if (param_2 + param_3 <= pbVar13) {
LAB_18001863b:
      iVar10 = (int)pbVar12 - (int)param_2;
      if (iVar10 == 0) {
        return 0;
      }
      lVar7 = (&DAT_180058e80)[lVar14];
      if (*(char *)(lVar7 + 0x39 + uVar4 * 0x48) != '\0') {
        pbVar12 = param_2 + iVar10;
        if ((char)pbVar12[-1] < '\0') {
          uVar9 = 1;
          for (pbVar12 = pbVar12 + -1;
              ((uVar8 = (uint)uVar9, (&DAT_180034460)[*pbVar12] == '\0' && (uVar8 < 5)) &&
              (param_2 <= pbVar12)); pbVar12 = pbVar12 + -1) {
            uVar9 = (ulonglong)(uVar8 + 1);
          }
          if ((&DAT_180034460)[*pbVar12] == '\0') {
            p_Var6 = FUN_180010168();
            *(undefined4 *)p_Var6 = 0x2a;
            return -1;
          }
          if ((int)(char)(&DAT_180034460)[*pbVar12] + 1U == uVar8) {
            pbVar12 = pbVar12 + uVar9;
          }
          else if ((*(byte *)(lVar7 + 0x38 + uVar4 * 0x48) & 0x48) == 0) {
            FUN_180018f78(param_1,(LARGE_INTEGER)(longlong)(int)-uVar8,1);
          }
          else {
            pbVar13 = pbVar12 + 1;
            *(byte *)(lVar7 + 0x3a + uVar4 * 0x48) = *pbVar12;
            if (1 < uVar8) {
              bVar1 = *pbVar13;
              pbVar13 = pbVar12 + 2;
              *(byte *)((&DAT_180058e80)[lVar14] + 0x3b + uVar4 * 0x48) = bVar1;
            }
            if (uVar8 == 3) {
              bVar1 = *pbVar13;
              pbVar13 = pbVar13 + 1;
              *(byte *)((&DAT_180058e80)[lVar14] + 0x3c + uVar4 * 0x48) = bVar1;
            }
            pbVar12 = pbVar13 + -uVar9;
          }
        }
        iVar11 = (int)pbVar12 - (int)param_2;
        iVar10 = FUN_18001907c(0xfde9,0,(LPCSTR)param_2,iVar11,param_4,param_5);
        if (iVar10 == 0) {
          DVar3 = GetLastError();
          FUN_1800100dc(DVar3);
          return -1;
        }
        *(byte *)((&DAT_180058e80)[lVar14] + 0x3d + uVar4 * 0x48) =
             -(iVar10 != iVar11) & 2U |
             *(byte *)((&DAT_180058e80)[lVar14] + 0x3d + uVar4 * 0x48) & 0xfd;
        return iVar10 * 2;
      }
      return iVar10;
    }
    bVar1 = *pbVar13;
    if (bVar1 == 0x1a) {
      bVar1 = *(byte *)((&DAT_180058e80)[lVar14] + 0x38 + uVar4 * 0x48);
      if ((bVar1 & 0x40) != 0) {
        *pbVar12 = 0x1a;
        goto LAB_180018638;
      }
      *(byte *)((&DAT_180058e80)[lVar14] + 0x38 + uVar4 * 0x48) = bVar1 | 2;
      goto LAB_18001863b;
    }
    pbVar5 = pbVar13 + 1;
    if (bVar1 == 0xd) {
      if (param_2 + param_3 <= pbVar5) {
        BVar2 = ReadFile(hFile,local_res8,1,local_res10,(LPOVERLAPPED)0x0);
        if ((BVar2 == 0) || (local_res10[0] == 0)) {
          *pbVar12 = 0xd;
        }
        else if ((*(byte *)((&DAT_180058e80)[lVar14] + 0x38 + uVar4 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] == '\n') && (pbVar12 == param_2)) goto LAB_1800185ce;
          FUN_180018f78(param_1,(LARGE_INTEGER)0xffffffffffffffff,1);
          if (local_res8[0] == '\n') goto LAB_18001863b;
          *pbVar12 = 0xd;
        }
        else if (local_res8[0] == '\n') {
LAB_1800185ce:
          *pbVar12 = 10;
        }
        else {
          *pbVar12 = 0xd;
          *(char *)((&DAT_180058e80)[lVar14] + 0x3a + uVar4 * 0x48) = local_res8[0];
        }
LAB_180018638:
        pbVar12 = pbVar12 + 1;
        goto LAB_18001863b;
      }
      if (*pbVar5 == 10) {
        *pbVar12 = 10;
        lVar7 = 2;
      }
      else {
        *pbVar12 = 0xd;
        lVar7 = 1;
      }
      pbVar5 = pbVar13 + lVar7;
    }
    else {
      *pbVar12 = bVar1;
    }
    pbVar12 = pbVar12 + 1;
    pbVar13 = pbVar5;
  } while( true );
}




int FUN_180018798(uint param_1,LPWSTR param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  
  if (param_1 == 0xfffffffe) {
    p_Var3 = FUN_180010148();
    *(undefined4 *)p_Var3 = 0;
    p_Var3 = FUN_180010168();
    *(undefined4 *)p_Var3 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_180059280 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        FUN_18001c618(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          p_Var3 = FUN_180010168();
          *(undefined4 *)p_Var3 = 9;
          p_Var3 = FUN_180010148();
          *(undefined4 *)p_Var3 = 0;
        }
        else {
          iVar2 = FUN_1800188b8(param_1,param_2,param_3);
        }
        FUN_18001c640(param_1);
        return iVar2;
      }
      p_Var3 = FUN_180010148();
      *(undefined4 *)p_Var3 = 0;
      p_Var3 = FUN_180010168();
      *(undefined4 *)p_Var3 = 0x16;
      goto LAB_18001881e;
    }
  }
  p_Var3 = FUN_180010148();
  *(undefined4 *)p_Var3 = 0;
  p_Var3 = FUN_180010168();
  *(undefined4 *)p_Var3 = 9;
LAB_18001881e:
  FUN_180010fac();
  return -1;
}




int FUN_1800188b8(uint param_1,LPWSTR param_2,uint param_3)

{
  WCHAR *pWVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  BOOL BVar6;
  DWORD DVar7;
  __acrt_ptd *p_Var8;
  ulonglong uVar9;
  LPWSTR pWVar10;
  undefined7 extraout_var;
  LPWSTR pWVar11;
  WCHAR WVar12;
  uint uVar13;
  uint nNumberOfBytesToRead;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  LPWSTR lpBuffer;
  uint local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  LPWSTR local_48;
  
  if (param_1 == 0xfffffffe) {
    p_Var8 = FUN_180010148();
    *(undefined4 *)p_Var8 = 0;
    p_Var8 = FUN_180010168();
    *(undefined4 *)p_Var8 = 9;
    return -1;
  }
  pWVar10 = (LPWSTR)0x0;
  iVar14 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_180059280)) {
    uVar9 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar16 = (&DAT_180058e80)[local_58];
    if ((*(byte *)(lVar16 + 0x38 + uVar9 * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((*(byte *)(lVar16 + 0x38 + uVar9 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (LPWSTR)0x0) {
          local_60 = *(HANDLE *)(lVar16 + 0x28 + uVar9 * 0x48);
          cVar3 = *(char *)(lVar16 + 0x39 + uVar9 * 0x48);
          if (cVar3 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_1800189b2;
            uVar13 = param_3 >> 1;
            if (uVar13 < 4) {
              uVar13 = 4;
            }
            pWVar10 = _malloc_base((ulonglong)uVar13);
            FUN_180016ba8((LPVOID)0x0);
            FUN_180016ba8((LPVOID)0x0);
            if (pWVar10 != (LPWSTR)0x0) {
              lVar16 = FUN_180018f78(param_1,(LARGE_INTEGER)0x0,1);
              *(longlong *)((&DAT_180058e80)[local_58] + 0x30 + uVar9 * 0x48) = lVar16;
              pWVar11 = pWVar10;
              goto LAB_180018a54;
            }
            p_Var8 = FUN_180010168();
            *(undefined4 *)p_Var8 = 0xc;
            p_Var8 = FUN_180010148();
            *(undefined4 *)p_Var8 = 8;
          }
          else {
            pWVar11 = param_2;
            uVar13 = param_3;
            if ((cVar3 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_1800189b2:
              p_Var8 = FUN_180010148();
              *(undefined4 *)p_Var8 = 0;
              p_Var8 = FUN_180010168();
              *(undefined4 *)p_Var8 = 0x16;
              FUN_180010fac();
            }
            else {
LAB_180018a54:
              lpBuffer = pWVar11;
              nNumberOfBytesToRead = uVar13;
              if (((*(byte *)((&DAT_180058e80)[local_58] + 0x38 + uVar9 * 0x48) & 0x48) != 0) &&
                 ((cVar4 = *(char *)((&DAT_180058e80)[local_58] + 0x3a + uVar9 * 0x48),
                  cVar4 != '\n' && (uVar13 != 0)))) {
                *(char *)pWVar11 = cVar4;
                nNumberOfBytesToRead = uVar13 - 1;
                lpBuffer = (LPWSTR)((longlong)pWVar11 + 1);
                iVar14 = 1;
                *(undefined1 *)((&DAT_180058e80)[local_58] + 0x3a + uVar9 * 0x48) = 10;
                if ((cVar3 != '\0') &&
                   ((cVar4 = *(char *)((&DAT_180058e80)[local_58] + 0x3b + uVar9 * 0x48),
                    cVar4 != '\n' && (nNumberOfBytesToRead != 0)))) {
                  *(char *)lpBuffer = cVar4;
                  lpBuffer = pWVar11 + 1;
                  nNumberOfBytesToRead = uVar13 - 2;
                  *(undefined1 *)((&DAT_180058e80)[local_58] + 0x3b + uVar9 * 0x48) = 10;
                  iVar14 = 2;
                  if ((cVar3 == '\x01') &&
                     ((cVar4 = *(char *)((&DAT_180058e80)[local_58] + 0x3c + uVar9 * 0x48),
                      cVar4 != '\n' && (iVar14 = 2, nNumberOfBytesToRead != 0)))) {
                    *(char *)lpBuffer = cVar4;
                    iVar14 = 3;
                    lpBuffer = (LPWSTR)((longlong)pWVar11 + 3);
                    nNumberOfBytesToRead = uVar13 - 3;
                    *(undefined1 *)((&DAT_180058e80)[local_58] + 0x3c + uVar9 * 0x48) = 10;
                  }
                }
              }
              local_48 = pWVar11;
              bVar5 = FUN_18001f184(param_1);
              if ((((int)CONCAT71(extraout_var,bVar5) == 0) ||
                  (-1 < *(char *)((&DAT_180058e80)[local_58] + 0x38 + uVar9 * 0x48))) ||
                 (BVar6 = GetConsoleMode(local_60,local_68), BVar6 == 0)) {
                local_50 = local_50 & 0xffffffffffffff00;
LAB_180018b7f:
                BVar6 = ReadFile(local_60,lpBuffer,nNumberOfBytesToRead,local_res20,
                                 (LPOVERLAPPED)0x0);
                if ((BVar6 != 0) && (local_res20[0] <= param_3)) {
LAB_180018bba:
                  iVar14 = iVar14 + local_res20[0];
                  if (*(char *)((&DAT_180058e80)[local_58] + 0x38 + uVar9 * 0x48) < '\0') {
                    if (cVar3 == '\x02') {
                      uVar15 = (ulonglong)(longlong)iVar14 >> 1;
                      if ((char)local_50 == '\0') {
                        iVar14 = FUN_180018310(param_1,local_48,uVar15);
                      }
                      else {
                        pWVar1 = local_48;
                        for (pWVar11 = local_48; pWVar11 < local_48 + uVar15;
                            pWVar11 = (LPWSTR)((longlong)pWVar11 + lVar16)) {
                          WVar12 = *pWVar11;
                          if (WVar12 == L'\x1a') {
                            pbVar2 = (byte *)((&DAT_180058e80)[local_58] + 0x38 + uVar9 * 0x48);
                            *pbVar2 = *pbVar2 | 2;
                            break;
                          }
                          if (((WVar12 == L'\r') && (pWVar11 + 1 < local_48 + uVar15)) &&
                             (pWVar11[1] == L'\n')) {
                            WVar12 = L'\n';
                            lVar16 = 4;
                          }
                          else {
                            lVar16 = 2;
                          }
                          *pWVar1 = WVar12;
                          pWVar1 = pWVar1 + 1;
                        }
                        iVar14 = (int)((longlong)pWVar1 - (longlong)local_48 >> 1) * 2;
                      }
                    }
                    else {
                      iVar14 = FUN_1800184d0(param_1,(byte *)lpBuffer,(longlong)iVar14,param_2,
                                             param_3 >> 1);
                    }
                  }
                  goto LAB_180018b5f;
                }
                DVar7 = GetLastError();
                if (DVar7 != 5) {
                  if (DVar7 == 0x6d) {
                    iVar14 = 0;
                    goto LAB_180018b5f;
                  }
                  goto LAB_180018b55;
                }
                p_Var8 = FUN_180010168();
                *(undefined4 *)p_Var8 = 9;
                p_Var8 = FUN_180010148();
                *(undefined4 *)p_Var8 = 5;
              }
              else {
                if (cVar3 != '\x02') goto LAB_180018b7f;
                BVar6 = ReadConsoleW(local_60,lpBuffer,nNumberOfBytesToRead >> 1,local_res20,
                                     (PCONSOLE_READCONSOLE_CONTROL)0x0);
                if (BVar6 != 0) {
                  local_res20[0] = local_res20[0] * 2;
                  goto LAB_180018bba;
                }
                DVar7 = GetLastError();
LAB_180018b55:
                FUN_1800100dc(DVar7);
              }
            }
          }
          iVar14 = -1;
LAB_180018b5f:
          FUN_180016ba8(pWVar10);
          return iVar14;
        }
      }
      p_Var8 = FUN_180010148();
      *(undefined4 *)p_Var8 = 0;
      p_Var8 = FUN_180010168();
      *(undefined4 *)p_Var8 = 0x16;
      goto LAB_180018ce5;
    }
  }
  p_Var8 = FUN_180010148();
  *(undefined4 *)p_Var8 = 0;
  p_Var8 = FUN_180010168();
  *(undefined4 *)p_Var8 = 9;
LAB_180018ce5:
  FUN_180010fac();
  return -1;
}




longlong FUN_180018d08(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180059280 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_18001c618(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_180018e28(param_1,param_2,param_3,(longlong)param_4);
        }
        FUN_18001c640(param_1);
        return lVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}




longlong FUN_180018e28(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_18001c724(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_180010124(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)local_18[0].s;
    }
  }
  return -1;
}




longlong FUN_180018ed4(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  lVar1 = FUN_180018d08(param_1,param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return lVar1;
}




longlong thunk_FUN_180018d08(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_180059280 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_18001c618(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          lVar2 = FUN_180018e28(param_1,param_2,param_3,(longlong)param_4);
        }
        FUN_18001c640(param_1);
        return lVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  return -1;
}




longlong FUN_180018f78(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  lVar1 = FUN_180018e28(param_1,param_2,param_3,(longlong)local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return lVar1;
}




longlong thunk_FUN_180018e28(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)FUN_18001c724(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_180010124(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)aLStack_18[0].s;
    }
  }
  return -1;
}




/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1800595b0,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_18001f410();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1800124ec(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_180010168();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




void FUN_18001907c(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_1800190c9:
          if (!bVar1) goto LAB_1800190cd;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_180019107;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_1800190c9;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_1800190cd;
LAB_180019107:
    param_2 = param_2 & 8;
    goto LAB_1800190cd;
  }
  param_2 = 0;
LAB_1800190cd:
                    /* WARNING: Could not recover jumptable at 0x0001800190cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  undefined7 extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_180016ba8(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_1800595b0,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_18001f410();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_1800124ec(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      p_Var4 = FUN_180010168();
      *(undefined4 *)p_Var4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




uint FUN_180019188(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}




uint FUN_1800191a4(void)

{
  return *(uint *)(*(longlong *)(*(longlong *)((longlong)Self + 0x60) + 0x20) + 8) >> 0x1f;
}




bool FUN_1800191bc(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_1800191a4();
  if ((char)uVar1 == '\0') {
    FUN_180017414(local_res8);
  }
  return local_res8[0] != 1;
}




undefined4
FUN_1800191ec(ulonglong *param_1,LPWSTR param_2,ulonglong param_3,byte *param_4,ulonglong param_5,
             longlong *param_6)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 == (LPWSTR)0x0) {
    if (param_3 == 0) {
LAB_18001925a:
      if (param_1 != (ulonglong *)0x0) {
        *param_1 = 0;
      }
      uVar1 = param_5;
      if (param_3 < param_5) {
        uVar1 = param_3;
      }
      if (uVar1 < 0x80000000) {
        uVar1 = FUN_18001930c(param_2,param_4,uVar1,param_6);
        if (uVar1 == 0xffffffffffffffff) {
          if (param_2 != (LPWSTR)0x0) {
            *param_2 = L'\0';
          }
          if ((char)param_6[6] == '\0') {
            return 0;
          }
          return *(undefined4 *)((longlong)param_6 + 0x2c);
        }
        uVar1 = uVar1 + 1;
        if (param_2 == (LPWSTR)0x0) goto LAB_1800192e7;
        uVar2 = 0;
        if (param_3 < uVar1) {
          if (param_5 != 0xffffffffffffffff) {
            *param_2 = L'\0';
            uVar2 = 0x22;
            goto LAB_1800192c8;
          }
          uVar2 = 0x50;
          uVar1 = param_3;
        }
        param_2[uVar1 - 1] = L'\0';
LAB_1800192e7:
        if (param_1 == (ulonglong *)0x0) {
          return uVar2;
        }
        *param_1 = uVar1;
        return uVar2;
      }
      uVar2 = 0x16;
LAB_1800192c8:
      *(undefined4 *)((longlong)param_6 + 0x2c) = uVar2;
      *(undefined1 *)(param_6 + 6) = 1;
      goto LAB_18001923c;
    }
  }
  else if (param_3 != 0) {
    *param_2 = L'\0';
    goto LAB_18001925a;
  }
  uVar2 = 0x16;
  *(undefined1 *)(param_6 + 6) = 1;
  *(undefined4 *)((longlong)param_6 + 0x2c) = 0x16;
LAB_18001923c:
  FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
  return uVar2;
}




ulonglong FUN_18001930c(LPWSTR param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  UINT UVar1;
  int iVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint local_res8 [2];
  byte *local_res10;
  
  uVar4 = 0;
  if (param_1 != (LPWSTR)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = L'\0';
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_18000f8c0(param_4);
    }
    UVar1 = *(UINT *)(param_4[3] + 0xc);
    if (UVar1 == 0xfde9) {
      local_res8[0] = 0;
      local_res8[1] = 0;
      uVar4 = FUN_18001f228((ushort *)param_1,&local_res10,param_3,local_res8,(longlong)param_4);
    }
    else {
      lVar5 = *(longlong *)(param_4[3] + 0x138);
      if (param_1 == (LPWSTR)0x0) {
        uVar4 = 0xffffffffffffffff;
        if (lVar5 == 0) {
          do {
            uVar4 = uVar4 + 1;
          } while (local_res10[uVar4] != 0);
          return uVar4;
        }
        iVar2 = FUN_18001907c(UVar1,9,(LPCSTR)local_res10,-1,(LPWSTR)0x0,0);
        lVar5 = (longlong)iVar2;
        if (lVar5 == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
          return 0xffffffffffffffff;
        }
      }
      else {
        if (lVar5 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          do {
            *param_1 = (ushort)local_res10[uVar4];
            if (local_res10[uVar4] == 0) {
              return uVar4;
            }
            uVar4 = uVar4 + 1;
            param_1 = param_1 + 1;
          } while (uVar4 < param_3);
          return uVar4;
        }
        uVar6 = (uint)param_3;
        iVar2 = FUN_18001907c(UVar1,9,(LPCSTR)local_res10,-1,param_1,uVar6);
        lVar5 = (longlong)iVar2;
        if (lVar5 == 0) {
          DVar3 = GetLastError();
          if (DVar3 == 0x7a) {
            uVar4 = param_3 & 0xffffffff;
            pbVar7 = local_res10;
            uVar8 = uVar6;
            while (uVar8 != 0) {
              uVar8 = (int)uVar4 - 1;
              uVar4 = (ulonglong)uVar8;
              if (*pbVar7 == 0) break;
              if ((*(short *)(*(longlong *)param_4[3] + (ulonglong)*pbVar7 * 2) < 0) &&
                 (pbVar7 = pbVar7 + 1, *pbVar7 == 0)) goto LAB_180019433;
              pbVar7 = pbVar7 + 1;
            }
            iVar2 = FUN_18001907c(*(UINT *)(param_4[3] + 0xc),1,(LPCSTR)local_res10,
                                  (int)pbVar7 - (int)local_res10,param_1,uVar6);
            if ((longlong)iVar2 != 0) {
              return (longlong)iVar2;
            }
          }
LAB_180019433:
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
          *param_1 = L'\0';
          return 0xffffffffffffffff;
        }
      }
      uVar4 = lVar5 - 1;
    }
  }
  return uVar4;
}




undefined4
FUN_180019508(ulonglong *param_1,LPWSTR param_2,ulonglong param_3,byte *param_4,ulonglong param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180058e68 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1800343f8;
    puStack_28 = PTR_DAT_180034400;
  }
  uVar1 = FUN_1800191ec(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}




undefined4
FUN_1800195b0(ulonglong *param_1,byte *param_2,ulonglong param_3,LPCWSTR param_4,ulonglong param_5,
             longlong *param_6)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 == (byte *)0x0) {
    if (param_3 != 0) goto LAB_180019613;
  }
  else {
    if (param_3 == 0) {
LAB_180019613:
      uVar2 = 0x16;
      *(undefined1 *)(param_6 + 6) = 1;
      *(undefined4 *)((longlong)param_6 + 0x2c) = 0x16;
      goto LAB_180019629;
    }
    *param_2 = 0;
  }
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
  }
  uVar1 = param_5;
  if (param_3 < param_5) {
    uVar1 = param_3;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = 0x16;
LAB_180019684:
    *(undefined4 *)((longlong)param_6 + 0x2c) = uVar2;
    *(undefined1 *)(param_6 + 6) = 1;
LAB_180019629:
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_6);
    return uVar2;
  }
  uVar1 = FUN_1800196c4(param_2,param_4,uVar1,param_6);
  if (uVar1 == 0xffffffffffffffff) {
    if (param_2 != (byte *)0x0) {
      *param_2 = 0;
    }
    if ((char)param_6[6] == '\0') {
      return 0;
    }
    return *(undefined4 *)((longlong)param_6 + 0x2c);
  }
  uVar1 = uVar1 + 1;
  if (param_2 == (byte *)0x0) goto LAB_18001969f;
  uVar2 = 0;
  if (param_3 < uVar1) {
    if (param_5 != 0xffffffffffffffff) {
      *param_2 = 0;
      uVar2 = 0x22;
      goto LAB_180019684;
    }
    uVar2 = 0x50;
    uVar1 = param_3;
  }
  param_2[uVar1 - 1] = 0;
LAB_18001969f:
  if (param_1 == (ulonglong *)0x0) {
    return uVar2;
  }
  *param_1 = uVar1;
  return uVar2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800196c4(byte *param_1,LPCWSTR param_2,ulonglong param_3,longlong *param_4)

{
  byte bVar1;
  WCHAR WVar2;
  uint uVar3;
  longlong lVar4;
  LPCWSTR pWVar5;
  int iVar6;
  DWORD DVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStackY_b8 [32];
  BOOL local_78 [2];
  LPCWSTR local_70;
  int local_68 [2];
  byte local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_180034040 ^ (ulonglong)auStackY_b8;
  uVar8 = 0;
  local_78[0] = 0;
  if ((param_1 != (byte *)0x0) && (param_3 == 0)) {
    return 0;
  }
  local_70 = param_2;
  if (param_2 == (LPCWSTR)0x0) {
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_180010ee0((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return 0xffffffffffffffff;
  }
  if ((char)param_4[5] == '\0') {
    FUN_18000f8c0(param_4);
  }
  lVar4 = param_4[3];
  uVar3 = *(uint *)(lVar4 + 0xc);
  if (uVar3 == 0xfde9) {
    local_68[0] = 0;
    local_68[1] = 0;
    uVar8 = FUN_18001f5a4(param_1,&local_70,param_3,local_68,(longlong)param_4);
    return uVar8;
  }
  if (param_1 == (byte *)0x0) {
    if (*(longlong *)(lVar4 + 0x138) != 0) {
      iVar6 = FUN_18001a8b4(uVar3,0,local_70,-1,(LPSTR)0x0,0,(LPBOOL)0x0,local_78);
      if (((longlong)iVar6 != 0) && (local_78[0] == 0)) {
        return (longlong)iVar6 - 1;
      }
LAB_1800199d8:
      *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
      *(undefined1 *)(param_4 + 6) = 1;
      return 0xffffffffffffffff;
    }
    WVar2 = *local_70;
    while( true ) {
      if (WVar2 == L'\0') {
        return uVar8;
      }
      if (0xff < (ushort)WVar2) break;
      local_70 = local_70 + 1;
      uVar8 = uVar8 + 1;
      WVar2 = *local_70;
    }
  }
  else if (*(longlong *)(lVar4 + 0x138) == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while ((ushort)*local_70 < 0x100) {
      param_1[uVar8] = (byte)*local_70;
      WVar2 = *local_70;
      local_70 = local_70 + 1;
      if (WVar2 == L'\0') {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      if (param_3 <= uVar8) {
        return uVar8;
      }
    }
  }
  else {
    uVar11 = param_3;
    pWVar5 = local_70;
    if (*(int *)(lVar4 + 8) != 1) {
      iVar6 = FUN_18001a8b4(uVar3,0,local_70,-1,(LPSTR)param_1,(int)param_3,(LPBOOL)0x0,local_78);
      if (local_78[0] == 0) {
        if (iVar6 != 0) {
          return (longlong)iVar6 - 1;
        }
        DVar7 = GetLastError();
        if (DVar7 == 0x7a) {
          uVar11 = 0;
          if (param_3 == 0) {
            return 0;
          }
          while( true ) {
            iVar6 = *(int *)(param_4[3] + 8);
            if (5 < iVar6) {
              iVar6 = 5;
            }
            iVar6 = FUN_18001a8b4(*(uint *)(param_4[3] + 0xc),0,local_70,1,(LPSTR)local_60,iVar6,
                                  (LPBOOL)0x0,local_78);
            if ((((iVar6 == 0) || (local_78[0] != 0)) || (iVar6 < 0)) ||
               (uVar10 = (ulonglong)iVar6, 5 < uVar10)) break;
            if (param_3 < uVar10 + uVar11) {
              return uVar11;
            }
            uVar9 = uVar8;
            if (0 < (longlong)uVar10) {
              do {
                bVar1 = local_60[uVar9];
                param_1[uVar11] = bVar1;
                if (bVar1 == 0) {
                  return uVar11;
                }
                uVar9 = uVar9 + 1;
                uVar11 = uVar11 + 1;
              } while ((longlong)uVar9 < (longlong)uVar10);
            }
            local_70 = local_70 + 1;
            if (param_3 <= uVar11) {
              return uVar11;
            }
          }
        }
      }
      goto LAB_1800199d8;
    }
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      if (*pWVar5 == L'\0') {
        param_3 = ((longlong)pWVar5 - (longlong)local_70 >> 1) + 1;
        break;
      }
      pWVar5 = pWVar5 + 1;
    }
    iVar6 = FUN_18001a8b4(uVar3,0,local_70,(int)param_3,(LPSTR)param_1,(int)param_3,(LPBOOL)0x0,
                          local_78);
    uVar8 = (ulonglong)iVar6;
    if ((iVar6 != 0) && (local_78[0] == 0)) {
      if (param_1[uVar8 - 1] == 0) {
        return uVar8 - 1;
      }
      return uVar8;
    }
  }
  *(undefined1 *)(param_4 + 6) = 1;
  *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}




undefined4
FUN_180019a04(ulonglong *param_1,byte *param_2,ulonglong param_3,LPCWSTR param_4,ulonglong param_5,
             undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_38 = 0;
  local_20 = '\0';
  local_18 = '\0';
  local_10 = '\0';
  if (param_6 == (undefined4 *)0x0) {
    uVar1 = PTR_PTR_1800343f8._0_4_;
    uVar3 = PTR_PTR_1800343f8._4_4_;
    uVar4 = PTR_DAT_180034400._0_4_;
    uVar5 = PTR_DAT_180034400._4_4_;
    if (DAT_180058e68 != 0) goto LAB_180019a52;
  }
  else {
    uVar1 = *param_6;
    uVar3 = param_6[1];
    uVar4 = param_6[2];
    uVar5 = param_6[3];
  }
  local_20 = '\x01';
  local_30 = uVar1;
  uStack_2c = uVar3;
  uStack_28 = uVar4;
  uStack_24 = uVar5;
LAB_180019a52:
  uVar1 = FUN_1800195b0(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18000e9d8(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_180019abc(__crt_locale_pointers *param_1,ushort *param_2,LCTYPE param_3,ulonglong param_4,
             int param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  LPWSTR pWVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_88 [64];
  undefined4 local_48 [2];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  local_20 = DAT_180034040 ^ (ulonglong)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVar1 = *(uint *)(local_38 + 0xc);
  iVar3 = FUN_180017570(param_2,param_3,(LPWSTR)0x0,0);
  if (iVar3 == 0) {
    uVar11 = 0;
    puVar10 = auStack_88;
    goto LAB_180019bfe;
  }
  uVar7 = (longlong)iVar3 * 2 + 0x10;
  uVar7 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar7) & uVar7;
  if (uVar7 == 0) {
    pWVar8 = (LPWSTR)0x0;
LAB_180019be6:
    uVar11 = 0;
    uVar4 = 0;
    if (pWVar8 == (LPWSTR)0x0) goto LAB_180019bfe;
  }
  else {
    if (uVar7 < 0x401) {
      uVar5 = uVar7 + 0xf;
      if (uVar5 <= uVar7) {
        uVar5 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar5 & 0xfffffffffffffff0);
      puVar10 = auStack_88 + lVar2;
      puVar9 = auStack_88 + lVar2;
      puVar6 = (undefined4 *)((longlong)local_48 + lVar2);
      pWVar8 = (LPWSTR)0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_180019be6;
      *puVar6 = 0xcccc;
LAB_180019b8d:
      pWVar8 = (LPWSTR)(puVar6 + 4);
      puVar10 = puVar9;
    }
    else {
      puVar6 = _malloc_base(uVar7);
      pWVar8 = (LPWSTR)0x0;
      puVar10 = auStack_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_180019b8d;
      }
    }
    if (pWVar8 == (LPWSTR)0x0) goto LAB_180019be6;
    *(undefined8 *)(puVar10 + -8) = 0x180019ba6;
    iVar3 = FUN_180017570(param_2,param_3,pWVar8,iVar3);
    if (iVar3 == 0) goto LAB_180019be6;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(int *)(puVar10 + 0x28) = param_5;
    *(ulonglong *)(puVar10 + 0x20) = -(ulonglong)(param_5 != 0) & param_4;
    *(undefined8 *)(puVar10 + -8) = 0x180019be0;
    uVar4 = FUN_18001a8b4(uVar1,0,pWVar8,-1,*(LPSTR *)(puVar10 + 0x20),*(int *)(puVar10 + 0x28),
                          *(LPBOOL *)(puVar10 + 0x30),*(LPBOOL *)(puVar10 + 0x38));
  }
  uVar11 = uVar4;
  if (*(int *)(pWVar8 + -8) == 0xdddd) {
    *(undefined8 *)(puVar10 + -8) = 0x180019bfe;
    FUN_180016ba8(pWVar8 + -8);
  }
LAB_180019bfe:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar10 + -8) = 0x180019c1d;
  return uVar11;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LPWSTR FUN_180019c38(__crt_locale_pointers *param_1,int param_2,ushort *param_3,LCTYPE param_4,
                    longlong *param_5)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  LPWSTR pWVar4;
  LPWSTR pWVar5;
  undefined1 auStackY_108 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStackY_108;
  pWVar5 = (LPWSTR)0x0;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_180019abc(param_1,param_3,param_4,(ulonglong)local_c8,0x80);
    if (iVar1 != 0) {
      pvVar3 = _calloc_base((longlong)iVar1,1);
      *param_5 = (longlong)pvVar3;
      FUN_180016ba8((LPVOID)0x0);
      if (*param_5 == 0) {
        return (LPWSTR)0xffffffff;
      }
      iVar1 = FUN_18001f8e0((char *)*param_5,(longlong)iVar1,(longlong)local_c8,
                            (longlong)(iVar1 + -1));
      if (iVar1 == 0) {
        return (LPWSTR)0x0;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) {
      return (LPWSTR)0xffffffff;
    }
    iVar1 = FUN_180019abc(param_1,param_3,param_4,0,0);
    if (iVar1 == 0) {
      return (LPWSTR)0xffffffff;
    }
    pWVar4 = _calloc_base((longlong)iVar1,1);
    if (pWVar4 != (LPWSTR)0x0) {
      iVar1 = FUN_180019abc(param_1,param_3,param_4,(ulonglong)pWVar4,iVar1);
LAB_180019d37:
      if (iVar1 != 0) {
        *param_5 = (longlong)pWVar4;
        pWVar4 = pWVar5;
        goto LAB_180019d49;
      }
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 0) {
        return (LPWSTR)0xffffffff;
      }
      local_d8[0] = 0;
      iVar1 = FUN_180017570(param_3,param_4 | 0x20000000,(LPWSTR)local_d8,2);
      if (iVar1 == 0) {
        return (LPWSTR)0xffffffff;
      }
      *(undefined1 *)param_5 = (undefined1)local_d8[0];
      return (LPWSTR)0x0;
    }
    iVar1 = FUN_180017570(param_3,param_4,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return (LPWSTR)0xffffffff;
    }
    pWVar4 = _calloc_base((longlong)iVar1,2);
    if (pWVar4 != (LPWSTR)0x0) {
      iVar1 = FUN_180017570(param_3,param_4,pWVar4,iVar1);
      goto LAB_180019d37;
    }
  }
  pWVar5 = (LPWSTR)0xffffffff;
LAB_180019d49:
  FUN_180016ba8(pWVar4);
  return pWVar5;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

BOOL FUN_180019e00(__crt_locale_pointers *param_1,DWORD param_2,LPCSTR param_3,int param_4,
                  LPWORD param_5,UINT param_6,int param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar8;
  undefined1 *puVar9;
  BOOL BVar10;
  undefined1 auStackY_88 [32];
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar8 = auStackY_88;
  puVar9 = auStackY_88;
  local_30 = DAT_180034040 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_48 + 0xc);
  }
  iVar3 = FUN_18001907c(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (iVar3 == 0) {
    BVar10 = 0;
    puVar9 = auStackY_88;
    goto LAB_180019f56;
  }
  uVar1 = (longlong)iVar3 * 2;
  uVar7 = -(ulonglong)(uVar1 < uVar1 + 0x10) & uVar1 + 0x10;
  if (uVar7 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_180019f3e:
    BVar10 = 0;
    BVar4 = 0;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_180019f56;
  }
  else {
    if (uVar7 < 0x401) {
      uVar5 = uVar7 + 0xf;
      if (uVar5 <= uVar7) {
        uVar5 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar5 & 0xfffffffffffffff0);
      puVar9 = auStackY_88 + lVar2;
      puVar8 = auStackY_88 + lVar2;
      puVar6 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar6 == (undefined4 *)0x0) goto LAB_180019f3e;
      *puVar6 = 0xcccc;
LAB_180019eec:
      lpSrcStr = (undefined1 (*) [32])(puVar6 + 4);
      puVar9 = puVar8;
    }
    else {
      puVar6 = _malloc_base(uVar7);
      lpSrcStr = (undefined1 (*) [32])0x0;
      puVar9 = auStackY_88;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_180019eec;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_180019f3e;
    *(undefined8 *)(puVar9 + -8) = 0x180019f02;
    FUN_180021e70(lpSrcStr,0,uVar1);
    *(int *)(puVar9 + 0x28) = iVar3;
    *(undefined1 (**) [32])(puVar9 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar9 + -8) = 0x180019f1e;
    iVar3 = FUN_18001907c(param_6,1,param_3,param_4,*(LPWSTR *)(puVar9 + 0x20),
                          *(int *)(puVar9 + 0x28));
    if (iVar3 == 0) goto LAB_180019f3e;
    *(undefined8 *)(puVar9 + -8) = 0x180019f38;
    BVar4 = GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar3,param_5);
  }
  BVar10 = BVar4;
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x180019f56;
    FUN_180016ba8(lpSrcStr[-1] + 0x10);
  }
LAB_180019f56:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar9 + -8) = 0x180019f75;
  return BVar10;
}




/* Library Function - Single Match
    wcscpy_s
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  __acrt_ptd *p_Var2;
  errno_t eVar3;
  wchar_t *pwVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar4 = _Dst;
      do {
        wVar1 = *(wchar_t *)(((longlong)_Src - (longlong)_Dst) + (longlong)pwVar4);
        *pwVar4 = wVar1;
        pwVar4 = pwVar4 + 1;
        if (wVar1 == L'\0') {
          return 0;
        }
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      *_Dst = L'\0';
      p_Var2 = FUN_180010168();
      eVar3 = 0x22;
      goto LAB_180019fb4;
    }
    *_Dst = L'\0';
  }
  p_Var2 = FUN_180010168();
  eVar3 = 0x16;
LAB_180019fb4:
  *(errno_t *)p_Var2 = eVar3;
  FUN_180010fac();
  return eVar3;
}




void FUN_180019ff8(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6)

{
  FUN_18001a020(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}




void FUN_18001a020(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~((uint)*param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar1 = FUN_18001a414();
  if ((uVar1 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar1 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = (uint)*param_2 & 0x6000;
  if (((uint)*param_2 & 0x6000) == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 & 0xfffe001f;
  *local_res8 = *local_res8 | (param_4 & 0xfff) << 5;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *(undefined8 *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *param_6;
  }
  _clrfp();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((local_res8[2] & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((local_res8[2] & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((local_res8[2] & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((local_res8[2] & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((local_res8[2] & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *param_6 = local_res8[0x14];
  }
  return;
}




void FUN_18001a328(int param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 1) {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0x22;
  }
  return;
}




/* Library Function - Single Match
    _clrfp
   
   Library: Visual Studio */

uint _clrfp(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  _fclrf();
  return uVar1 & 0x3f;
}




/* Library Function - Single Match
    _ctrlfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint _ctrlfp(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  uVar2 = (~param_2 | 0xffff807f) & uVar1 | param_1 & param_2;
  if ((DAT_180034564 == '\0') || ((uVar2 & 0x40) == 0)) {
    FUN_18001f9f0(uVar2 & 0xffffffbf);
  }
  else {
    FUN_18001f9f0(uVar2);
  }
  return uVar1;
}




/* Library Function - Single Match
    _set_statfp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _set_statfp(uint param_1)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  FUN_18001f9f0(uVar1 | param_1 & 0x3f);
  return;
}




uint FUN_18001a414(void)

{
  uint uVar1;
  
  uVar1 = _get_fpsr();
  return uVar1 & 0x3f;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_18001a428(LPWSTR param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  UINT UVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_180059450 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_18000f8c0(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      UVar1 = *(UINT *)((longlong)plVar2 + 0xc);
      if (UVar1 != 0xfde9) {
        if (plVar2[0x27] == 0) {
          if (param_1 != (LPWSTR)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
          iVar3 = (int)plVar2[1];
          if ((((1 < iVar3) && (iVar3 <= (int)param_3)) &&
              (iVar3 = FUN_18001907c(UVar1,9,(LPCSTR)param_2,iVar3,param_1,
                                     (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
             (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(param_4[3] + 8);
          }
        }
        else {
          iVar3 = FUN_18001907c(UVar1,9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0));
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 6) = 1;
        *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
        return -1;
      }
      iVar3 = FUN_18001f1e4(param_1,param_2,param_3,(uint *)&DAT_180059450,(longlong)param_4);
      if (iVar3 < 0) {
        return -1;
      }
      return iVar3;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}




ulonglong FUN_18001a5a0(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_180034040 & 0x3f;
  uVar2 = DAT_180059468 ^ DAT_180034040;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}




/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_18001a5a0(local_res8,local_res18,local_res8,local_res10);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001a618(undefined8 param_1)

{
  _DAT_180059458 = param_1;
  _DAT_180059460 = param_1;
  DAT_180059468 = param_1;
  _DAT_180059470 = param_1;
  return;
}




undefined8 FUN_18001a638(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  __acrt_ptd *p_Var4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  __acrt_ptd *p_Var11;
  undefined4 local_res10;
  
  p_Var4 = (__acrt_ptd *)0x0;
  p_Var11 = (__acrt_ptd *)0x0;
  local_res10 = 0;
  bVar2 = true;
  if (param_1 == 2) {
LAB_18001a68f:
    if (param_1 == 2) {
      puVar10 = (ulonglong *)&DAT_180059458;
    }
    else if (param_1 == 6) {
LAB_18001a731:
      puVar10 = &DAT_180059468;
      p_Var11 = p_Var4;
    }
    else if (param_1 == 0xf) {
      puVar10 = (ulonglong *)&DAT_180059470;
    }
    else if (param_1 == 0x15) {
      puVar10 = (ulonglong *)&DAT_180059460;
      p_Var11 = p_Var4;
    }
    else {
      if (param_1 == 0x16) goto LAB_18001a731;
      puVar10 = (ulonglong *)0x0;
      p_Var11 = p_Var4;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_18001a6bf;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_18001a711;
      }
      goto LAB_18001a68f;
    }
LAB_18001a6bf:
    p_Var11 = FUN_180013cd8();
    if (p_Var11 == (__acrt_ptd *)0x0) {
      return 0xffffffff;
    }
    lVar3 = *(longlong *)p_Var11;
    lVar5 = DAT_180028460 * 0x10 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0x10) {
      if (*(uint *)(lVar3 + 4) == param_1) goto LAB_18001a70c;
    }
    lVar3 = 0;
LAB_18001a70c:
    if (lVar3 == 0) {
LAB_18001a711:
      p_Var11 = FUN_180010168();
      *(undefined4 *)p_Var11 = 0x16;
      FUN_180010fac();
      return 0xffffffff;
    }
    puVar10 = (ulonglong *)(lVar3 + 8);
    bVar2 = false;
  }
  lVar3 = 0;
  if (bVar2) {
    __acrt_lock(3);
  }
  uVar9 = *puVar10;
  if (bVar2) {
    bVar7 = (byte)DAT_180034040 & 0x3f;
    uVar9 = (uVar9 ^ DAT_180034040) >> bVar7 | (uVar9 ^ DAT_180034040) << 0x40 - bVar7;
  }
  if (uVar9 == 1) goto LAB_18001a81a;
  if (uVar9 == 0) {
    if (bVar2) {
      __acrt_unlock(3);
    }
    FUN_1800115d4(3);
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar3 = *(longlong *)(p_Var11 + 8);
    *(longlong *)(p_Var11 + 8) = 0;
    if (param_1 == 8) {
      p_Var4 = FUN_180013b60();
      local_res10 = *(undefined4 *)(p_Var4 + 0x10);
      p_Var4 = FUN_180013b60();
      *(undefined4 *)(p_Var4 + 0x10) = 0x8c;
      goto LAB_18001a7d2;
    }
  }
  else {
LAB_18001a7d2:
    if (param_1 == 8) {
      lVar5 = DAT_180028468 * 0x10 + *(longlong *)p_Var11;
      lVar8 = DAT_180028470 * 0x10 + lVar5;
      for (; lVar5 != lVar8; lVar5 = lVar5 + 0x10) {
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      goto LAB_18001a81a;
    }
  }
  *puVar10 = DAT_180034040;
LAB_18001a81a:
  if (bVar2) {
    __acrt_unlock(3);
  }
  if (uVar9 != 1) {
    if (param_1 == 8) {
      p_Var4 = FUN_180013b60();
      (*(code *)PTR__guard_dispatch_icall_1800252e8)(8,*(undefined4 *)(p_Var4 + 0x10));
    }
    else {
      (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var11 + 8) = lVar3, param_1 == 8)) {
      p_Var11 = FUN_180013b60();
      *(undefined4 *)(p_Var11 + 0x10) = local_res10;
    }
  }
  return 0;
}




void FUN_18001a8b4(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,
                  LPBOOL param_7,LPBOOL param_8)

{
  LPBOOL lpUsedDefaultChar;
  int iVar1;
  DWORD dwFlags;
  LPBOOL pBVar2;
  bool bVar3;
  
  pBVar2 = (LPBOOL)0x0;
  dwFlags = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_18001a954;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_18001a954;
      iVar1 = param_1 - 0xdeaa;
      goto LAB_18001a945;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_18001a954;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto LAB_18001a954;
    iVar1 = param_1 - 65000;
LAB_18001a945:
    if (iVar1 == 0) goto LAB_18001a954;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    dwFlags = param_2 & 0xffffff7f;
  }
LAB_18001a954:
  lpUsedDefaultChar = param_8;
  if ((param_1 - 65000 < 2) &&
     (param_7 = pBVar2, lpUsedDefaultChar = pBVar2, param_8 != (LPBOOL)0x0)) {
    *param_8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018001a98b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WideCharToMultiByte(param_1,dwFlags,param_3,param_4,param_5,param_6,(LPCSTR)param_7,
                      lpUsedDefaultChar);
  return;
}




/* Library Function - Single Match
    __ascii_wcsicmp
   
   Library: Visual Studio 2019 Release */

void __ascii_wcsicmp(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar1 + 0x20;
    if (0x19 < uVar1 - 0x41) {
      uVar3 = (uint)uVar1;
    }
    uVar4 = uVar2 + 0x20;
    if (0x19 < uVar2 - 0x41) {
      uVar4 = (uint)uVar2;
    }
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}




/* Library Function - Single Match
    _wcsicmp
   
   Library: Visual Studio 2019 Release */

int __cdecl _wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_180058e68 != 0) {
    iVar1 = FUN_18001aa1c(_Str1,_Str2,(__crt_locale_pointers *)0x0);
    return iVar1;
  }
  if ((_Str1 != (wchar_t *)0x0) && (_Str2 != (wchar_t *)0x0)) {
    iVar1 = __ascii_wcsicmp((ushort *)_Str1,(ushort *)_Str2);
    return iVar1;
  }
  p_Var2 = FUN_180010168();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_180010fac();
  return 0x7fffffff;
}




int FUN_18001aa1c(WCHAR *param_1,WCHAR *param_2,__crt_locale_pointers *param_3)

{
  WCHAR WVar1;
  ushort uVar2;
  ushort extraout_AX;
  ushort uVar3;
  ushort extraout_AX_00;
  int iVar4;
  __acrt_ptd *p_Var5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_38;
  longlong local_30 [2];
  char local_20;
  
  if ((param_1 == (WCHAR *)0x0) || (param_2 == (WCHAR *)0x0)) {
    p_Var5 = FUN_180010168();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_180010fac();
    iVar4 = 0x7fffffff;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_3);
    lVar6 = local_30[0];
    if (*(longlong *)(local_30[0] + 0x138) == 0) {
      iVar4 = __ascii_wcsicmp((ushort *)param_1,(ushort *)param_2);
    }
    else {
      do {
        WVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((ushort)WVar1 < 0x100) {
          uVar7 = (ulonglong)(byte)WVar1;
          if (((&DAT_180028192)[uVar7 * 2] & 1) != 0) {
            uVar7 = (ulonglong)*(byte *)(uVar7 + *(longlong *)(lVar6 + 0x110));
          }
          uVar2 = (ushort)uVar7;
        }
        else {
          FUN_18001fad4(WVar1,(__crt_locale_pointers *)local_30);
          lVar6 = local_30[0];
          uVar2 = extraout_AX;
        }
        WVar1 = *param_2;
        param_2 = param_2 + 1;
        if ((ushort)WVar1 < 0x100) {
          uVar7 = (ulonglong)(byte)WVar1;
          if (((&DAT_180028192)[uVar7 * 2] & 1) != 0) {
            uVar7 = (ulonglong)*(byte *)(uVar7 + *(longlong *)(lVar6 + 0x110));
          }
          uVar3 = (ushort)uVar7;
        }
        else {
          FUN_18001fad4(WVar1,(__crt_locale_pointers *)local_30);
          lVar6 = local_30[0];
          uVar3 = extraout_AX_00;
        }
        iVar4 = (uint)uVar2 - (uint)uVar3;
      } while ((iVar4 == 0) && (uVar2 != 0));
    }
    if (local_20 != '\0') {
      *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
    }
  }
  return iVar4;
}




uint FUN_18001abb4(LPCWSTR param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_1 == (LPCWSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_180016ba8(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != L'\0') {
      iVar2 = FUN_18001a8b4(param_4,0,param_1,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      uVar7 = (ulonglong)iVar2;
      if (iVar2 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_180016ba8(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar4 = _malloc_base(uVar7);
          *(LPVOID *)(param_2 + 0x10) = pvVar4;
          uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
          uVar6 = 0;
          if (uVar1 == 0) {
            uVar6 = uVar7;
          }
          *(bool *)(param_2 + 0x28) = uVar1 == 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar1 != 0) {
            return uVar1;
          }
        }
        iVar2 = FUN_18001a8b4(param_4,0,param_1,-1,*(LPSTR *)(param_2 + 0x10),(int)uVar6,(LPBOOL)0x0
                              ,(LPBOOL)0x0);
        if ((longlong)iVar2 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar2 + -1;
          return 0;
        }
      }
      DVar3 = GetLastError();
      FUN_1800100dc(DVar3);
      p_Var5 = FUN_180010168();
      return *(uint *)p_Var5;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_180016ba8(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar4 = _malloc_base(1);
      *(LPVOID *)(param_2 + 0x10) = pvVar4;
      uVar1 = ~-(uint)(pvVar4 != (LPVOID)0x0) & 0xc;
      *(bool *)(param_2 + 0x28) = uVar1 == 0;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)(uVar1 == 0);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}




ulonglong FUN_18001ad40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  uchar *puVar3;
  ulonglong uVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_res10;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_180010168();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180010fac();
    uVar8 = 0x16;
  }
  else {
    *param_2 = 0;
    pcVar10 = (char *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar7 = plStack_50, plVar9 = local_58, pcVar10 != (char *)0x0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      puVar3 = (uchar *)FUN_180020080(pcVar10,(char *)&local_res10);
      if (puVar3 == (uchar *)0x0) {
        uVar4 = FUN_18001af84((longlong)*param_1,0,0,(longlong *)&local_58);
        plVar9 = local_58;
        uVar8 = uVar4 & 0xffffffff;
        if ((int)uVar4 != 0) {
          plVar7 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_180016ba8((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_18001aeb7;
        }
      }
      else {
        uVar4 = FUN_18001b108((uchar *)*param_1,puVar3,(longlong *)&local_58);
        plVar9 = local_58;
        uVar8 = uVar4 & 0xffffffff;
        if ((int)uVar4 != 0) {
          plVar7 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_180016ba8((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_18001aeb7;
        }
      }
      param_1 = param_1 + 1;
      pcVar10 = (char *)*param_1;
    }
    uVar4 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    local_res18 = 0;
    for (plVar11 = local_58; plVar11 != plStack_50; plVar11 = plVar11 + 1) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*plVar11 + lVar6) != '\0');
      local_res18 = local_res18 + 1 + lVar6;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar4,local_res18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_180016ba8((LPVOID)0x0);
      for (plVar11 = plVar9; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_180016ba8((LPVOID)*plVar11);
      }
      uVar8 = 0xffffffff;
LAB_18001aeb7:
      FUN_180016ba8(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar5 + uVar4 * 8);
      local_res20 = pcVar10;
      if (plVar9 != plVar7) {
        local_res10 = (longlong)pvVar5 - (longlong)plVar9;
        plVar11 = plVar9;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar11 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_18001f8e0(pcVar10,(longlong)(local_res20 + (local_res18 - (longlong)pcVar10)),
                                *plVar11,lVar12);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_res10 + (longlong)plVar11) = pcVar10;
          pcVar10 = pcVar10 + lVar12;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar7);
      }
      *param_2 = pvVar5;
      FUN_180016ba8((LPVOID)0x0);
      for (plVar11 = plVar9; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_180016ba8((LPVOID)*plVar11);
      }
      FUN_180016ba8(plVar9);
      uVar8 = 0;
    }
  }
  return uVar8;
}




undefined8 FUN_18001af84(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  LPVOID pvVar3;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar5;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  pcVar2 = _calloc_base(uVar8,1);
  if (((param_3 != 0) && (iVar1 = FUN_18001f8e0(pcVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_18001f8e0(pcVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_180016ba8((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_18001b0da;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_180016ba8((LPVOID)0x0);
          goto LAB_18001b0da;
        }
        FUN_180016ba8((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_180016ba8(pcVar2);
  }
  else {
LAB_18001b0da:
    *(char **)param_4[1] = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_180016ba8((LPVOID)0x0);
  return uVar7;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18001b108(uchar *param_1,uchar *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  HANDLE hFindFile;
  INT_PTR IVar6;
  ulonglong uVar7;
  LPCWSTR lpFileName;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  UINT UVar12;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2f) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) == 0))))) {
    param_2 = (uchar *)FUN_180020448(param_1,param_2);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    uVar5 = FUN_18001af84((longlong)param_1,0,0,param_3);
  }
  else {
    bVar11 = *param_2 - 0x2f;
    UVar12 = 0;
    if ((0x2d < bVar11) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar11 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    uVar5 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_310 = '\0';
    local_340 = uVar5;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_308,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      UVar12 = 0xfde9;
    }
    else {
      IVar6 = FUN_18001746c();
      if ((int)IVar6 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        UVar12 = 1;
      }
      else if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
    }
    uVar3 = FUN_180011044((LPCSTR)param_1,(longlong)&local_338,local_348,UVar12);
    lpFileName = local_328;
    if (uVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      uVar5 = FUN_18001af84((longlong)param_1,0,0,param_3);
      uVar5 = uVar5 & 0xffffffff;
      if (local_310 != '\0') {
        FUN_180016ba8(local_328);
      }
    }
    else {
      lVar10 = param_3[1] - *param_3 >> 3;
      do {
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_2e8,(__crt_locale_pointers *)0x0);
        uVar3 = 0xfde9;
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        else {
          IVar6 = FUN_18001746c();
          if ((int)IVar6 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 1;
          }
          else {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 0;
          }
        }
        uVar3 = FUN_18001abb4(local_298.cFileName,(longlong)&local_2c8,local_348,uVar3);
        pcVar2 = local_2b8;
        pcVar8 = local_2b8;
        if (uVar3 != 0) {
          pcVar8 = (char *)0x0;
        }
        if ((*pcVar8 == '.') && ((pcVar8[1] == '\0' || ((pcVar8[1] == '.' && (pcVar8[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_180016ba8(local_2b8);
          }
        }
        else {
          uVar7 = FUN_18001af84((longlong)pcVar8,(longlong)param_1,uVar5,param_3);
          if ((int)uVar7 != 0) {
            if (local_2a0 != '\0') {
              FUN_180016ba8(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 == '\0') {
              return uVar7 & 0xffffffff;
            }
            FUN_180016ba8(local_328);
            return uVar7 & 0xffffffff;
          }
          uVar5 = local_340;
          if (local_2a0 != (char)uVar7) {
            FUN_180016ba8(pcVar2);
            uVar5 = local_340;
          }
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar9 = param_3[1] - *param_3 >> 3;
      if (lVar10 != lVar9) {
        FUN_18001fbd0((undefined1 *)(*param_3 + lVar10 * 8),lVar9 - lVar10,8,&LAB_18001aba0);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_180016ba8(local_328);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}




ulonglong thunk_FUN_18001ad40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  uchar *puVar3;
  ulonglong uVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lStackX_10;
  ulonglong uStackX_18;
  char *pcStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_180010168();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_180010fac();
    uVar8 = 0x16;
  }
  else {
    *param_2 = 0;
    pcVar10 = (char *)*param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar7 = plStack_50, plVar9 = plStack_58, pcVar10 != (char *)0x0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      puVar3 = (uchar *)FUN_180020080(pcVar10,(char *)&lStackX_10);
      if (puVar3 == (uchar *)0x0) {
        uVar4 = FUN_18001af84((longlong)*param_1,0,0,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar8 = uVar4 & 0xffffffff;
        if ((int)uVar4 != 0) {
          plVar7 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_180016ba8((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_18001aeb7;
        }
      }
      else {
        uVar4 = FUN_18001b108((uchar *)*param_1,puVar3,(longlong *)&plStack_58);
        plVar9 = plStack_58;
        uVar8 = uVar4 & 0xffffffff;
        if ((int)uVar4 != 0) {
          plVar7 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_180016ba8((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_18001aeb7;
        }
      }
      param_1 = param_1 + 1;
      pcVar10 = (char *)*param_1;
    }
    uVar4 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    uStackX_18 = 0;
    for (plVar11 = plStack_58; plVar11 != plStack_50; plVar11 = plVar11 + 1) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*plVar11 + lVar6) != '\0');
      uStackX_18 = uStackX_18 + 1 + lVar6;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar4,uStackX_18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_180016ba8((LPVOID)0x0);
      for (plVar11 = plVar9; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_180016ba8((LPVOID)*plVar11);
      }
      uVar8 = 0xffffffff;
LAB_18001aeb7:
      FUN_180016ba8(plVar9);
    }
    else {
      pcVar10 = (char *)((longlong)pvVar5 + uVar4 * 8);
      pcStackX_20 = pcVar10;
      if (plVar9 != plVar7) {
        lStackX_10 = (longlong)pvVar5 - (longlong)plVar9;
        plVar11 = plVar9;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar11 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_18001f8e0(pcVar10,(longlong)(pcStackX_20 + (uStackX_18 - (longlong)pcVar10)),
                                *plVar11,lVar12);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(lStackX_10 + (longlong)plVar11) = pcVar10;
          pcVar10 = pcVar10 + lVar12;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar7);
      }
      *param_2 = pvVar5;
      FUN_180016ba8((LPVOID)0x0);
      for (plVar11 = plVar9; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_180016ba8((LPVOID)*plVar11);
      }
      FUN_180016ba8(plVar9);
      uVar8 = 0;
    }
  }
  return uVar8;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18001b460(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  INT_PTR IVar2;
  uint uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_1800100dc(DVar1);
    local_240 = 0;
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_280,(__crt_locale_pointers *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar2 = FUN_18001746c();
      if ((int)IVar2 == 0) {
        if (local_268 != (char)IVar2) {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_1800121f0(local_228,(longlong)&local_260,local_288,uVar3);
    local_240 = local_240 & 0xffffffff;
  }
  return local_240;
}




void FUN_18001b584(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  __acrt_ptd *p_Var5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  longlong lVar8;
  
  __acrt_lock(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_180059560 == (undefined1 (*) [32])0x0) {
LAB_18001b637:
    p_Var5 = FUN_180010168();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_180010fac();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_180021e70(DAT_180059560,0,0x101);
      goto LAB_18001b637;
    }
    lVar8 = 2;
    pauVar7 = DAT_180059560;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar7 = *puVar4;
      *(undefined8 *)(*pauVar7 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
      *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar7[1] = puVar4[4];
      *(undefined8 *)(pauVar7[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
      *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar7[2] = puVar4[8];
      *(undefined8 *)(pauVar7[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
      *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar7[3] = puVar4[0xc];
      *(undefined8 *)(pauVar7[3] + 8) = uVar3;
      pauVar6 = pauVar7 + 4;
      uVar3 = puVar4[0xf];
      *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
      *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar8 = lVar8 + -1;
      pauVar7 = pauVar6;
    } while (lVar8 != 0);
    (*pauVar6)[0] = *(undefined1 *)puVar4;
  }
  lVar8 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_180059568 != (undefined1 (*) [32])0x0) {
    pauVar7 = DAT_180059568;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar7 = *puVar4;
        *(undefined8 *)(*pauVar7 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)(*pauVar7 + 0x10) = puVar4[2];
        *(undefined8 *)(*pauVar7 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar7[1] = puVar4[4];
        *(undefined8 *)(pauVar7[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)(pauVar7[1] + 0x10) = puVar4[6];
        *(undefined8 *)(pauVar7[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar7[2] = puVar4[8];
        *(undefined8 *)(pauVar7[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)(pauVar7[2] + 0x10) = puVar4[10];
        *(undefined8 *)(pauVar7[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar7[3] = puVar4[0xc];
        *(undefined8 *)(pauVar7[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)(pauVar7[3] + 0x10) = puVar4[0xe];
        *(undefined8 *)(pauVar7[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar8 = lVar8 + -1;
        pauVar7 = pauVar7 + 4;
      } while (lVar8 != 0);
      goto LAB_18001b6e8;
    }
    FUN_180021e70(DAT_180059568,0,0x100);
  }
  p_Var5 = FUN_180010168();
  *(undefined4 *)p_Var5 = 0x16;
  FUN_180010fac();
LAB_18001b6e8:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_180034710)) {
    FUN_180016ba8((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}




/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_180059578 = 0;
  if (param_1 == -2) {
    DAT_180059578 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_180059578 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_180059578 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}




void FUN_18001b7d4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_180021e70((undefined1 (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar4 = lVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    lVar1 = lVar4 + 1;
    *(undefined1 *)(param_1 + lVar4 + 0x18) = (&DAT_180034728)[lVar4];
    lVar4 = lVar1;
  } while (lVar1 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_180034829)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001b86c(longlong param_1)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  byte *pbVar4;
  CHAR *pCVar5;
  ulonglong uVar6;
  BYTE *pBVar7;
  WORD *pWVar8;
  longlong lVar9;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  CHAR local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStackY_788;
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar2 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar2 == 0)) {
    uVar3 = 0;
    pbVar4 = (byte *)(param_1 + 0x19);
    do {
      if (uVar3 - 0x41 < 0x1a) {
        *pbVar4 = *pbVar4 | 0x10;
        bVar1 = (char)uVar3 + 0x20;
      }
      else if (uVar3 - 0x61 < 0x1a) {
        *pbVar4 = *pbVar4 | 0x20;
        bVar1 = (char)uVar3 - 0x20;
      }
      else {
        bVar1 = 0;
      }
      pbVar4[0x100] = bVar1;
      uVar3 = uVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    pCVar5 = local_718;
    lVar9 = 0x100;
    do {
      *pCVar5 = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
      pCVar5 = pCVar5 + 1;
    } while (uVar3 < 0x100);
    pBVar7 = local_738.LeadByte;
    local_718[0] = ' ';
    while (local_738.LeadByte[0] != 0) {
      bVar1 = pBVar7[1];
      uVar6 = (ulonglong)local_738.LeadByte[0];
      while ((uVar3 = (uint)uVar6, uVar3 <= bVar1 && (uVar3 < 0x100))) {
        local_718[uVar6] = ' ';
        uVar6 = (ulonglong)(uVar3 + 1);
      }
      pBVar7 = pBVar7 + 2;
      local_738.LeadByte[0] = *pBVar7;
    }
    FUN_180019e00((__crt_locale_pointers *)0x0,1,local_718,0x100,local_418,*(UINT *)(param_1 + 4),0)
    ;
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,
                        0x100,local_618,0x100,*(UINT *)(param_1 + 4),0);
    __acrt_LCMapStringA((__crt_locale_pointers *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,
                        0x100,local_518,0x100,*(UINT *)(param_1 + 4),0);
    pWVar8 = local_418;
    pbVar4 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar8 & 1) == 0) {
        if ((*pWVar8 & 2) == 0) {
          bVar1 = 0;
        }
        else {
          *pbVar4 = *pbVar4 | 0x20;
          bVar1 = pbVar4[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar4 = *pbVar4 | 0x10;
        bVar1 = pbVar4[(longlong)(abStack_631 + -param_1)];
      }
      pbVar4[0x100] = bVar1;
      pWVar8 = pWVar8 + 1;
      pbVar4 = pbVar4 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}




ulonglong FUN_18001ba54(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  __acrt_ptd *p_Var13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  __acrt_ptd *local_res18;
  __crt_multibyte_data **local_res20;
  undefined1 local_268 [4];
  int local_264 [3];
  __acrt_ptd **local_258;
  __crt_multibyte_data ***local_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  update_thread_multibyte_data_internal(param_3,param_4);
  iVar8 = getSystemCP(param_1);
  if (iVar8 == *(int *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    uVar10 = 0;
  }
  else {
    puVar9 = _malloc_base(0x228);
    if (puVar9 == (undefined8 *)0x0) {
      FUN_180016ba8((LPVOID)0x0);
      uVar10 = 0xffffffff;
    }
    else {
      lVar15 = 4;
      lVar16 = 4;
      puVar6 = *(undefined8 **)(local_res18 + 0x88);
      puVar7 = local_248;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar16 = lVar16 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar16 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      puVar6 = local_248;
      puVar7 = puVar9;
      do {
        puVar14 = puVar7;
        puVar11 = puVar6;
        uVar1 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar14 = *puVar11;
        puVar14[1] = uVar1;
        uVar1 = puVar11[4];
        uVar5 = puVar11[5];
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar14[4] = uVar1;
        puVar14[5] = uVar5;
        uVar1 = puVar11[8];
        uVar5 = puVar11[9];
        puVar14[6] = uVar3;
        puVar14[7] = uVar4;
        uVar3 = puVar11[10];
        uVar4 = puVar11[0xb];
        puVar14[8] = uVar1;
        puVar14[9] = uVar5;
        uVar1 = puVar11[0xc];
        uVar5 = puVar11[0xd];
        puVar14[10] = uVar3;
        puVar14[0xb] = uVar4;
        uVar3 = puVar11[0xe];
        uVar4 = puVar11[0xf];
        puVar14[0xc] = uVar1;
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar3;
        puVar14[0xf] = uVar4;
        lVar15 = lVar15 + -1;
        puVar6 = puVar11 + 0x10;
        puVar7 = puVar14 + 0x10;
      } while (lVar15 != 0);
      uVar3 = puVar11[0x11];
      uVar4 = puVar11[0x12];
      uVar5 = puVar11[0x13];
      uVar1 = puVar11[0x14];
      puVar14[0x10] = puVar11[0x10];
      puVar14[0x11] = uVar3;
      puVar14[0x12] = uVar4;
      puVar14[0x13] = uVar5;
      puVar14[0x14] = uVar1;
      *(undefined4 *)puVar9 = 0;
      uVar12 = FUN_18001bdf8(iVar8,(longlong)puVar9);
      uVar10 = uVar12 & 0xffffffff;
      if ((int)uVar12 == -1) {
        p_Var13 = FUN_180010168();
        *(undefined4 *)p_Var13 = 0x16;
        FUN_180016ba8(puVar9);
        uVar10 = 0xffffffff;
      }
      else {
        if (param_2 == '\0') {
          FUN_180014224();
        }
        piVar2 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar8 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_180034710)) {
          FUN_180016ba8(*(undefined **)(local_res18 + 0x88));
        }
        *(undefined4 *)puVar9 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar9;
        if ((DAT_180034560 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_18001b584(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_180034400 = *local_res20;
          }
        }
        FUN_180016ba8((LPVOID)0x0);
      }
    }
  }
  return uVar10;
}




/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_180034560) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_180034710)) {
          FUN_180016ba8(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Library: Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  ulonglong in_RAX;
  __acrt_ptd *p_Var1;
  
  if (DAT_18005957c == '\0') {
    DAT_180059568 = &DAT_180034a50;
    DAT_180059570 = &DAT_180034710;
    DAT_180059560 = &DAT_180034940;
    p_Var1 = FUN_180013c34();
    in_RAX = FUN_18001ba54(-3,'\x01',p_Var1,(__crt_multibyte_data **)&DAT_180059570);
    DAT_18005957c = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




void FUN_18001bddc(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180013b60();
  update_thread_multibyte_data_internal(p_Var1,(__crt_multibyte_data **)&DAT_180059570);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18001bdf8(int param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  longlong lVar10;
  BYTE *pBVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined2 *puVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_180034040 ^ (ulonglong)auStack_68;
  uVar5 = getSystemCP(param_1);
  puVar15 = (undefined *)0x0;
  if (uVar5 == 0) {
LAB_18001c085:
    FUN_18001b7d4(param_2);
    return 0;
  }
  puVar7 = &DAT_180034b60;
  uVar17 = 1;
  puVar9 = puVar15;
  do {
    if (*puVar7 == uVar5) {
      FUN_180021e70((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
      pbVar20 = &DAT_180034b50;
      lVar10 = 4;
      pbVar8 = &DAT_180034b70 + (longlong)puVar9 * 0x30;
      do {
        bVar2 = *pbVar8;
        pbVar13 = pbVar8;
        while ((bVar2 != 0 && (pbVar13[1] != 0))) {
          bVar2 = *pbVar13;
          uVar21 = (uint)bVar2;
          if (bVar2 <= pbVar13[1]) {
            uVar19 = (uint)bVar2;
            do {
              uVar19 = uVar19 + 1;
              if (0x100 < uVar19) break;
              uVar21 = uVar21 + 1;
              pbVar1 = (byte *)((ulonglong)uVar19 + 0x18 + param_2);
              *pbVar1 = *pbVar1 | *pbVar20;
            } while (uVar21 <= pbVar13[1]);
          }
          pbVar13 = pbVar13 + 2;
          bVar2 = *pbVar13;
        }
        pbVar8 = pbVar8 + 8;
        pbVar20 = pbVar20 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      *(uint *)(param_2 + 4) = uVar5;
      *(undefined4 *)(param_2 + 8) = 1;
      puVar16 = PTR_u_ja_JP_180029530;
      if (((uVar5 != 0x3a4) && (puVar16 = PTR_u_zh_CN_180029538, uVar5 != 0x3a8)) &&
         ((puVar16 = PTR_u_ko_KR_180029540, uVar5 != 0x3b5 && (puVar16 = puVar15, uVar5 == 0x3b6))))
      {
        puVar16 = PTR_u_zh_TW_180029548;
      }
      *(undefined **)(param_2 + 0x220) = puVar16;
      puVar18 = (undefined2 *)(&DAT_180034b64 + (longlong)puVar9 * 0x30);
      puVar14 = (undefined2 *)(param_2 + 0xc);
      lVar10 = 6;
      do {
        uVar3 = *puVar18;
        puVar18 = puVar18 + 1;
        *puVar14 = uVar3;
        puVar14 = puVar14 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      goto LAB_18001c07b;
    }
    uVar21 = (int)puVar9 + 1;
    puVar9 = (undefined *)(ulonglong)uVar21;
    puVar7 = puVar7 + 0xc;
  } while (uVar21 < 5);
  if ((uVar5 == 65000) || (BVar6 = IsValidCodePage(uVar5 & 0xffff), BVar6 == 0)) {
    return 0xffffffff;
  }
  if (uVar5 == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar6 = GetCPInfo(uVar5,&local_48);
    if (BVar6 == 0) {
      if (DAT_180059578 == 0) {
        return 0xffffffff;
      }
      goto LAB_18001c085;
    }
    FUN_180021e70((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar5;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar11 = local_48.LeadByte;
      while ((local_48.LeadByte[0] != 0 && (pBVar11[1] != 0))) {
        bVar2 = *pBVar11;
        if ((uint)bVar2 <= (uint)pBVar11[1]) {
          uVar5 = (uint)bVar2;
          uVar12 = (ulonglong)(((uint)pBVar11[1] - (uint)bVar2) + 1);
          do {
            uVar5 = uVar5 + 1;
            pbVar8 = (byte *)((ulonglong)uVar5 + 0x18 + param_2);
            *pbVar8 = *pbVar8 | 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        pBVar11 = pBVar11 + 2;
        local_48.LeadByte[0] = *pBVar11;
      }
      pbVar8 = (byte *)(param_2 + 0x1a);
      lVar10 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      iVar4 = *(int *)(param_2 + 4);
      puVar9 = PTR_u_ja_JP_180029530;
      if ((((iVar4 != 0x3a4) && (puVar9 = PTR_u_zh_CN_180029538, iVar4 != 0x3a8)) &&
          (puVar9 = PTR_u_ko_KR_180029540, iVar4 != 0x3b5)) &&
         (puVar9 = PTR_u_zh_TW_180029548, iVar4 != 0x3b6)) {
        puVar9 = puVar15;
      }
      *(undefined **)(param_2 + 0x220) = puVar9;
    }
    else {
      uVar17 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar17;
  }
  puVar14 = (undefined2 *)(param_2 + 0xc);
  for (lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
LAB_18001c07b:
  FUN_18001b86c(param_2);
  return 0;
}




undefined8 FUN_18001c0b8(__crt_locale_pointers *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  if (((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2)) == 0)))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}




void FUN_18001c12c(uint param_1)

{
  FUN_18001c0b8((__crt_locale_pointers *)0x0,param_1,0,4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_18001c140(void)

{
  DAT_1800595a0 = GetCommandLineA();
  _DAT_1800595a8 = GetCommandLineW();
  return 1;
}




LPSTR FUN_18001c168(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar4;
  LPSTR pCVar6;
  int iVar7;
  WCHAR *pWVar8;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    iVar7 = (int)((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1);
    iVar2 = FUN_18001a8b4(0,0,pWVar3,iVar7,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
    if (iVar2 != 0) {
      pCVar6 = _malloc_base((longlong)iVar2);
      if (pCVar6 != (LPSTR)0x0) {
        iVar2 = FUN_18001a8b4(0,0,pWVar3,iVar7,pCVar6,iVar2,(LPBOOL)0x0,(LPBOOL)0x0);
        if (iVar2 == 0) {
          FUN_180016ba8(pCVar6);
          pCVar6 = (LPSTR)0x0;
        }
        else {
          FUN_180016ba8((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return pCVar6;
      }
      FUN_180016ba8((LPVOID)0x0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return (LPSTR)0x0;
}




/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_180021e70((undefined1 (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




bool FUN_18001c310(void)

{
  DAT_1800595b0 = GetProcessHeap();
  return DAT_1800595b0 != (HANDLE)0x0;
}




undefined8 FUN_18001c338(undefined8 *param_1,undefined8 *param_2)

{
  longlong *in_RAX;
  longlong *plVar1;
  
  plVar1 = param_1;
  if (param_1 != param_2) {
    do {
      in_RAX = (longlong *)0x0;
      if ((*plVar1 != 0) &&
         (in_RAX = (longlong *)(*(code *)PTR__guard_dispatch_icall_1800252e8)(),
         (char)in_RAX == '\0')) break;
      plVar1 = plVar1 + 2;
    } while (plVar1 != param_2);
    if (plVar1 != param_2) {
      if (plVar1 != param_1) {
        plVar1 = plVar1 + -1;
        do {
          if ((plVar1[-1] != 0) && (*plVar1 != 0)) {
            (*(code *)PTR__guard_dispatch_icall_1800252e8)(0);
          }
          in_RAX = plVar1 + -1;
          plVar1 = plVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined8 FUN_18001c3cc(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(longlong *)(param_2 + -8) != 0) {
      in_RAX = (*(code *)PTR__guard_dispatch_icall_1800252e8)(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined8 FUN_18001c414(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_180034040 & 0x3f;
  return CONCAT71((int7)(DAT_180034040 >> 8),
                  (DAT_1800595b8 ^ DAT_180034040) >> bVar1 != 0 ||
                  (DAT_1800595b8 ^ DAT_180034040) << 0x40 - bVar1 != 0);
}




void FUN_18001c434(undefined8 param_1)

{
  DAT_1800595b8 = param_1;
  return;
}




/* WARNING: Switch with 1 destination removed at 0x00018001c470 */
/* WARNING: Switch with 1 destination removed at 0x000180021790 */

undefined8 FUN_18001c43c(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar2 = (byte)DAT_180034040 & 0x3f;
  UNRECOVERED_JUMPTABLE =
       (code *)((DAT_1800595b8 ^ DAT_180034040) >> bVar2 |
               (DAT_1800595b8 ^ DAT_180034040) << 0x40 - bVar2);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180021770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
    return uVar1;
  }
  return 0;
}




/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar3;
  
  puVar2 = _calloc_base(0x40,0x48);
  puVar5 = (undefined8 *)0x0;
  if ((puVar2 != (undefined8 *)0x0) && (puVar5 = puVar2, puVar2 != puVar2 + 0x240)) {
    puVar6 = puVar2 + 6;
    do {
      FUN_18001766c((LPCRITICAL_SECTION)(puVar6 + -6),4000,0);
      puVar6[-1] = 0xffffffffffffffff;
      puVar4 = (undefined1 *)((longlong)puVar6 + 0xe);
      *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) & 0xf8;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0xa0a0000;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 10;
      puVar3 = (undefined8 *)0x0;
      do {
        *puVar4 = 0;
        uVar1 = (int)puVar3 + 1;
        puVar3 = (undefined8 *)(ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < 5);
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 9;
    } while (puVar3 != puVar2 + 0x240);
  }
  FUN_180016ba8((LPVOID)0x0);
  return puVar5;
}




/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2019 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_180016ba8(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_180059280;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_180058e80)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_180058e80)[lVar5] = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_180059280 + 0x40;
        DAT_180059280 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    p_Var2 = FUN_180010168();
    *(undefined4 *)p_Var2 = 9;
    FUN_180010fac();
    lVar3 = 9;
  }
  return lVar3;
}




void FUN_18001c618(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018001c638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}




void FUN_18001c640(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018001c660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180058e80)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}




undefined8 FUN_18001c668(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180059280)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_180058e80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_180058e80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_180020538();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_18001c6e8;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_18001c6e8:
      *(undefined8 *)
       ((&DAT_180058e80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  p_Var3 = FUN_180010168();
  *(undefined4 *)p_Var3 = 9;
  p_Var3 = FUN_180010148();
  *(undefined4 *)p_Var3 = 0;
  return 0xffffffff;
}




undefined8 FUN_18001c724(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_180010148();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180059280)) {
      if ((*(byte *)((&DAT_180058e80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_180058e80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    p_Var1 = FUN_180010148();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 9;
    FUN_180010fac();
  }
  return 0xffffffffffffffff;
}




/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_180034408) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  return;
}




/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_1800341e0)) &&
      (*(int **)((longlong)param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_180016ba8(piVar1);
      __acrt_locale_free_monetary(*(longlong *)((longlong)param_1 + 0xf8));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_180016ba8(piVar1);
      __acrt_locale_free_numeric(*(undefined8 **)((longlong)param_1 + 0xf8));
    }
    FUN_180016ba8(*(LPVOID *)((longlong)param_1 + 0xe0));
    FUN_180016ba8(*(LPVOID *)((longlong)param_1 + 0xf8));
  }
  if ((*(int **)((longlong)param_1 + 0x100) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x100) == 0)) {
    FUN_180016ba8((LPVOID)(*(longlong *)((longlong)param_1 + 0x108) + -0xfe));
    FUN_180016ba8((LPVOID)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    FUN_180016ba8((LPVOID)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    FUN_180016ba8(*(LPVOID *)((longlong)param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((longlong)param_1 + 0x120));
  puVar3 = (undefined8 *)((longlong)param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_180034408) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_180016ba8(piVar1);
      FUN_180016ba8((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_180016ba8(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180016ba8(param_1);
  return;
}




/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_180028790)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}




/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_180028790)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_180016ba8(param_1);
  }
  return;
}




/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_180028790)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}




/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_180034408) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  }
  return;
}




/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** __acrt_update_thread_locale_data(void)

{
  __acrt_ptd *p_Var1;
  undefined **ppuVar2;
  
  p_Var1 = FUN_180013b60();
  if (((DAT_180034560 & *(uint *)(p_Var1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(p_Var1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((undefined8 *)(p_Var1 + 0x90),DAT_180058e70);
    __acrt_unlock(4);
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return ppuVar2;
}




/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** _updatetlocinfoEx_nolock(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1800342a0)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}




/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1800341f8) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_180034200) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_180034208) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_180034210) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_180034218) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_180034220) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_180034228) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_180034248) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_180034250) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_180034258) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_180034260) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_180034268) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_180034270) {
      FUN_180016ba8(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001ccb4(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  ushort *puVar5;
  int *piVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined4 *puVar10;
  LPWSTR pWVar11;
  LPWSTR pWVar12;
  LPWSTR pWVar13;
  LPWSTR pWVar14;
  LPWSTR pWVar15;
  LPWSTR pWVar16;
  LPWSTR pWVar17;
  LPWSTR pWVar18;
  LPWSTR pWVar19;
  LPWSTR pWVar20;
  LPWSTR pWVar21;
  LPWSTR pWVar22;
  LPWSTR pWVar23;
  LPWSTR pWVar24;
  LPWSTR pWVar25;
  LPWSTR pWVar26;
  LPWSTR pWVar27;
  LPWSTR pWVar28;
  LPWSTR pWVar29;
  LPWSTR pWVar30;
  LPWSTR pWVar31;
  byte *pbVar32;
  undefined **ppuVar33;
  byte *pbVar34;
  longlong local_38 [2];
  
  puVar10 = (undefined4 *)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x140) == 0) && (*(longlong *)(param_1 + 0x148) == 0)) {
    ppuVar9 = (undefined **)0x0;
    ppuVar33 = &PTR_DAT_1800341e0;
LAB_18001d163:
    piVar6 = *(int **)(param_1 + 0xf0);
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    }
    piVar6 = *(int **)(param_1 + 0xe0);
    if (piVar6 != (int *)0x0) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FUN_180016ba8(*(LPVOID *)(param_1 + 0xf8));
        FUN_180016ba8(*(LPVOID *)(param_1 + 0xe0));
      }
    }
    *(undefined4 **)(param_1 + 0xf0) = puVar10;
    uVar8 = 0;
    *(undefined ***)(param_1 + 0xe0) = ppuVar9;
    *(undefined ***)(param_1 + 0xf8) = ppuVar33;
  }
  else {
    ppuVar33 = _calloc_base(1,0x98);
    FUN_180016ba8((LPVOID)0x0);
    if (ppuVar33 != (undefined **)0x0) {
      ppuVar9 = _calloc_base(1,4);
      FUN_180016ba8((LPVOID)0x0);
      puVar7 = PTR_DAT_1800341e8;
      if (ppuVar9 != (undefined **)0x0) {
        if (*(longlong *)(param_1 + 0x140) == 0) {
          *ppuVar33 = PTR_DAT_1800341e0;
          ppuVar33[1] = puVar7;
          puVar7 = PTR_DAT_1800341f8;
          ppuVar33[2] = PTR_DAT_1800341f0;
          ppuVar33[3] = puVar7;
          puVar7 = PTR_DAT_180034208;
          ppuVar33[4] = PTR_DAT_180034200;
          ppuVar33[5] = puVar7;
          puVar7 = PTR_DAT_180034218;
          ppuVar33[6] = PTR_DAT_180034210;
          ppuVar33[7] = puVar7;
          puVar7 = PTR_DAT_180034228;
          ppuVar33[8] = PTR_DAT_180034220;
          ppuVar33[9] = puVar7;
          puVar7 = PTR_DAT_180034238;
          ppuVar33[10] = _DAT_180034230;
          ppuVar33[0xb] = puVar7;
          puVar7 = PTR_DAT_180034248;
          ppuVar33[0xc] = PTR_DAT_180034240;
          ppuVar33[0xd] = puVar7;
          puVar7 = PTR_DAT_180034258;
          ppuVar33[0xe] = PTR_DAT_180034250;
          ppuVar33[0xf] = puVar7;
          puVar7 = PTR_DAT_180034268;
          ppuVar33[0x10] = PTR_DAT_180034260;
          ppuVar33[0x11] = puVar7;
          ppuVar33[0x12] = PTR_DAT_180034270;
        }
        else {
          puVar10 = _calloc_base(1,4);
          FUN_180016ba8((LPVOID)0x0);
          if (puVar10 == (undefined4 *)0x0) {
            FUN_180016ba8(ppuVar33);
            ppuVar33 = ppuVar9;
            goto LAB_18001cd54;
          }
          puVar5 = *(ushort **)(param_1 + 0x140);
          pWVar11 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x15,
                                  (longlong *)(ppuVar33 + 3));
          pWVar12 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x14,
                                  (longlong *)(ppuVar33 + 4));
          pWVar13 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x16,
                                  (longlong *)(ppuVar33 + 5));
          pWVar14 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x17,
                                  (longlong *)(ppuVar33 + 6));
          pWVar15 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x18,
                                  (longlong *)(ppuVar33 + 7));
          pWVar16 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x50,
                                  (longlong *)(ppuVar33 + 8));
          pWVar17 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x51,
                                  (longlong *)(ppuVar33 + 9));
          pWVar18 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x1a,
                                  (longlong *)(ppuVar33 + 10));
          pWVar19 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x19,
                                  (longlong *)((longlong)ppuVar33 + 0x51));
          pWVar20 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x54,
                                  (longlong *)((longlong)ppuVar33 + 0x52));
          pWVar21 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x55,
                                  (longlong *)((longlong)ppuVar33 + 0x53));
          pWVar22 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x56,
                                  (longlong *)((longlong)ppuVar33 + 0x54));
          pWVar23 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x57,
                                  (longlong *)((longlong)ppuVar33 + 0x55));
          pWVar24 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x52,
                                  (longlong *)((longlong)ppuVar33 + 0x56));
          pWVar25 = FUN_180019c38((__crt_locale_pointers *)local_38,0,puVar5,0x53,
                                  (longlong *)((longlong)ppuVar33 + 0x57));
          pWVar26 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0x15,
                                  (longlong *)(ppuVar33 + 0xd));
          pWVar27 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0x14,
                                  (longlong *)(ppuVar33 + 0xe));
          pWVar28 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0x16,
                                  (longlong *)(ppuVar33 + 0xf));
          pWVar29 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0x17,
                                  (longlong *)(ppuVar33 + 0x10));
          pWVar30 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0x50,
                                  (longlong *)(ppuVar33 + 0x11));
          pWVar31 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0x51,
                                  (longlong *)(ppuVar33 + 0x12));
          if ((int)pWVar31 != 0 ||
              ((((((((((((((((((((int)pWVar11 != 0 || (int)pWVar12 != 0) || (int)pWVar13 != 0) ||
                              (int)pWVar14 != 0) || (int)pWVar15 != 0) || (int)pWVar16 != 0) ||
                           (int)pWVar17 != 0) || (int)pWVar18 != 0) || (int)pWVar19 != 0) ||
                        (int)pWVar20 != 0) || (int)pWVar21 != 0) || (int)pWVar22 != 0) ||
                     (int)pWVar23 != 0) || (int)pWVar24 != 0) || (int)pWVar25 != 0) ||
                  (int)pWVar26 != 0) || (int)pWVar27 != 0) || (int)pWVar28 != 0) ||
               (int)pWVar29 != 0) || (int)pWVar30 != 0)) {
            __acrt_locale_free_monetary((longlong)ppuVar33);
            FUN_180016ba8(ppuVar33);
            FUN_180016ba8(ppuVar9);
            FUN_180016ba8(puVar10);
            return 1;
          }
          pbVar32 = ppuVar33[7];
          bVar4 = *pbVar32;
          while (bVar4 != 0) {
            if ((byte)(bVar4 - 0x30) < 10) {
              *pbVar32 = bVar4 - 0x30;
LAB_18001d084:
              pbVar32 = pbVar32 + 1;
            }
            else {
              pbVar34 = pbVar32;
              if (bVar4 != 0x3b) goto LAB_18001d084;
              do {
                pbVar1 = pbVar34 + 1;
                *pbVar34 = *pbVar1;
                pbVar34 = pbVar34 + 1;
              } while (*pbVar1 != 0);
            }
            bVar4 = *pbVar32;
          }
        }
        plVar2 = (longlong *)(param_1 + 0xf8);
        *ppuVar33 = *(undefined **)*plVar2;
        ppuVar33[1] = *(undefined **)(*plVar2 + 8);
        ppuVar33[2] = *(undefined **)(*plVar2 + 0x10);
        ppuVar33[0xb] = *(undefined **)(*plVar2 + 0x58);
        ppuVar33[0xc] = *(undefined **)(*plVar2 + 0x60);
        *(undefined4 *)ppuVar9 = 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 1;
        }
        goto LAB_18001d163;
      }
LAB_18001cd54:
      FUN_180016ba8(ppuVar33);
    }
    uVar8 = 1;
  }
  return uVar8;
}




/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1800341e0) {
      FUN_180016ba8((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1800341e8) {
      FUN_180016ba8((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1800341f0) {
      FUN_180016ba8((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_180034238) {
      FUN_180016ba8((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_180034240) {
      FUN_180016ba8((undefined *)param_1[0xc]);
    }
  }
  return;
}




undefined8 FUN_18001d23c(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  ushort *puVar5;
  int *piVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  LPWSTR pWVar10;
  LPWSTR pWVar11;
  LPWSTR pWVar12;
  LPWSTR pWVar13;
  LPWSTR pWVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  byte *pbVar17;
  undefined8 uVar18;
  longlong local_38 [2];
  
  ppuVar9 = (undefined **)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x148) == 0) && (*(longlong *)(param_1 + 0x140) == 0)) {
    ppuVar16 = &PTR_DAT_1800341e0;
    ppuVar8 = ppuVar9;
LAB_18001d4b5:
    piVar6 = *(int **)(param_1 + 0xe8);
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      UNLOCK();
    }
    piVar6 = *(int **)(param_1 + 0xe0);
    if (piVar6 != (int *)0x0) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FUN_180016ba8(*(LPVOID *)(param_1 + 0xe0));
        FUN_180016ba8(*(LPVOID *)(param_1 + 0xf8));
      }
    }
    *(undefined ***)(param_1 + 0xe8) = ppuVar9;
    *(undefined ***)(param_1 + 0xe0) = ppuVar8;
    *(undefined ***)(param_1 + 0xf8) = ppuVar16;
    return 0;
  }
  uVar18 = 1;
  ppuVar16 = _calloc_base(1,0x98);
  if (ppuVar16 == (undefined **)0x0) {
    return 1;
  }
  plVar4 = *(longlong **)(param_1 + 0xf8);
  puVar7 = (undefined *)plVar4[1];
  *ppuVar16 = (undefined *)*plVar4;
  ppuVar16[1] = puVar7;
  puVar7 = (undefined *)plVar4[3];
  ppuVar16[2] = (undefined *)plVar4[2];
  ppuVar16[3] = puVar7;
  puVar7 = (undefined *)plVar4[5];
  ppuVar16[4] = (undefined *)plVar4[4];
  ppuVar16[5] = puVar7;
  puVar7 = (undefined *)plVar4[7];
  ppuVar16[6] = (undefined *)plVar4[6];
  ppuVar16[7] = puVar7;
  puVar7 = (undefined *)plVar4[9];
  ppuVar16[8] = (undefined *)plVar4[8];
  ppuVar16[9] = puVar7;
  puVar7 = (undefined *)plVar4[0xb];
  ppuVar16[10] = (undefined *)plVar4[10];
  ppuVar16[0xb] = puVar7;
  puVar7 = (undefined *)plVar4[0xd];
  ppuVar16[0xc] = (undefined *)plVar4[0xc];
  ppuVar16[0xd] = puVar7;
  puVar7 = (undefined *)plVar4[0xf];
  ppuVar16[0xe] = (undefined *)plVar4[0xe];
  ppuVar16[0xf] = puVar7;
  puVar7 = (undefined *)plVar4[0x11];
  ppuVar16[0x10] = (undefined *)plVar4[0x10];
  ppuVar16[0x11] = puVar7;
  ppuVar16[0x12] = (undefined *)plVar4[0x12];
  ppuVar8 = _malloc_base(4);
  FUN_180016ba8((LPVOID)0x0);
  if (ppuVar8 != (undefined **)0x0) {
    *(undefined4 *)ppuVar8 = 0;
    if (*(longlong *)(param_1 + 0x148) == 0) {
      *ppuVar16 = PTR_DAT_1800341e0;
      ppuVar16[1] = PTR_DAT_1800341e8;
      ppuVar16[2] = PTR_DAT_1800341f0;
      ppuVar16[0xb] = PTR_DAT_180034238;
      ppuVar16[0xc] = PTR_DAT_180034240;
      *(undefined4 *)ppuVar8 = 1;
      goto LAB_18001d4b5;
    }
    ppuVar9 = _malloc_base(4);
    FUN_180016ba8((LPVOID)0x0);
    if (ppuVar9 == (undefined **)0x0) {
      FUN_180016ba8(ppuVar16);
      ppuVar16 = ppuVar8;
    }
    else {
      *(undefined4 *)ppuVar9 = 0;
      puVar5 = *(ushort **)(param_1 + 0x148);
      pWVar10 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0xe,(longlong *)ppuVar16);
      pWVar11 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0xf,
                              (longlong *)(ppuVar16 + 1));
      pWVar12 = FUN_180019c38((__crt_locale_pointers *)local_38,1,puVar5,0x10,
                              (longlong *)(ppuVar16 + 2));
      pWVar13 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0xe,
                              (longlong *)(ppuVar16 + 0xb));
      pWVar14 = FUN_180019c38((__crt_locale_pointers *)local_38,2,puVar5,0xf,
                              (longlong *)(ppuVar16 + 0xc));
      if ((int)pWVar14 == 0 &&
          ((((int)pWVar10 == 0 && (int)pWVar11 == 0) && (int)pWVar12 == 0) && (int)pWVar13 == 0)) {
        pbVar15 = ppuVar16[2];
        while (bVar3 = *pbVar15, bVar3 != 0) {
          if ((byte)(bVar3 - 0x30) < 10) {
            *pbVar15 = bVar3 - 0x30;
LAB_18001d44f:
            pbVar15 = pbVar15 + 1;
          }
          else {
            pbVar17 = pbVar15;
            if (bVar3 != 0x3b) goto LAB_18001d44f;
            do {
              pbVar1 = pbVar17 + 1;
              *pbVar17 = *pbVar1;
              pbVar17 = pbVar17 + 1;
            } while (*pbVar1 != 0);
          }
        }
        *(undefined4 *)ppuVar8 = 1;
        *(undefined4 *)ppuVar9 = 1;
        goto LAB_18001d4b5;
      }
      __acrt_locale_free_numeric(ppuVar16);
      FUN_180016ba8(ppuVar16);
      FUN_180016ba8(ppuVar9);
      uVar18 = 0xffffffff;
      ppuVar16 = ppuVar8;
    }
  }
  FUN_180016ba8(ppuVar16);
  return uVar18;
}




void FUN_18001d524(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_180016ba8((LPVOID)*param_1);
  }
  return;
}




/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  undefined1 (*pauVar1) [32];
  short *psVar2;
  LPWSTR pWVar3;
  LPWSTR pWVar4;
  LPWSTR pWVar5;
  LPWSTR pWVar6;
  LPWSTR pWVar7;
  LPWSTR pWVar8;
  LPWSTR pWVar9;
  LPWSTR pWVar10;
  LPWSTR pWVar11;
  LPWSTR pWVar12;
  LPWSTR pWVar13;
  uint uVar14;
  __crt_lc_time_data *p_Var15;
  longlong lVar16;
  LCTYPE LVar17;
  __crt_locale_data *local_38;
  undefined8 local_30;
  
  pauVar1 = *(undefined1 (**) [32])(param_2 + 0x150);
  uVar14 = 0;
  local_30 = 0;
  local_38 = param_2;
  psVar2 = FUN_1800141a0(pauVar1);
  *(short **)(param_1 + 0x2b8) = psVar2;
  LVar17 = 0x31;
  lVar16 = 7;
  do {
    p_Var15 = param_1 + (ulonglong)((LVar17 - 0x30) % 7) * 8;
    pWVar3 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar17,
                           (longlong *)p_Var15);
    pWVar4 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar17 - 7,
                           (longlong *)(p_Var15 + 0x38));
    pWVar5 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar17,
                           (longlong *)(p_Var15 + 0x160));
    pWVar6 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar17 - 7,
                           (longlong *)(p_Var15 + 0x198));
    uVar14 = uVar14 | (uint)pWVar3 | (uint)pWVar4 | (uint)pWVar5 | (uint)pWVar6;
    LVar17 = LVar17 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  LVar17 = 0x38;
  lVar16 = 0xc;
  p_Var15 = param_1 + 0xd0;
  do {
    pWVar3 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar17 + 0xc,
                           (longlong *)(p_Var15 + -0x60));
    pWVar4 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,LVar17,
                           (longlong *)p_Var15);
    pWVar5 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar17 + 0xc,
                           (longlong *)(p_Var15 + 0x100));
    pWVar6 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,LVar17,
                           (longlong *)(p_Var15 + 0x160));
    uVar14 = uVar14 | (uint)pWVar3 | (uint)pWVar4 | (uint)pWVar5 | (uint)pWVar6;
    p_Var15 = p_Var15 + 8;
    LVar17 = LVar17 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  pWVar3 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x28,
                         (longlong *)(param_1 + 0x130));
  pWVar4 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x29,
                         (longlong *)(param_1 + 0x138));
  pWVar5 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x28,
                         (longlong *)(param_1 + 0x290));
  pWVar6 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x29,
                         (longlong *)(param_1 + 0x298));
  pWVar7 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x1f,
                         (longlong *)(param_1 + 0x140));
  pWVar8 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x20,
                         (longlong *)(param_1 + 0x148));
  pWVar9 = FUN_180019c38((__crt_locale_pointers *)&local_38,1,(ushort *)pauVar1,0x1003,
                         (longlong *)(param_1 + 0x150));
  pWVar10 = FUN_180019c38((__crt_locale_pointers *)&local_38,0,(ushort *)pauVar1,0x1009,
                          (longlong *)(param_1 + 0x158));
  pWVar11 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x1f,
                          (longlong *)(param_1 + 0x2a0));
  pWVar12 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x20,
                          (longlong *)(param_1 + 0x2a8));
  pWVar13 = FUN_180019c38((__crt_locale_pointers *)&local_38,2,(ushort *)pauVar1,0x1003,
                          (longlong *)(param_1 + 0x2b0));
  return (int)pWVar13 == 0 &&
         ((((((((((uVar14 == 0 && (int)pWVar3 == 0) && (int)pWVar4 == 0) && (int)pWVar5 == 0) &&
               (int)pWVar6 == 0) && (int)pWVar7 == 0) && (int)pWVar8 == 0) && (int)pWVar9 == 0) &&
           (int)pWVar10 == 0) && (int)pWVar11 == 0) && (int)pWVar12 == 0);
}




/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18001d524(param_1,7);
    FUN_18001d524(param_1 + 7,7);
    FUN_18001d524(param_1 + 0xe,0xc);
    FUN_18001d524(param_1 + 0x1a,0xc);
    FUN_18001d524(param_1 + 0x26,2);
    FUN_180016ba8((LPVOID)param_1[0x28]);
    FUN_180016ba8((LPVOID)param_1[0x29]);
    FUN_180016ba8((LPVOID)param_1[0x2a]);
    FUN_18001d524(param_1 + 0x2c,7);
    FUN_18001d524(param_1 + 0x33,7);
    FUN_18001d524(param_1 + 0x3a,0xc);
    FUN_18001d524(param_1 + 0x46,0xc);
    FUN_18001d524(param_1 + 0x52,2);
    FUN_180016ba8((LPVOID)param_1[0x54]);
    FUN_180016ba8((LPVOID)param_1[0x55]);
    FUN_180016ba8((LPVOID)param_1[0x56]);
    FUN_180016ba8((LPVOID)param_1[0x57]);
  }
  return;
}




/* Library Function - Single Match
    __acrt_locale_initialize_time
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_locale_initialize_time(__crt_locale_data *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  __crt_lc_time_data *p_Var4;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    ppuVar3 = &PTR_DAT_180028790;
LAB_18001da17:
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
    uVar2 = 0;
    *(undefined ***)(param_1 + 0x120) = ppuVar3;
  }
  else {
    ppuVar3 = _calloc_base(1,0x2c0);
    p_Var4 = (__crt_lc_time_data *)0x0;
    if ((__crt_lc_time_data *)ppuVar3 != (__crt_lc_time_data *)0x0) {
      bVar1 = initialize_lc_time((__crt_lc_time_data *)ppuVar3,param_1);
      if (bVar1) {
        *(undefined4 *)((longlong)ppuVar3 + 0x15c) = 1;
        FUN_180016ba8((LPVOID)0x0);
        goto LAB_18001da17;
      }
      __acrt_locale_free_time(ppuVar3);
      p_Var4 = (__crt_lc_time_data *)ppuVar3;
    }
    FUN_180016ba8(p_Var4);
    uVar2 = 1;
  }
  return uVar2;
}




undefined4 FUN_18001da3c(short *param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if ((param_1 != (short *)0x0) && (param_2 != 0)) {
    psVar3 = param_1;
    if (param_3 == 0) {
      *param_1 = 0;
    }
    else {
      do {
        if (*psVar3 == 0) {
          lVar5 = param_3 - (longlong)psVar3;
          do {
            sVar1 = *(short *)(lVar5 + (longlong)psVar3);
            *psVar3 = sVar1;
            psVar3 = psVar3 + 1;
            if (sVar1 == 0) {
              return 0;
            }
            param_2 = param_2 + -1;
          } while (param_2 != 0);
          *param_1 = 0;
          p_Var2 = FUN_180010168();
          uVar4 = 0x22;
          goto LAB_18001da63;
        }
        psVar3 = psVar3 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = 0;
    }
  }
  p_Var2 = FUN_180010168();
  uVar4 = 0x16;
LAB_18001da63:
  *(undefined4 *)p_Var2 = uVar4;
  FUN_180010fac();
  return uVar4;
}




undefined4 FUN_18001dab4(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_18001dafd:
      if (param_2 != 0) {
        psVar3 = param_1;
        lVar4 = param_2;
        if ((param_4 == 0) || (param_3 != (short *)0x0)) {
          do {
            if (*psVar3 == 0) {
              lVar5 = param_4;
              if (param_4 != -1) goto joined_r0x00018001db50;
              lVar5 = (longlong)param_3 - (longlong)psVar3;
              goto LAB_18001db34;
            }
            lVar4 = lVar4 + -1;
            psVar3 = psVar3 + 1;
          } while (lVar4 != 0);
          *param_1 = 0;
        }
        else {
          *param_1 = 0;
        }
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_18001dafd;
  p_Var2 = FUN_180010168();
  uVar6 = 0x16;
  goto LAB_18001dae0;
joined_r0x00018001db50:
  if (lVar5 == 0) goto LAB_18001db72;
  sVar1 = *param_3;
  param_3 = param_3 + 1;
  *psVar3 = sVar1;
  psVar3 = psVar3 + 1;
  if (sVar1 == 0) {
    return 0;
  }
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) goto LAB_18001db72;
  lVar5 = lVar5 + -1;
  goto joined_r0x00018001db50;
LAB_18001db72:
  if (lVar5 == 0) {
    *psVar3 = 0;
  }
  goto LAB_18001db7b;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
LAB_18001db34:
    sVar1 = *(short *)(lVar5 + (longlong)psVar3);
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) break;
  }
LAB_18001db7b:
  if (lVar4 == 0) {
    if (param_4 == -1) {
      param_1[param_2 + -1] = 0;
      uVar6 = 0x50;
    }
    else {
      *param_1 = 0;
      p_Var2 = FUN_180010168();
      uVar6 = 0x22;
LAB_18001dae0:
      *(undefined4 *)p_Var2 = uVar6;
      FUN_180010fac();
    }
  }
  return uVar6;
}




undefined4 FUN_18001dbac(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  short *psVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_18001dbff:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != 0) {
          psVar4 = param_1;
          lVar3 = param_4;
          lVar7 = param_2;
          if (param_4 == -1) {
            do {
              sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
              *psVar4 = sVar1;
              psVar4 = psVar4 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            lVar7 = 0;
          }
          else {
            do {
              lVar6 = lVar3;
              sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
              *psVar4 = sVar1;
              psVar4 = psVar4 + 1;
              if (sVar1 == 0) {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while ((lVar7 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
            lVar3 = lVar6 + -1;
            if (lVar7 == 0) {
              lVar3 = lVar6;
            }
            if (lVar3 == 0) {
              *psVar4 = 0;
            }
          }
          if (lVar7 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          p_Var2 = FUN_180010168();
          uVar5 = 0x22;
          goto LAB_18001dbdd;
        }
        *param_1 = 0;
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_18001dbff;
  p_Var2 = FUN_180010168();
  uVar5 = 0x16;
LAB_18001dbdd:
  *(undefined4 *)p_Var2 = uVar5;
  FUN_180010fac();
  return uVar5;
}




/* Library Function - Single Match
    wcscspn
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl wcscspn(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
  wVar2 = *_Str;
  pwVar1 = _Str;
  while (wVar2 != L'\0') {
    if (*_Control != L'\0') {
      wVar2 = *_Control;
      pwVar3 = _Control;
      do {
        if (*pwVar1 == wVar2) goto LAB_18001dce0;
        pwVar3 = pwVar3 + 1;
        wVar2 = *pwVar3;
      } while (wVar2 != L'\0');
    }
    pwVar1 = pwVar1 + 1;
    wVar2 = *pwVar1;
  }
LAB_18001dce0:
  return (longlong)pwVar1 - (longlong)_Str >> 1;
}




/* Library Function - Single Match
    wcspbrk
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  do {
    if (*_Str == L'\0') {
      return (wchar_t *)0x0;
    }
    if (*_Control != L'\0') {
      wVar1 = *_Control;
      pwVar2 = _Control;
      do {
        if (wVar1 == *_Str) {
          return _Str;
        }
        pwVar2 = pwVar2 + 1;
        wVar1 = *pwVar2;
      } while (wVar1 != L'\0');
    }
    _Str = _Str + 1;
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001dd1c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStackY_f8 [32];
  wchar_t local_c8 [88];
  ulonglong local_18;
  longlong lVar3;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStackY_f8;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x104;
  iVar1 = FUN_180017600(local_c8,0x55);
  if (1 < iVar1) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (local_c8[lVar2] != L'\0');
    iVar1 = FUN_18001dbac((short *)(param_1 + 600),0x55,(longlong)local_c8,lVar3 + 2);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}




/* Library Function - Single Match
    GetLocaleNameFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLangCountry(undefined8 *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  longlong lVar7;
  
  psVar5 = (short *)*param_1;
  lVar7 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (psVar5[lVar4] != 0);
  iVar6 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVar4 == 3);
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(param_1[1] + lVar7 * 2) != 0);
  *(uint *)((longlong)param_1 + 0x1c) = (uint)(lVar7 == 3);
  if (lVar4 == 3) {
    iVar6 = 2;
  }
  else {
    iVar3 = 0;
    if (psVar5 != (short *)0x0) {
      while( true ) {
        iVar6 = iVar3;
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar3 = iVar6 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar6;
  FUN_1800174b0(FUN_18001df2c,3,0,0);
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}




/* Library Function - Single Match
    GetLocaleNameFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLocaleNameFromLanguage(undefined8 *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  longlong lVar5;
  
  psVar3 = (short *)*param_1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (psVar3[lVar5] != 0);
  iVar4 = 0;
  *(uint *)(param_1 + 3) = (uint)(lVar5 == 3);
  if (lVar5 == 3) {
    iVar4 = 2;
  }
  else {
    iVar2 = 0;
    if (psVar3 != (short *)0x0) {
      while( true ) {
        iVar4 = iVar2;
        sVar1 = *psVar3;
        psVar3 = psVar3 + 1;
        if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
        iVar2 = iVar4 + 1;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar4;
  FUN_1800174b0(FUN_18001e20c,3,0,0);
  if ((*(byte *)(param_1 + 2) & 4) == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18001df2c(wchar_t *param_1)

{
  __acrt_ptd *p_Var1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  __acrt_ptd *p_Var7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  short *psVar8;
  short sVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStackY_d8 [32];
  WCHAR local_a8 [64];
  ulonglong local_28;
  
  local_28 = DAT_180034040 ^ (ulonglong)auStackY_d8;
  p_Var7 = FUN_180013b60();
  p_Var1 = p_Var7 + 0x98;
  iVar4 = FUN_180017570((ushort *)param_1,
                        (-(uint)(*(int *)(p_Var7 + 0xb4) != 0) & 0xfffff005) + 0x1002,local_a8,0x40)
  ;
  iVar5 = 0;
  if (iVar4 == 0) {
LAB_18001df8e:
    *(undefined4 *)(p_Var7 + 0xa8) = 0;
    uVar6 = 1;
  }
  else {
    iVar4 = _wcsicmp(*(wchar_t **)(p_Var7 + 0xa0),local_a8);
    lVar10 = -1;
    if (iVar4 != 0) goto LAB_18001e07f;
    iVar4 = FUN_180017570((ushort *)param_1,
                          (-(uint)(*(int *)(p_Var7 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_a8,
                          0x40);
    if (iVar4 == 0) goto LAB_18001df8e;
    iVar4 = _wcsicmp(*(wchar_t **)p_Var1,local_a8);
    if (iVar4 == 0) {
      lVar11 = -1;
      *(uint *)(p_Var7 + 0xa8) = *(uint *)(p_Var7 + 0xa8) | 0x304;
      do {
        lVar11 = lVar11 + 1;
      } while (param_1[lVar11] != L'\0');
LAB_18001e062:
      iVar4 = FUN_18001dbac((short *)(p_Var7 + 0x2f0),0x55,(longlong)param_1,lVar11 + 1);
      if (iVar4 != 0) goto LAB_18001e1f6;
    }
    else if ((*(uint *)(p_Var7 + 0xa8) & 2) == 0) {
      if ((*(int *)(p_Var7 + 0xac) == 0) ||
         (iVar4 = _wcsnicmp(*(wchar_t **)p_Var1,local_a8,(longlong)*(int *)(p_Var7 + 0xac)),
         iVar4 != 0)) {
        if ((((byte)p_Var7[0xa8] & 1) != 0) ||
           (bVar3 = FUN_18001e3b4(param_1), (int)CONCAT71(extraout_var,bVar3) == 0))
        goto LAB_18001e07f;
        *(uint *)(p_Var7 + 0xa8) = *(uint *)(p_Var7 + 0xa8) | 1;
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (param_1[lVar11] != L'\0');
      }
      else {
        *(uint *)(p_Var7 + 0xa8) = *(uint *)(p_Var7 + 0xa8) | 2;
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (param_1[lVar11] != L'\0');
      }
      goto LAB_18001e062;
    }
LAB_18001e07f:
    if ((*(uint *)(p_Var7 + 0xa8) & 0x300) != 0x300) {
      iVar4 = FUN_180017570((ushort *)param_1,
                            (-(uint)(*(int *)(p_Var7 + 0xb0) != 0) & 0xfffff002) + 0x1001,local_a8,
                            0x40);
      if (iVar4 == 0) goto LAB_18001df8e;
      iVar4 = _wcsicmp(*(wchar_t **)p_Var1,local_a8);
      if (iVar4 == 0) {
        uVar6 = *(uint *)(p_Var7 + 0xa8);
        *(uint *)(p_Var7 + 0xa8) = uVar6 | 0x200;
        if (*(int *)(p_Var7 + 0xb0) == 0) {
          if (*(int *)(p_Var7 + 0xac) != 0) {
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while (*(short *)(*(longlong *)p_Var1 + lVar11 * 2) != 0);
            if ((int)lVar11 == *(int *)(p_Var7 + 0xac)) {
              bVar3 = FUN_18001e3b4(param_1);
              if ((int)CONCAT71(extraout_var_00,bVar3) == 0) {
                psVar2 = *(short **)p_Var1;
                if (psVar2 != (short *)0x0) {
                  sVar9 = *psVar2;
                  psVar8 = psVar2;
                  iVar5 = 0;
                  while ((psVar8 = psVar8 + 1, (ushort)(sVar9 - 0x41U) < 0x1a ||
                         ((ushort)(sVar9 - 0x61U) < 0x1a))) {
                    iVar5 = iVar5 + 1;
                    sVar9 = *psVar8;
                  }
                }
                lVar11 = -1;
                do {
                  lVar11 = lVar11 + 1;
                } while (psVar2[lVar11] != 0);
                if (iVar5 == (int)lVar11) goto LAB_18001e1a5;
              }
              *(uint *)(p_Var7 + 0xa8) = *(uint *)(p_Var7 + 0xa8) | 0x100;
              if (*(short *)(p_Var7 + 0x2f0) == 0) {
                do {
                  lVar10 = lVar10 + 1;
                } while (param_1[lVar10] != L'\0');
                goto LAB_18001e192;
              }
              goto LAB_18001e1a5;
            }
          }
          *(uint *)(p_Var7 + 0xa8) = uVar6 | 0x300;
          if (*(short *)(p_Var7 + 0x2f0) == 0) {
            do {
              lVar10 = lVar10 + 1;
            } while (param_1[lVar10] != L'\0');
            goto LAB_18001e192;
          }
        }
        else {
          *(uint *)(p_Var7 + 0xa8) = uVar6 | 0x300;
          if (*(short *)(p_Var7 + 0x2f0) == 0) {
            do {
              lVar10 = lVar10 + 1;
            } while (param_1[lVar10] != L'\0');
LAB_18001e192:
            iVar5 = FUN_18001dbac((short *)(p_Var7 + 0x2f0),0x55,(longlong)param_1,lVar10 + 1);
            if (iVar5 != 0) {
LAB_18001e1f6:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
    }
LAB_18001e1a5:
    uVar6 = ~(*(uint *)(p_Var7 + 0xa8) >> 2) & 1;
  }
  return uVar6;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18001e20c(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  longlong lVar4;
  undefined1 auStackY_138 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  longlong lVar5;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStackY_138;
  p_Var3 = FUN_180013b60();
  iVar1 = FUN_180017570(param_1,(-(uint)(*(int *)(p_Var3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_108,0x78);
  if (iVar1 == 0) {
    *(undefined4 *)(p_Var3 + 0xa8) = 0;
    uVar2 = 1;
  }
  else {
    iVar1 = _wcsicmp(*(wchar_t **)(p_Var3 + 0x98),local_108);
    if (iVar1 == 0) {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (param_1[lVar4] != 0);
      iVar1 = FUN_18001dbac((short *)(p_Var3 + 0x2f0),0x55,(longlong)param_1,lVar5 + 2);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(p_Var3 + 0xa8) = *(uint *)(p_Var3 + 0xa8) | 4;
    }
    uVar2 = ~(*(uint *)(p_Var3 + 0xa8) >> 2) & 1;
  }
  return uVar2;
}




uint FUN_18001e2f8(wchar_t *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  LCTYPE LVar3;
  uint local_res8 [2];
  
  if (((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) ||
     (iVar1 = wcscmp(param_1,L"ACP"), iVar1 == 0)) {
    LVar3 = 0x20001004;
  }
  else {
    iVar1 = _wcsicmp(param_1,L"utf8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = _wcsicmp(param_1,L"utf-8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = wcscmp(param_1,L"OCP");
    if (iVar1 != 0) {
      uVar2 = FUN_1800133c8((longlong)param_1);
      return uVar2;
    }
    LVar3 = 0x2000000b;
  }
  iVar1 = FUN_180017570((ushort *)(param_2 + 600),LVar3,(LPWSTR)local_res8,2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return local_res8[0];
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_18001e3b4(wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  WCHAR local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_180034040 ^ (ulonglong)auStack_48;
  iVar1 = FUN_180017570((ushort *)param_1,0x59,local_28,9);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = wcsncmp(local_28,param_1,9);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}




/* Library Function - Single Match
    TranslateName
   
   Library: Visual Studio 2019 Release */

bool TranslateName(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  if (-1 < param_2) {
    do {
      if (iVar2 == 0) {
        return true;
      }
      iVar1 = (iVar3 + param_2) / 2;
      iVar2 = _wcsicmp((wchar_t *)*param_3,*(wchar_t **)((longlong)iVar1 * 0x10 + param_1));
      if (iVar2 == 0) {
        *param_3 = param_1 + 8 + (longlong)iVar1 * 0x10;
      }
      else if (iVar2 < 0) {
        param_2 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}




undefined8 FUN_18001e4bc(short *param_1,uint *param_2,LPWSTR param_3)

{
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  __acrt_ptd *p_Var3;
  LPWSTR pWVar4;
  LPWSTR pWVar5;
  bool bVar6;
  uint _Val;
  BOOL BVar7;
  int iVar8;
  __acrt_ptd *p_Var9;
  undefined7 extraout_var;
  ushort *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  p_Var9 = FUN_180013b60();
  p_Var2 = p_Var9 + 0x98;
  *(undefined4 *)(p_Var9 + 0xa8) = 0;
  p_Var3 = p_Var9 + 0x2f0;
  *(short **)p_Var2 = param_1;
  p_Var1 = p_Var9 + 0xa0;
  *(undefined2 *)p_Var3 = 0;
  *(short **)p_Var1 = param_1 + 0x40;
  if (param_1[0x40] != 0) {
    TranslateName(0x1800299b0,0x16,(longlong *)p_Var1);
  }
  if (**(short **)p_Var2 == 0) {
    FUN_18001dd1c((longlong)p_Var2);
LAB_18001e589:
    if (*(int *)(p_Var9 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (**(short **)p_Var1 == 0) {
      GetLocaleNameFromLanguage((undefined8 *)p_Var2);
    }
    else {
      GetLocaleNameFromLangCountry((undefined8 *)p_Var2);
    }
    if (*(int *)(p_Var9 + 0xa8) == 0) {
      bVar6 = TranslateName(0x180029590,0x40,(longlong *)p_Var2);
      if ((int)CONCAT71(extraout_var,bVar6) != 0) {
        if (**(short **)p_Var1 == 0) {
          GetLocaleNameFromLanguage((undefined8 *)p_Var2);
        }
        else {
          GetLocaleNameFromLangCountry((undefined8 *)p_Var2);
        }
      }
      goto LAB_18001e589;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    _Val = FUN_18001e2f8((wchar_t *)
                         (-(ulonglong)(param_1 != (short *)0x0) & (ulonglong)(param_1 + 0x80)),
                         (longlong)p_Var2);
  }
  else {
    _Val = GetACP();
  }
  if (((_Val != 0) && (_Val != 65000)) && (BVar7 = IsValidCodePage(_Val & 0xffff), BVar7 != 0)) {
    if (param_2 != (uint *)0x0) {
      *param_2 = _Val;
    }
    if (param_3 == (LPWSTR)0x0) {
      return 1;
    }
    pWVar4 = param_3 + 0x90;
    *pWVar4 = L'\0';
    lVar11 = -1;
    do {
      lVar12 = lVar11;
      lVar11 = lVar12 + 1;
    } while (*(short *)(p_Var3 + lVar11 * 2) != 0);
    iVar8 = FUN_18001dbac(pWVar4,0x55,(longlong)p_Var3,lVar12 + 2);
    if (iVar8 != 0) {
LAB_18001e719:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar8 = FUN_180017570((ushort *)pWVar4,0x1001,param_3,0x40);
    if (iVar8 != 0) {
      pWVar5 = param_3 + 0x40;
      iVar8 = FUN_180017570((ushort *)pWVar4,0x1002,pWVar5,0x40);
      if ((iVar8 != 0) &&
         (((puVar10 = FUN_1800216dc((ushort *)pWVar5,0x5f), puVar10 == (ushort *)0x0 &&
           (puVar10 = FUN_1800216dc((ushort *)pWVar5,0x2e), puVar10 == (ushort *)0x0)) ||
          (iVar8 = FUN_180017570((ushort *)pWVar4,7,pWVar5,0x40), iVar8 != 0)))) {
        if (_Val != 0xfde9) {
          _itow_s(_Val,param_3 + 0x80,0x10,10);
          return 1;
        }
        iVar8 = FUN_18001dbac(param_3 + 0x80,0x10,0x18002a538,5);
        if (iVar8 == 0) {
          return 1;
        }
        goto LAB_18001e719;
      }
    }
  }
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18001e730(ushort *param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  __acrt_ptd *p_Var3;
  __acrt_ptd *p_Var4;
  short *psVar5;
  uint uVar6;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStack_128;
  p_Var3 = FUN_180013b60();
  p_Var4 = FUN_180013b60();
  puVar1 = *(uint **)(p_Var4 + 0x3a0);
  Locale = FUN_18001ecd0(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(p_Var3 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_108,0x78);
  uVar6 = 0;
  if (iVar2 == 0) {
    *puVar1 = 0;
    uVar6 = 1;
  }
  else {
    iVar2 = _wcsicmp(*(wchar_t **)(p_Var3 + 0xa0),local_108);
    if (iVar2 == 0) {
      psVar5 = &DAT_18002a568;
      do {
        if ((short)Locale == *psVar5) goto LAB_18001e7e5;
        uVar6 = uVar6 + 1;
        psVar5 = psVar5 + 1;
      } while (uVar6 < 10);
      *puVar1 = *puVar1 | 4;
      puVar1[2] = Locale;
      puVar1[1] = Locale;
    }
LAB_18001e7e5:
    uVar6 = ~(*puVar1 >> 2) & 1;
  }
  return uVar6;
}




/* Library Function - Single Match
    GetLcidFromLangCountry
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLangCountry(uint *param_1)

{
  short sVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  p_Var3 = FUN_180013b60();
  lVar6 = -1;
  lVar7 = -1;
  iVar8 = 0;
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(*(longlong *)(p_Var3 + 0x98) + lVar7 * 2) != 0);
  *(uint *)(p_Var3 + 0xb0) = (uint)(lVar7 == 3);
  do {
    lVar6 = lVar6 + 1;
  } while (*(short *)(*(longlong *)(p_Var3 + 0xa0) + lVar6 * 2) != 0);
  *(uint *)(p_Var3 + 0xb4) = (uint)(lVar6 == 3);
  param_1[1] = 0;
  iVar5 = 2;
  if (*(int *)(p_Var3 + 0xb0) == 0) {
    psVar4 = *(short **)(p_Var3 + 0x98);
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar5 = iVar8, 0x19 < (ushort)(sVar1 - 0x61U)))
      break;
      iVar8 = iVar8 + 1;
    }
  }
  *(int *)(p_Var3 + 0xac) = iVar5;
  EnumSystemLocalesW(FUN_18001e980,1);
  uVar2 = *param_1;
  if ((uVar2 >> 8 & 1) == 0 || ((uVar2 & 7) == 0 || (uVar2 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}




/* Library Function - Single Match
    GetLcidFromLanguage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void GetLcidFromLanguage(byte *param_1)

{
  short sVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  
  p_Var2 = FUN_180013b60();
  lVar5 = -1;
  iVar6 = 0;
  psVar4 = *(short **)(p_Var2 + 0x98);
  do {
    lVar5 = lVar5 + 1;
  } while (psVar4[lVar5] != 0);
  *(uint *)(p_Var2 + 0xb0) = (uint)(lVar5 == 3);
  iVar3 = 2;
  if (lVar5 != 3) {
    while( true ) {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      if ((0x19 < (ushort)(sVar1 - 0x41U)) && (iVar3 = iVar6, 0x19 < (ushort)(sVar1 - 0x61U)))
      break;
      iVar6 = iVar6 + 1;
    }
  }
  *(int *)(p_Var2 + 0xac) = iVar3;
  EnumSystemLocalesW(FUN_18001ebc8,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18001e980(ushort *param_1)

{
  __acrt_ptd *p_Var1;
  uint *puVar2;
  bool bVar3;
  uint Locale;
  int iVar4;
  __acrt_ptd *p_Var5;
  __acrt_ptd *p_Var6;
  longlong lVar7;
  short *psVar8;
  undefined7 extraout_var;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  WCHAR local_118 [120];
  ulonglong local_28;
  
  local_28 = DAT_180034040 ^ (ulonglong)auStack_138;
  p_Var5 = FUN_180013b60();
  p_Var1 = p_Var5 + 0x98;
  p_Var6 = FUN_180013b60();
  puVar2 = *(uint **)(p_Var6 + 0x3a0);
  Locale = FUN_18001ecd0(param_1);
  iVar4 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(p_Var5 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_118,0x78);
  if (iVar4 == 0) goto LAB_18001eb97;
  iVar4 = _wcsicmp(*(wchar_t **)(p_Var5 + 0xa0),local_118);
  lVar11 = -1;
  if (iVar4 != 0) goto LAB_18001eacc;
  iVar4 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(p_Var5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_118,0x78);
  if (iVar4 == 0) goto LAB_18001eb97;
  iVar4 = _wcsicmp(*(wchar_t **)p_Var1,local_118);
  uVar9 = *puVar2;
  if (iVar4 == 0) {
    uVar9 = uVar9 | 0x304;
    puVar2[1] = Locale;
LAB_18001eac7:
    puVar2[2] = Locale;
    *puVar2 = uVar9;
  }
  else if ((uVar9 & 2) == 0) {
    if (*(int *)(p_Var5 + 0xac) != 0) {
      iVar4 = _wcsnicmp(*(wchar_t **)p_Var1,local_118,(longlong)*(int *)(p_Var5 + 0xac));
      uVar9 = *puVar2;
      if (iVar4 == 0) {
        puVar2[2] = Locale;
        *puVar2 = uVar9 | 2;
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(short *)(*(longlong *)p_Var1 + lVar7 * 2) != 0);
        if ((int)lVar7 == *(int *)(p_Var5 + 0xac)) {
          puVar2[1] = Locale;
        }
        goto LAB_18001eacc;
      }
    }
    if ((uVar9 & 1) == 0) {
      uVar10 = 0;
      psVar8 = &DAT_18002a568;
      do {
        if ((short)Locale == *psVar8) goto LAB_18001eacc;
        uVar10 = uVar10 + 1;
        psVar8 = psVar8 + 1;
      } while (uVar10 < 10);
      uVar9 = uVar9 | 1;
      goto LAB_18001eac7;
    }
  }
LAB_18001eacc:
  if ((*puVar2 & 0x300) == 0x300) goto LAB_18001eb8b;
  iVar4 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(p_Var5 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_118,0x78);
  if (iVar4 == 0) {
LAB_18001eb97:
    *puVar2 = 0;
    return 1;
  }
  iVar4 = _wcsicmp(*(wchar_t **)p_Var1,local_118);
  if (iVar4 == 0) {
    uVar9 = *puVar2;
    *puVar2 = uVar9 | 0x200;
    if ((*(int *)(p_Var5 + 0xb0) == 0) && (*(int *)(p_Var5 + 0xac) != 0)) {
      do {
        lVar11 = lVar11 + 1;
      } while (*(short *)(*(longlong *)p_Var1 + lVar11 * 2) != 0);
      if ((int)lVar11 == *(int *)(p_Var5 + 0xac)) {
        iVar4 = 1;
        goto LAB_18001eb70;
      }
    }
    *puVar2 = uVar9 | 0x300;
  }
  else {
    if (((*(int *)(p_Var5 + 0xb0) != 0) || (*(int *)(p_Var5 + 0xac) == 0)) ||
       (iVar4 = _wcsicmp(*(wchar_t **)p_Var1,local_118), iVar4 != 0)) goto LAB_18001eb8b;
    iVar4 = 0;
LAB_18001eb70:
    bVar3 = FUN_18001edd0(Locale,iVar4);
    if ((int)CONCAT71(extraout_var,bVar3) == 0) goto LAB_18001eb8b;
    *puVar2 = *puVar2 | 0x100;
  }
  if (puVar2[1] == 0) {
    puVar2[1] = Locale;
  }
LAB_18001eb8b:
  return ~(*puVar2 >> 2) & 1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18001ebc8(ushort *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint Locale;
  int iVar3;
  __acrt_ptd *p_Var4;
  __acrt_ptd *p_Var5;
  undefined7 extraout_var;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStack_128;
  p_Var4 = FUN_180013b60();
  p_Var5 = FUN_180013b60();
  puVar1 = *(uint **)(p_Var5 + 0x3a0);
  Locale = FUN_18001ecd0(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(p_Var4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar3 == 0) {
    *puVar1 = 0;
    return 1;
  }
  iVar3 = _wcsicmp(*(wchar_t **)(p_Var4 + 0x98),local_108);
  if (iVar3 == 0) {
    if (*(int *)(p_Var4 + 0xb0) == 0) {
      iVar3 = 1;
      goto LAB_18001ec8a;
    }
  }
  else {
    if (((*(int *)(p_Var4 + 0xb0) != 0) || (*(int *)(p_Var4 + 0xac) == 0)) ||
       (iVar3 = _wcsicmp(*(wchar_t **)(p_Var4 + 0x98),local_108), iVar3 != 0)) goto LAB_18001eca1;
    iVar3 = 0;
LAB_18001ec8a:
    bVar2 = FUN_18001edd0(Locale,iVar3);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) goto LAB_18001eca1;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_18001eca1:
  return ~(*puVar1 >> 2) & 1;
}




int FUN_18001ecd0(ushort *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar3 = *param_1;
  iVar4 = 0;
  do {
    param_1 = param_1 + 1;
    if (uVar3 == 0) {
      return iVar4;
    }
    if ((ushort)(uVar3 - 0x61) < 6) {
      sVar1 = -0x27;
LAB_18001ecfd:
      uVar2 = uVar3 + sVar1;
    }
    else {
      uVar2 = uVar3;
      if ((ushort)(uVar3 - 0x41) < 6) {
        sVar1 = -7;
        goto LAB_18001ecfd;
      }
    }
    uVar3 = *param_1;
    iVar4 = iVar4 * 0x10 + -0x30 + (uint)uVar2;
  } while( true );
}




/* Library Function - Single Match
    ProcessCodePage
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

UINT ProcessCodePage(wchar_t *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  UINT UVar3;
  UINT local_res8 [2];
  
  if (((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) ||
     (iVar1 = wcscmp(param_1,L"ACP"), iVar1 == 0)) {
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      UVar3 = GetACP();
      return UVar3;
    }
  }
  else {
    iVar1 = wcscmp(param_1,L"OCP");
    if (iVar1 != 0) {
      uVar2 = FUN_1800133c8((longlong)param_1);
      return uVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0;
}




bool FUN_18001edd0(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  longlong lVar5;
  short *psVar6;
  bool bVar7;
  uint local_res8 [2];
  
  p_Var4 = FUN_180013b60();
  iVar3 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
  if (iVar3 == 0) {
    bVar7 = false;
  }
  else if ((param_1 == local_res8[0]) || (param_2 == 0)) {
    bVar7 = true;
  }
  else {
    psVar2 = *(short **)(p_Var4 + 0x98);
    iVar3 = 0;
    sVar1 = *psVar2;
    psVar6 = psVar2;
    while ((psVar6 = psVar6 + 1, (ushort)(sVar1 - 0x41U) < 0x1a || ((ushort)(sVar1 - 0x61U) < 0x1a))
          ) {
      iVar3 = iVar3 + 1;
      sVar1 = *psVar6;
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar2[lVar5] != 0);
    bVar7 = iVar3 != (int)lVar5;
  }
  return bVar7;
}




/* Library Function - Single Match
    TranslateName
   
   Library: Visual Studio 2019 Release */

ulonglong TranslateName(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (-1 < param_2) {
    do {
      iVar1 = (iVar4 + param_2) / 2;
      iVar2 = _wcsicmp((wchar_t *)*param_3,*(wchar_t **)((longlong)iVar1 * 0x10 + param_1));
      in_RAX = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) {
        lVar3 = param_1 + 8 + (longlong)iVar1 * 0x10;
        *param_3 = lVar3;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      if (iVar2 < 0) {
        param_2 = iVar1 + -1;
      }
      else {
        iVar4 = iVar1 + 1;
      }
    } while (iVar4 <= param_2);
  }
  return in_RAX & 0xffffffffffffff00;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __acrt_get_qualified_locale_downlevel
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_get_qualified_locale_downlevel(longlong param_1,UINT *param_2,LPWSTR param_3)

{
  short *psVar1;
  UINT _Val;
  BOOL BVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  __acrt_ptd *p_Var7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  LCID local_50;
  ulonglong local_48;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStack_78;
  p_Var4 = FUN_180013b60();
  local_58 = 0;
  local_50 = 0;
  p_Var5 = FUN_180013b60();
  p_Var7 = p_Var4 + 0xa0;
  *(undefined8 **)(p_Var5 + 0x3a0) = &local_58;
  psVar1 = (short *)(param_1 + 0x80);
  *(longlong *)(p_Var4 + 0x98) = param_1;
  *(short **)p_Var7 = psVar1;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    TranslateName(0x1800299b0,DAT_180029b20 + -1,(longlong *)p_Var7);
  }
  uVar6 = local_58;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(p_Var4 + 0x98) == (short *)0x0) || (**(short **)(p_Var4 + 0x98) == 0)) {
    if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
      local_58._4_4_ = SUB84(uVar6,4);
      local_58 = CONCAT44(local_58._4_4_,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(uint)local_58);
    }
    else {
      p_Var7 = FUN_180013b60();
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(*(longlong *)(p_Var7 + 0xa0) + lVar8 * 2) != 0);
      *(uint *)(p_Var7 + 0xb4) = (uint)(lVar8 == 3);
      EnumSystemLocalesW(FUN_18001e730,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
  }
  else {
    if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
      GetLcidFromLanguage((byte *)&local_58);
    }
    else {
      GetLcidFromLangCountry((uint *)&local_58);
    }
    if ((uint)local_58 != 0) goto LAB_18001f08a;
    uVar6 = TranslateName(0x180029590,DAT_1800299a0 + -1,(longlong *)(p_Var4 + 0x98));
    if ((char)uVar6 != '\0') {
      if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
        GetLcidFromLanguage((byte *)&local_58);
      }
      else {
        GetLcidFromLangCountry((uint *)&local_58);
      }
    }
  }
  if ((uint)local_58 == 0) {
    return 0;
  }
LAB_18001f08a:
  _Val = ProcessCodePage((wchar_t *)(-(ulonglong)(param_1 != 0) & param_1 + 0x100U),
                         (longlong)&local_58);
  if ((_Val != 0) && (BVar2 = IsValidCodePage(_Val & 0xffff), BVar2 != 0)) {
    BVar2 = IsValidLocale(local_58._4_4_,1);
    if (BVar2 != 0) {
      if (param_2 != (UINT *)0x0) {
        *param_2 = _Val;
      }
      FUN_180017740(local_58._4_4_,(wchar_t *)(p_Var4 + 0x2f0),0x55,0);
      if (param_3 != (LPWSTR)0x0) {
        FUN_180017740(local_58._4_4_,param_3 + 0x90,0x55,0);
        iVar3 = GetLocaleInfoW(local_58._4_4_,0x1001,param_3,0x40);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = GetLocaleInfoW(local_50,0x1002,param_3 + 0x40,0x40);
        if (iVar3 == 0) {
          return 0;
        }
        _itow_s(_Val,param_3 + 0x80,0x10,10);
      }
      return 1;
    }
  }
  return 0;
}




byte FUN_18001f184(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180059280)) {
      return *(byte *)((&DAT_180058e80)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 9;
    FUN_180010fac();
  }
  return 0;
}




void FUN_18001f1e4(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  uVar1 = FUN_1800206e8((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}




longlong FUN_18001f228(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                      longlong param_5)

{
  byte *pbVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  pbVar5 = (byte *)*param_2;
  lVar4 = 0;
  puVar3 = param_1;
  if (param_1 == (ushort *)0x0) {
    while( true ) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      uVar6 = FUN_1800206e8(0,pbVar5,uVar6,param_4,param_5);
      if (uVar6 == 0xffffffffffffffff) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (uVar6 == 0) break;
      if (uVar6 == 4) {
        lVar4 = lVar4 + 1;
      }
      pbVar5 = pbVar5 + uVar6;
      lVar4 = lVar4 + 1;
    }
  }
  else {
    for (; pbVar1 = pbVar5, param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      uVar6 = FUN_1800206e8((ulonglong)local_res8,pbVar5,uVar6,param_4,param_5);
      if (uVar6 == 0xffffffffffffffff) {
        *param_2 = pbVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      pbVar1 = (byte *)0x0;
      if (uVar6 == 0) {
        *puVar3 = 0;
        break;
      }
      uVar2 = local_res8[0];
      if (0xffff < local_res8[0]) {
        pbVar1 = pbVar5;
        if (param_3 < 2) break;
        local_res8[0] = local_res8[0] - 0x10000;
        param_3 = param_3 - 1;
        *puVar3 = (ushort)(local_res8[0] >> 10) | 0xd800;
        puVar3 = puVar3 + 1;
        uVar2 = (uint)((ushort)local_res8[0] & 0x3ff | 0xdc00);
      }
      *puVar3 = (ushort)uVar2;
      pbVar5 = pbVar5 + uVar6;
      puVar3 = puVar3 + 1;
    }
    *param_2 = pbVar1;
    lVar4 = (longlong)puVar3 - (longlong)param_1 >> 1;
  }
  return lVar4;
}




/* Library Function - Single Match
    _putwch_nolock
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

wint_t __cdecl _putwch_nolock(wchar_t _WCh)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  wchar_t local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = _WCh;
  bVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) ||
     (BVar2 = __dcrt_write_console(local_res8,1,local_res10), BVar2 == 0)) {
    local_res8[0] = L'\xffff';
  }
  return local_res8[0];
}




BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018001f408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}




undefined4 FUN_18001f410(void)

{
  return DAT_1800595c0;
}




int FUN_18001f418(uint param_1,wchar_t *param_2,int param_3)

{
  undefined1 (*_Src) [32];
  int iVar1;
  int iVar2;
  errno_t eVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  if (((((param_1 & 0xfffff3ff) != 0) || (param_1 == 0xc00)) &&
      ((param_2 != (wchar_t *)0x0 || (param_3 < 1)))) && (-1 < param_3)) {
    iVar5 = 0;
    iVar6 = 0xe3;
    do {
      iVar2 = (iVar6 + iVar5) / 2;
      if (param_1 == *(uint *)(&DAT_18002a580 + (longlong)iVar2 * 0x10)) {
        if (iVar2 < 0) {
          return 0;
        }
        _Src = (undefined1 (*) [32])(&PTR_DAT_18002a588)[(longlong)iVar2 * 2];
        uVar4 = FUN_18001230c(_Src,0x55);
        if (0 < param_3) {
          if (param_3 <= (int)uVar4) {
            return 0;
          }
          eVar3 = wcscpy_s(param_2,(longlong)param_3,(wchar_t *)_Src);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return (int)uVar4 + 1;
      }
      iVar1 = iVar2 + -1;
      if (-1 < (int)(param_1 - *(uint *)(&DAT_18002a580 + (longlong)iVar2 * 0x10))) {
        iVar5 = iVar2 + 1;
        iVar1 = iVar6;
      }
      iVar6 = iVar1;
    } while (iVar5 <= iVar6);
  }
  return 0;
}




undefined4 FUN_18001f500(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (ushort *)0x0) {
    iVar3 = 0;
    iVar4 = 0xe3;
    do {
      iVar1 = (iVar4 + iVar3) / 2;
      iVar2 = __ascii_wcsnicmp(param_1,(ushort *)(&PTR_DAT_18002bfd0)[(longlong)iVar1 * 2],0x55);
      if (iVar2 == 0) {
        iVar3 = *(int *)(&DAT_18002bfd8 + (longlong)iVar1 * 0x10);
        if (iVar3 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar3) {
          return 0;
        }
        return *(undefined4 *)(&DAT_18002a580 + (longlong)iVar3 * 0x10);
      }
      if (iVar2 < 0) {
        iVar4 = iVar1 + -1;
      }
      else {
        iVar3 = iVar1 + 1;
      }
    } while (iVar3 <= iVar4);
  }
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18001f5a4(byte *param_1,undefined8 *param_2,ulonglong param_3,int *param_4,
                      longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  byte local_48 [8];
  ulonglong local_40;
  byte *pbVar4;
  
  local_40 = DAT_180034040 ^ (ulonglong)auStack_78;
  puVar6 = (ushort *)*param_2;
  local_58 = param_5;
  pbVar4 = param_1;
  puVar7 = puVar6;
  local_50 = param_4;
  if (param_1 == (byte *)0x0) {
    lVar5 = 0;
    lVar3 = FUN_1800209f4(local_48,(uint)*puVar6,param_4,param_5);
    lVar1 = local_58;
    while (lVar3 != -1) {
      if ((lVar3 != 0) && (local_48[lVar3 + -1] == 0)) {
        return lVar3 + -1 + lVar5;
      }
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + lVar3;
      lVar3 = FUN_1800209f4(local_48,(uint)*puVar6,param_4,lVar1);
    }
  }
  else {
    while( true ) {
      pbVar8 = local_48;
      if (3 < param_3) {
        pbVar8 = pbVar4;
      }
      uVar2 = FUN_1800209f4(pbVar8,(uint)*puVar6,local_50,local_58);
      if (uVar2 == 0xffffffffffffffff) {
        *param_2 = puVar7;
        return -1;
      }
      if (pbVar8 != pbVar4) {
        if (param_3 < uVar2) goto LAB_18001f64e;
        FUN_1800217d0((undefined8 *)pbVar4,(undefined8 *)pbVar8,uVar2);
      }
      if ((uVar2 != 0) && (pbVar4[uVar2 - 1] == 0)) break;
      puVar6 = puVar6 + 1;
      if (uVar2 != 0) {
        puVar7 = puVar6;
      }
      param_3 = param_3 - uVar2;
      pbVar4 = pbVar4 + uVar2;
    }
    puVar7 = (ushort *)0x0;
    pbVar4 = pbVar4 + (uVar2 - 1);
LAB_18001f64e:
    lVar3 = (longlong)pbVar4 - (longlong)param_1;
    *param_2 = puVar7;
  }
  return lVar3;
}




/* Library Function - Single Match
    __ascii_wcsnicmp
   
   Library: Visual Studio 2019 Release */

int __ascii_wcsnicmp(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar1 + 0x20;
    if (0x19 < uVar1 - 0x41) {
      uVar3 = (uint)uVar1;
    }
    uVar4 = uVar2 + 0x20;
    if (0x19 < uVar2 - 0x41) {
      uVar4 = (uint)uVar2;
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}




/* Library Function - Single Match
    _wcsnicmp
   
   Library: Visual Studio 2019 Release */

int __cdecl _wcsnicmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_180058e68 != 0) {
    iVar1 = FUN_18001f78c(_Str1,_Str2,_MaxCount,(__crt_locale_pointers *)0x0);
    return iVar1;
  }
  if ((_Str1 != (wchar_t *)0x0) && (_Str2 != (wchar_t *)0x0)) {
    iVar1 = __ascii_wcsnicmp((ushort *)_Str1,(ushort *)_Str2,_MaxCount);
    return iVar1;
  }
  p_Var2 = FUN_180010168();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_180010fac();
  return 0x7fffffff;
}




int FUN_18001f78c(WCHAR *param_1,WCHAR *param_2,longlong param_3,__crt_locale_pointers *param_4)

{
  WCHAR WVar1;
  ushort uVar2;
  ushort extraout_AX;
  ushort uVar3;
  ushort extraout_AX_00;
  int iVar4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_38;
  longlong local_30 [2];
  char local_20;
  
  if ((param_1 == (WCHAR *)0x0) || (param_2 == (WCHAR *)0x0)) {
    p_Var5 = FUN_180010168();
    *(undefined4 *)p_Var5 = 0x16;
    FUN_180010fac();
    iVar4 = 0x7fffffff;
  }
  else if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_4);
    lVar7 = local_30[0];
    if (*(longlong *)(local_30[0] + 0x138) == 0) {
      iVar4 = __ascii_wcsnicmp((ushort *)param_1,(ushort *)param_2,param_3);
    }
    else {
      do {
        WVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((ushort)WVar1 < 0x100) {
          uVar6 = (ulonglong)(byte)WVar1;
          if (((&DAT_180028192)[uVar6 * 2] & 1) != 0) {
            uVar6 = (ulonglong)*(byte *)(uVar6 + *(longlong *)(lVar7 + 0x110));
          }
          uVar2 = (ushort)uVar6;
        }
        else {
          FUN_18001fad4(WVar1,(__crt_locale_pointers *)local_30);
          lVar7 = local_30[0];
          uVar2 = extraout_AX;
        }
        WVar1 = *param_2;
        param_2 = param_2 + 1;
        if ((ushort)WVar1 < 0x100) {
          uVar6 = (ulonglong)(byte)WVar1;
          if (((&DAT_180028192)[uVar6 * 2] & 1) != 0) {
            uVar6 = (ulonglong)*(byte *)(uVar6 + *(longlong *)(lVar7 + 0x110));
          }
          uVar3 = (ushort)uVar6;
        }
        else {
          FUN_18001fad4(WVar1,(__crt_locale_pointers *)local_30);
          lVar7 = local_30[0];
          uVar3 = extraout_AX_00;
        }
        iVar4 = (uint)uVar2 - (uint)uVar3;
      } while (((iVar4 == 0) && (uVar2 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    }
    if (local_20 != '\0') {
      *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
    }
  }
  return iVar4;
}




undefined4 FUN_18001f8e0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  char *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_18001f933:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = '\0';
          return 0;
        }
        if (param_3 != 0) {
          pcVar4 = param_1;
          lVar3 = param_4;
          lVar7 = param_2;
          if (param_4 == -1) {
            do {
              cVar1 = pcVar4[param_3 - (longlong)param_1];
              *pcVar4 = cVar1;
              pcVar4 = pcVar4 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            lVar7 = 0;
          }
          else {
            do {
              lVar6 = lVar3;
              cVar1 = pcVar4[param_3 - (longlong)param_1];
              *pcVar4 = cVar1;
              pcVar4 = pcVar4 + 1;
              if (cVar1 == '\0') {
                return 0;
              }
              lVar7 = lVar7 + -1;
            } while ((lVar7 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
            lVar3 = lVar6 + -1;
            if (lVar7 == 0) {
              lVar3 = lVar6;
            }
            if (lVar3 == 0) {
              *pcVar4 = '\0';
            }
          }
          if (lVar7 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          p_Var2 = FUN_180010168();
          uVar5 = 0x22;
          goto LAB_18001f911;
        }
        *param_1 = '\0';
      }
    }
  }
  else if (param_1 != (char *)0x0) goto LAB_18001f933;
  p_Var2 = FUN_180010168();
  uVar5 = 0x16;
LAB_18001f911:
  *(undefined4 *)p_Var2 = uVar5;
  FUN_180010fac();
  return uVar5;
}




/* Library Function - Single Match
    _get_fpsr
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _get_fpsr(void)

{
  return MXCSR;
}




void FUN_18001f9f0(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}




/* Library Function - Single Match
    _fclrf
   
   Library: Visual Studio */

void _fclrf(void)

{
  MXCSR = MXCSR & 0xffffffc0;
  return;
}




undefined8 FUN_18001fa30(byte *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar3 = 1;
        bVar5 = 0xc0;
        lVar4 = lVar3;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_18001fac7:
          uVar2 = FUN_180021054(param_3,param_4);
          return uVar2;
        }
        lVar3 = 2;
        bVar5 = 0xe0;
        lVar4 = lVar3;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_18001fac7;
        lVar3 = 3;
        bVar5 = 0xf0;
        lVar4 = lVar3;
      }
      do {
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar3] = bVar1 & 0x3f | 0x80;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *param_1 = (byte)param_2 | bVar5;
      uVar2 = FUN_18002104c(lVar4 + 1,param_3);
      return uVar2;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}




WCHAR FUN_18001fad4(WCHAR param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  WCHAR local_res8 [8];
  WCHAR local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (param_1 == L'\xffff') goto LAB_18001fbc0;
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if ((ushort)local_res8[0] < 0x80) {
      if (((&DAT_180028192)[(ulonglong)bVar2 * 2] & 1) == 0) {
        param_2 = (__crt_locale_pointers *)(ulonglong)bVar2;
      }
      else {
LAB_18001fb54:
        param_2 = (__crt_locale_pointers *)
                  (ulonglong)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
      }
    }
    else {
LAB_18001fb70:
      iVar1 = __acrt_LCMapStringW(*(ushort **)(local_20 + 0x138),0x100,
                                  (undefined1 (*) [32])local_res8,1,local_res18,1);
      param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res8[0];
      if (iVar1 != 0) {
        param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res18[0];
      }
    }
  }
  else {
    param_2 = (__crt_locale_pointers *)(ulonglong)(ushort)local_res8[0];
    if ((ushort)local_res8[0] < 0x100) {
      if (((&DAT_180028192)[((ulonglong)param_2 & 0xff) * 2] & 1) != 0) goto LAB_18001fb54;
      param_2 = (__crt_locale_pointers *)(ulonglong)bVar2;
    }
    else if (*(longlong *)(local_20 + 0x138) != 0) goto LAB_18001fb70;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
LAB_18001fbc0:
  return (WCHAR)param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001fbd0(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 auStack_438 [62];
  undefined8 auStack_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_180034040 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    p_Var3 = FUN_180010168();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_180010fac();
  }
  else if (1 < param_2) {
    local_448 = 0;
    puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_18001fc70:
    while (uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar9) {
      lVar5 = (uVar9 >> 1) * param_3;
      puVar7 = param_1 + lVar5;
      iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,puVar7);
      if ((0 < iVar2) && (puVar6 = puVar7, uVar9 = param_3, param_1 != puVar7)) {
        do {
          uVar1 = puVar6[-lVar5];
          puVar6[-lVar5] = *puVar6;
          *puVar6 = uVar1;
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar9 != 0);
      }
      iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(param_1,puVar10);
      if ((0 < iVar2) && (param_1 != puVar10)) {
        puVar6 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
          puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(puVar7);
      puVar6 = param_1;
      puVar8 = puVar10;
      if ((0 < iVar2) && (puVar7 != puVar10)) {
        puVar4 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar4[(longlong)puVar7 - (longlong)puVar10];
          puVar4[(longlong)puVar7 - (longlong)puVar10] = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
LAB_18001fe20:
      puVar4 = puVar7;
      if (puVar6 < puVar4) {
        do {
          puVar6 = puVar6 + param_3;
          if (puVar4 <= puVar6) goto LAB_18001fe50;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(puVar6);
        } while (iVar2 < 1);
      }
      else {
LAB_18001fe50:
        do {
          puVar6 = puVar6 + param_3;
          if (puVar10 < puVar6) break;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(puVar6);
        } while (iVar2 < 1);
      }
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + -param_3;
        if (puVar8 <= puVar4) break;
        iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(puVar8);
      } while (0 < iVar2);
      if (puVar6 <= puVar8) {
        if (puVar8 != puVar6) {
          puVar7 = puVar8;
          uVar9 = param_3;
          do {
            uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
            puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar7 = puVar6;
        if (puVar4 != puVar8) {
          puVar7 = puVar4;
        }
        goto LAB_18001fe20;
      }
      if (puVar4 < puVar7) {
        do {
          puVar7 = puVar7 + -param_3;
          if (puVar7 <= puVar4) goto LAB_18001ff07;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(puVar7);
        } while (iVar2 == 0);
      }
      else {
LAB_18001ff07:
        do {
          puVar7 = puVar7 + -param_3;
          if (puVar7 <= param_1) break;
          iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(puVar7);
        } while (iVar2 == 0);
      }
      if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6)
      goto LAB_18001ff6d;
      if (param_1 < puVar7) {
        auStack_438[local_448] = param_1;
        auStack_248[local_448] = puVar7;
        local_448 = local_448 + 1;
      }
      param_1 = puVar6;
      if (puVar10 <= puVar6) goto LAB_18001fd03;
    }
    for (; puVar6 = param_1, puVar7 = param_1, param_1 < puVar10; puVar10 = puVar10 + -param_3) {
      while (puVar7 = puVar7 + param_3, puVar7 <= puVar10) {
        iVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e8)(puVar7,puVar6);
        if (0 < iVar2) {
          puVar6 = puVar7;
        }
      }
      if (puVar6 != puVar10) {
        puVar7 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar10];
          puVar7[(longlong)puVar6 - (longlong)puVar10] = *puVar7;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    goto LAB_18001fd03;
  }
  return;
LAB_18001ff6d:
  if (puVar6 < puVar10) {
    auStack_438[local_448] = puVar6;
    auStack_248[local_448] = puVar10;
    local_448 = local_448 + 1;
  }
  puVar10 = puVar7;
  if (puVar7 <= param_1) {
LAB_18001fd03:
    local_448 = local_448 + -1;
    if (local_448 < 0) {
      return;
    }
    param_1 = (undefined1 *)auStack_438[local_448];
    puVar10 = (undefined1 *)auStack_248[local_448];
  }
  goto LAB_18001fc70;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Different Base Names
    fallbackMethod
    strpbrk
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl FID_conflict_fallbackMethod(char *_Str,char *_Control)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 auStack_58 [32];
  byte abStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180034040 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  do {
    if (0x1f < uVar3) {
      __report_rangecheckfailure();
      pcVar2 = (code *)swi(3);
      pcVar4 = (char *)(*pcVar2)();
      return pcVar4;
    }
    abStack_38[uVar3] = 0;
    uVar3 = uVar3 + 1;
  } while ((longlong)uVar3 < 0x20);
  bVar1 = *_Control;
  while (bVar1 != 0) {
    _Control = (char *)((byte *)_Control + 1);
    abStack_38[bVar1 >> 3] = abStack_38[bVar1 >> 3] | (byte)(1 << (bVar1 & 7));
    bVar1 = *_Control;
  }
  while( true ) {
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    if ((abStack_38[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) break;
    _Str = (char *)((byte *)_Str + 1);
  }
  return (char *)(byte *)_Str;
}




/* WARNING: Removing unreachable block (ram,0x00018002031e) */
/* WARNING: Removing unreachable block (ram,0x000180020317) */
/* WARNING: Removing unreachable block (ram,0x000180020310) */
/* WARNING: Removing unreachable block (ram,0x000180020309) */
/* WARNING: Removing unreachable block (ram,0x000180020302) */
/* WARNING: Removing unreachable block (ram,0x0001800202fb) */
/* WARNING: Removing unreachable block (ram,0x0001800202f4) */
/* WARNING: Removing unreachable block (ram,0x0001800202ed) */
/* WARNING: Removing unreachable block (ram,0x0001800202e6) */
/* WARNING: Removing unreachable block (ram,0x0001800202df) */
/* WARNING: Removing unreachable block (ram,0x0001800202d8) */
/* WARNING: Removing unreachable block (ram,0x0001800202d1) */
/* WARNING: Removing unreachable block (ram,0x0001800202ca) */
/* WARNING: Removing unreachable block (ram,0x0001800202c3) */
/* WARNING: Removing unreachable block (ram,0x0001800202bc) */
/* WARNING: Removing unreachable block (ram,0x00018002017e) */
/* WARNING: Removing unreachable block (ram,0x00018002018d) */
/* WARNING: Removing unreachable block (ram,0x00018002019c) */
/* WARNING: Removing unreachable block (ram,0x0001800201ab) */
/* WARNING: Removing unreachable block (ram,0x0001800201ba) */
/* WARNING: Removing unreachable block (ram,0x0001800201c6) */
/* WARNING: Removing unreachable block (ram,0x0001800201d2) */
/* WARNING: Removing unreachable block (ram,0x0001800201de) */
/* WARNING: Removing unreachable block (ram,0x0001800201ea) */
/* WARNING: Removing unreachable block (ram,0x0001800201f6) */
/* WARNING: Removing unreachable block (ram,0x000180020202) */
/* WARNING: Removing unreachable block (ram,0x00018002020e) */
/* WARNING: Removing unreachable block (ram,0x00018002021a) */
/* WARNING: Removing unreachable block (ram,0x000180020226) */
/* WARNING: Removing unreachable block (ram,0x000180020232) */

char * FUN_180020080(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char *pcVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar21;
  longlong lVar25;
  
  uVar20 = (uint)param_2 & 0xf;
  uVar21 = (ulonglong)uVar20;
  pauVar19 = (undefined1 (*) [16])(param_2 + -uVar21);
  auVar33 = *pauVar19;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar2 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  if (uVar2 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar19)[1] != (char)uVar20) {
        pcVar18 = FID_conflict_fallbackMethod(param_1,param_2);
        return pcVar18;
      }
      goto LAB_18002032c;
    }
  }
  else {
    uVar20 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar20) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar3 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar4 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar5 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar6 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar7 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar8 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar9 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (ulonglong)uVar20 < 0x10 - uVar21) goto LAB_18002032c;
  }
  auVar34 = pauVar19[1];
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  lVar25 = auVar34._8_8_;
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar2 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  if (uVar2 != 0) {
    uVar20 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
      }
    }
    if ((uVar20 - uVar21) + 0x10 < 0x11) {
      uVar21 = auVar34._0_8_;
      switch(-uVar20) {
      case 0:
        auVar34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar34._0_8_ = uVar21 << 8;
        auVar34._8_8_ = lVar25 << 8 | uVar21 >> 0x38;
        break;
      case 0xfffffff2:
        auVar34._0_8_ = uVar21 << 0x10;
        auVar34._8_8_ = lVar25 << 0x10 | uVar21 >> 0x30;
        break;
      case 0xfffffff3:
        auVar34._0_8_ = uVar21 << 0x18;
        auVar34._8_8_ = lVar25 << 0x18 | uVar21 >> 0x28;
        break;
      case 0xfffffff4:
        auVar34._0_8_ = uVar21 << 0x20;
        auVar34._8_8_ = lVar25 << 0x20 | uVar21 >> 0x20;
        break;
      case 0xfffffff5:
        auVar34._0_8_ = uVar21 << 0x28;
        auVar34._8_8_ = lVar25 << 0x28 | uVar21 >> 0x18;
        break;
      case 0xfffffff6:
        auVar34._0_8_ = uVar21 << 0x30;
        auVar34._8_8_ = lVar25 << 0x30 | uVar21 >> 0x10;
        break;
      case 0xfffffff7:
        auVar34._0_8_ = uVar21 << 0x38;
        auVar34._8_8_ = lVar25 << 0x38 | uVar21 >> 8;
        break;
      case 0xfffffff8:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar21;
        auVar34 = auVar17 << 0x40;
        break;
      case 0xfffffff9:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar21 << 8;
        auVar34 = auVar10 << 0x40;
        break;
      case 0xfffffffa:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar21 << 0x10;
        auVar34 = auVar11 << 0x40;
        break;
      case 0xfffffffb:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar21 << 0x18;
        auVar34 = auVar12 << 0x40;
        break;
      case 0xfffffffc:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21 << 0x20;
        auVar34 = auVar13 << 0x40;
        break;
      case 0xfffffffd:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar21 << 0x28;
        auVar34 = auVar14 << 0x40;
        break;
      case 0xfffffffe:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar21 << 0x30;
        auVar34 = auVar15 << 0x40;
        break;
      case 0xffffffff:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar21 << 0x38;
        auVar34 = auVar16 << 0x40;
      }
      auVar33 = auVar33 | auVar34;
LAB_18002032c:
      cVar1 = *param_1;
      while( true ) {
        if (cVar1 == '\0') {
          return (char *)0x0;
        }
        auVar24[0] = -(cVar1 == auVar33[0]);
        auVar24[1] = -(cVar1 == auVar33[1]);
        auVar24[2] = -(cVar1 == auVar33[2]);
        auVar24[3] = -(cVar1 == auVar33[3]);
        auVar24[4] = -(cVar1 == auVar33[4]);
        auVar24[5] = -(cVar1 == auVar33[5]);
        auVar24[6] = -(cVar1 == auVar33[6]);
        auVar24[7] = -(cVar1 == auVar33[7]);
        auVar24[8] = -(cVar1 == auVar33[8]);
        auVar24[9] = -(cVar1 == auVar33[9]);
        auVar24[10] = -(cVar1 == auVar33[10]);
        auVar24[0xb] = -(cVar1 == auVar33[0xb]);
        auVar24[0xc] = -(cVar1 == auVar33[0xc]);
        auVar24[0xd] = -(cVar1 == auVar33[0xd]);
        auVar24[0xe] = -(cVar1 == auVar33[0xe]);
        auVar24[0xf] = -(cVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pcVar18 = FID_conflict_fallbackMethod(param_1,param_2);
  return pcVar18;
}




void FUN_180020448(uchar *param_1,uchar *param_2)

{
  _mbsdec_l(param_1,param_2,(_locale_t)0x0);
  return;
}




/* Library Function - Single Match
    _mbsdec_l
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uchar * __cdecl _mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  __acrt_ptd *p_Var1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((_Start == (uchar *)0x0) || (_Pos == (uchar *)0x0)) {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_180010fac();
  }
  else if (_Start < _Pos) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = _Pos + (-1 - (ulonglong)((int)_Pos - (int)pbVar2 & 1));
    }
    if (local_10 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pbVar2;
  }
  return (uchar *)0x0;
}




bool FUN_1800204e4(void)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_initialize_multibyte();
  return (char)uVar1 == '\0';
}




/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_180010168();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_180010fac();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00018002052e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_1800595b0,0,param_1);
  return uVar2;
}




undefined4 FUN_180020538(void)

{
  return DAT_1800595c4;
}




undefined8 FUN_180020540(uint param_1,short *param_2,ulonglong param_3,uint param_4,char param_5)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  ulonglong uVar6;
  short *psVar7;
  short *psVar8;
  
  psVar7 = param_2;
  if (param_5 != '\0') {
    param_1 = -param_1;
    *param_2 = 0x2d;
    psVar7 = param_2 + 1;
  }
  uVar6 = (ulonglong)(param_5 != '\0');
  psVar1 = psVar7;
  do {
    psVar8 = psVar1;
    uVar3 = (ulonglong)param_1;
    param_1 = param_1 / param_4;
    sVar2 = 0x57;
    if ((uint)(uVar3 % (ulonglong)param_4) < 10) {
      sVar2 = 0x30;
    }
    uVar6 = uVar6 + 1;
    *psVar8 = sVar2 + (short)(uVar3 % (ulonglong)param_4);
  } while ((param_1 != 0) && (psVar1 = psVar8 + 1, uVar6 < param_3));
  if (uVar6 < param_3) {
    psVar8[1] = 0;
    do {
      sVar2 = *psVar8;
      *psVar8 = *psVar7;
      psVar8 = psVar8 + -1;
      *psVar7 = sVar2;
      psVar7 = psVar7 + 1;
    } while (psVar7 < psVar8);
    uVar5 = 0;
  }
  else {
    *param_2 = 0;
    p_Var4 = FUN_180010168();
    *(undefined4 *)p_Var4 = 0x22;
    FUN_180010fac();
    uVar5 = 0x22;
  }
  return uVar5;
}




/* Library Function - Single Match
    int __cdecl common_xtox_s<unsigned long,wchar_t>(unsigned long,wchar_t * __ptr64 const,unsigned
   __int64,unsigned int,bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_xtox_s<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,__uint64 param_3,uint param_4,bool param_5)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
    if (param_3 <= (ulonglong)param_5 + 1) {
      p_Var1 = FUN_180010168();
      iVar3 = 0x22;
      goto LAB_18002063e;
    }
    if (param_4 - 2 < 0x23) {
      uVar2 = FUN_180020540(param_1,param_2,param_3,param_4,param_5);
      return (int)uVar2;
    }
  }
  p_Var1 = FUN_180010168();
  iVar3 = 0x16;
LAB_18002063e:
  *(int *)p_Var1 = iVar3;
  FUN_180010fac();
  return iVar3;
}




/* Library Function - Single Match
    _itow_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl _itow_s(int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((_Radix == 10) && (_Val < 0)) {
    bVar1 = true;
  }
  iVar2 = common_xtox_s<unsigned_long,wchar_t>(_Val,_DstBuf,_SizeInWords,_Radix,bVar1);
  return iVar2;
}




/* Library Function - Single Match
    wcscmp
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl wcscmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  longlong lVar2;
  int iVar3;
  
  wVar1 = *_Str2;
  iVar3 = (uint)(ushort)*_Str1 - (uint)(ushort)wVar1;
  if (iVar3 == 0) {
    lVar2 = (longlong)_Str1 - (longlong)_Str2;
    do {
      if (wVar1 == L'\0') break;
      _Str2 = _Str2 + 1;
      wVar1 = *_Str2;
      iVar3 = (uint)*(ushort *)(lVar2 + (longlong)_Str2) - (uint)(ushort)wVar1;
    } while (iVar3 == 0);
  }
  return (iVar3 >> 0x1f) - (-iVar3 >> 0x1f);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800206e8(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,
                       longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStack_78;
  puVar9 = (uint *)&DAT_1800595c8;
  if (param_4 != (uint *)0x0) {
    puVar9 = param_4;
  }
  pbVar6 = &DAT_18002f3b0;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
  }
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) {
LAB_18002074c:
    uVar2 = 0xfffffffffffffffe;
  }
  else {
    if (*(short *)((longlong)puVar9 + 6) == 0) {
      bVar4 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (-1 < (char)bVar4) {
        if (puVar10 != (uint *)0x0) {
          *puVar10 = (uint)bVar4;
        }
        return (ulonglong)(bVar4 != 0);
      }
      if ((bVar4 & 0xe0) == 0xc0) {
        bVar7 = 2;
      }
      else if ((bVar4 & 0xf0) == 0xe0) {
        bVar7 = 3;
      }
      else {
        if ((bVar4 & 0xf8) != 0xf0) goto LAB_18002089a;
        bVar7 = 4;
      }
      uVar3 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar4;
      bVar4 = bVar7;
LAB_1800207f0:
      uVar5 = (ulonglong)bVar4;
      uVar8 = (ulonglong)bVar4;
      if (uVar2 <= uVar5) {
        uVar8 = uVar2;
      }
      while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar8) {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_18002089a;
        uVar3 = bVar1 & 0x3f | uVar3 << 6;
      }
      if (uVar8 < uVar5) {
        *(ushort *)(puVar9 + 1) = (ushort)bVar7;
        *(ushort *)((longlong)puVar9 + 6) = (ushort)(byte)(bVar4 - (char)uVar8);
        *puVar9 = uVar3;
        goto LAB_18002074c;
      }
      if ((0x7ff < uVar3 - 0xd800) && (uVar3 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        auStack_60[4] = 0x10000;
        if (auStack_60[bVar7] <= uVar3) {
          if (puVar10 != (uint *)0x0) {
            *puVar10 = uVar3;
          }
          uVar2 = FUN_18002104c(-(ulonglong)(uVar3 != 0) & uVar5,(undefined8 *)puVar9);
          return uVar2;
        }
      }
    }
    else {
      bVar7 = (byte)puVar9[1];
      uVar3 = *puVar9;
      bVar4 = *(byte *)((longlong)puVar9 + 6);
      if ((((byte)(bVar7 - 2) < 3) && (bVar4 != 0)) && (bVar4 < bVar7)) goto LAB_1800207f0;
    }
LAB_18002089a:
    uVar2 = FUN_180021054((undefined8 *)puVar9,param_5);
  }
  return uVar2;
}




/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_180034c50 == (HANDLE)0xfffffffffffffffe) {
    DAT_180034c50 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_180034c50 != (HANDLE)0xffffffffffffffff;
}




void FUN_180020918(void)

{
  if (DAT_180034c50 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_180034c50);
  }
  return;
}




/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_180034c50,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_180034c50 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_180034c50);
      }
      DAT_180034c50 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_180034c50,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}




undefined8 FUN_1800209f4(byte *param_1,uint param_2,int *param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_res18 [2];
  
  piVar3 = &DAT_1800595d0;
  if (param_3 != (int *)0x0) {
    piVar3 = param_3;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*piVar3 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *piVar3 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVar2 = FUN_18001fa30(param_1,param_2 & 0xffff,(undefined8 *)piVar3,param_4);
      return uVar2;
    }
  }
  else if (uVar1 < 0x400) {
    local_res18[0] = 0;
    uVar2 = FUN_18001fa30(param_1,(param_2 & 0x23ff) + *piVar3,local_res18,param_4);
    uVar2 = FUN_18002104c(uVar2,(undefined8 *)piVar3);
    return uVar2;
  }
  uVar2 = FUN_180021054((undefined8 *)piVar3,param_4);
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180020aa0(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_ZMM0 [64];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  
  dVar15 = in_ZMM0._0_8_;
  auVar16 = in_ZMM0._0_16_;
  if (DAT_1800595e0 == 0) {
    if ((double)((ulonglong)dVar15 & (ulonglong)DAT_18002d8a0) == DAT_18002d8a0) {
      if (dVar15 == DAT_18002d8a0) {
        return dVar15;
      }
      if (dVar15 != DAT_18002d890) {
        return (double)((ulonglong)dVar15 | _DAT_18002d8c0);
      }
    }
    else {
      dVar37 = (double)(int)(((ulonglong)dVar15 >> 0x34) - _DAT_18002d8d0);
      if (0.0 < dVar15) {
        dVar23 = (double)((ulonglong)dVar15 & (ulonglong)DAT_18002d8f0);
        dVar20 = dVar15;
        if (dVar37 == DAT_18002da10) {
          dVar37 = (double)((ulonglong)dVar23 | (ulonglong)DAT_18002d980) - DAT_18002d980;
          dVar20 = (double)((ulonglong)dVar37 & (ulonglong)DAT_18002d8f0);
          dVar37 = (double)(int)((uint)((ulonglong)dVar37 >> 0x34) - _DAT_18002da20);
          dVar23 = dVar20;
        }
        uVar13 = ((ulonglong)dVar20 & _DAT_18002d900) + ((ulonglong)dVar20 & _DAT_18002d910) * 2;
        if ((double)((ulonglong)(dVar15 - DAT_18002d980) & _DAT_18002da70) < DAT_18002da30) {
          dVar15 = dVar15 - DAT_18002d980;
          dVar37 = dVar15 / (DAT_18002d970 + dVar15);
          dVar20 = dVar37 + dVar37;
          dVar23 = dVar20 * dVar20;
          dVar24 = dVar23 * dVar20;
          dVar26 = (double)((ulonglong)dVar15 & (ulonglong)DAT_18002dac0);
          dVar15 = (((DAT_18002da90 * dVar23 + DAT_18002da80) * dVar24 +
                    (DAT_18002dab0 * dVar23 + DAT_18002daa0) * dVar24 * dVar24 * dVar20) -
                   dVar15 * dVar37) + (dVar15 - dVar26);
          return dVar26 * DAT_18002d940 + dVar15 * DAT_18002d940 + dVar15 * DAT_18002d930 +
                 dVar26 * DAT_18002d930;
        }
        uVar14 = uVar13 >> 0x2c;
        dVar20 = ((double)(uVar13 | DAT_18002d990) - (double)((ulonglong)dVar23 | DAT_18002d990)) *
                 *(double *)(&DAT_18002eb00 + uVar14 * 8);
        dVar15 = dVar20 * dVar20;
        return *(double *)(&DAT_18002dae0 + uVar14 * 8) + DAT_18002d950 * dVar37 +
               *(double *)(&DAT_18002e2f0 + uVar14 * 8) +
               (DAT_18002d960 * dVar37 -
               ((DAT_18002d9d0 * dVar20 + _DAT_18002d9c0) * dVar15 + dVar20 +
               ((DAT_18002da00 * dVar20 + DAT_18002d9f0) * dVar20 + DAT_18002d9e0) * dVar15 * dVar15
               ) * DAT_18002d920);
      }
      if (dVar15 == 0.0) {
        dVar15 = (double)FUN_1800213d0(dVar15,DAT_18002d890,DAT_18002dad0);
        return dVar15;
      }
    }
    dVar15 = (double)FUN_1800213d0(dVar15,DAT_18002d8b0,DAT_18002dad4);
    return dVar15;
  }
  auVar27 = vpsrlq_avx(auVar16,0x34);
  auVar36._8_8_ = _UNK_18002d8d8;
  auVar36._0_8_ = _DAT_18002d8d0;
  auVar36 = vpsubq_avx(auVar27,auVar36);
  auVar36 = vcvtdq2pd_avx(auVar36);
  auVar27._8_8_ = _UNK_18002d8a8;
  auVar27._0_8_ = DAT_18002d8a0;
  auVar27 = vpand_avx(auVar16,auVar27);
  if (auVar27._0_8_ == DAT_18002d8a0) {
    if (dVar15 != DAT_18002d8a0) {
      if (dVar15 == DAT_18002d890) goto LAB_180020ff0;
      dVar15 = (double)FUN_1800213d0(dVar15,(ulonglong)dVar15 | _DAT_18002d8c0,DAT_18002dad8);
    }
    return dVar15;
  }
  if (0.0 < dVar15) {
    auVar27 = vpand_avx(auVar16,_DAT_18002d8f0);
    if (auVar36._0_8_ == DAT_18002da10) {
      auVar16._8_8_ = _UNK_18002d988;
      auVar16._0_8_ = DAT_18002d980;
      auVar16 = vpor_avx(auVar27,auVar16);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = auVar16._0_8_ - DAT_18002d980;
      auVar36 = vpsrlq_avx(auVar28,0x34);
      auVar16 = vpand_avx(auVar28,_DAT_18002d8f0);
      auVar7._4_12_ = _UNK_18002da24;
      auVar7._0_4_ = _DAT_18002da20;
      auVar36 = vpsubd_avx(auVar36,auVar7);
      auVar36 = vcvtdq2pd_avx(auVar36);
      auVar27 = auVar16;
    }
    auVar8._8_8_ = _UNK_18002d908;
    auVar8._0_8_ = _DAT_18002d900;
    auVar7 = vpand_avx(auVar16,auVar8);
    auVar9._8_8_ = _UNK_18002d918;
    auVar9._0_8_ = _DAT_18002d910;
    auVar28 = vpand_avx(auVar16,auVar9);
    auVar28 = vpsllq_avx(auVar28,1);
    auVar7 = vpaddq_avx(auVar28,auVar7);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = dVar15 - DAT_18002d980;
    auVar12._8_8_ = _UNK_18002da78;
    auVar12._0_8_ = _DAT_18002da70;
    auVar28 = vpand_avx(auVar30,auVar12);
    if (auVar28._0_8_ < DAT_18002da30) {
      dVar20 = auVar16._0_8_ - DAT_18002d980;
      dVar23 = dVar20 / (DAT_18002d970 + dVar20);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = DAT_18002da90;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = DAT_18002dab0;
      dVar15 = dVar23 + dVar23;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = DAT_18002da80;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar15 * dVar15;
      auVar36 = vfmadd213sd_fma(auVar32,auVar25,auVar5);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = DAT_18002daa0;
      auVar27 = vfmadd213sd_fma(auVar35,auVar25,auVar6);
      dVar37 = dVar15 * dVar15 * dVar15;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar20;
      auVar16 = vpand_avx(auVar19,_DAT_18002dac0);
      dVar24 = auVar16._0_8_;
      dVar15 = ((auVar36._0_8_ * dVar37 + auVar27._0_8_ * dVar37 * dVar37 * dVar15) -
               dVar20 * dVar23) + (dVar20 - dVar24);
      return dVar24 * DAT_18002d940 + dVar15 * DAT_18002d940 + dVar15 * DAT_18002d930 +
             dVar24 * DAT_18002d930;
    }
    uVar13 = auVar7._0_8_ >> 0x2c;
    auVar10._8_8_ = _UNK_18002d998;
    auVar10._0_8_ = DAT_18002d990;
    auVar16 = vpor_avx(auVar27,auVar10);
    auVar11._8_8_ = _UNK_18002d998;
    auVar11._0_8_ = DAT_18002d990;
    auVar27 = vpor_avx(auVar7,auVar11);
    dVar15 = (auVar27._0_8_ - auVar16._0_8_) * *(double *)(&DAT_18002eb00 + uVar13 * 8);
    dVar37 = dVar15 * dVar15;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = DAT_18002da00;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = DAT_18002d9d0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = DAT_18002d9f0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar15;
    auVar16 = vfmadd213sd_fma(auVar29,auVar21,auVar1);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = DAT_18002d990;
    auVar27 = vfmadd213sd_fma(auVar33,auVar21,auVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = DAT_18002d9e0;
    auVar16 = vfmadd213sd_fma(auVar16,auVar21,auVar3);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar37;
    auVar27 = vfmadd231sd_fma(auVar21,auVar27,auVar17);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = dVar37 * dVar37;
    auVar16 = vfmadd231sd_fma(auVar27,auVar16,auVar31);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = DAT_18002d960;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar16._0_8_ * DAT_18002d920;
    auVar27 = vfmsub213sd_fma(auVar34,auVar36,auVar22);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = DAT_18002d950;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulonglong *)(&DAT_18002dae0 + uVar13 * 8);
    auVar16 = vfmadd231sd_fma(auVar18,auVar36,auVar4);
    return auVar16._0_8_ + *(double *)(&DAT_18002e2f0 + uVar13 * 8) + auVar27._0_8_;
  }
  if (dVar15 == 0.0) {
    dVar15 = (double)FUN_1800213d0(dVar15,DAT_18002d890,DAT_18002dad0);
    return dVar15;
  }
LAB_180020ff0:
  dVar15 = (double)FUN_1800213d0(dVar15,DAT_18002d8b0,DAT_18002dad4);
  return dVar15;
}




undefined8 FUN_18002104c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}




undefined8 FUN_180021054(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}




/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringW(ushort *param_1,DWORD param_2,undefined1 (*param_3) [32],int param_4,
                        LPWSTR param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = param_4;
  if (0 < param_4) {
    uVar2 = FUN_18001230c(param_3,(longlong)param_4);
    iVar1 = (int)uVar2;
    iVar3 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  FUN_1800177c4(param_1,param_2,(LPCWSTR)param_3,iVar3,param_5,param_6,0,0,0);
  return;
}




undefined8
FUN_18002110c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_5;
  local_18 = param_6;
  local_38[0] = param_1;
  local_30 = param_3;
  local_28 = param_4;
  _ctrlfp(param_7,0xffc0);
  uVar1 = FUN_18001c43c(local_38);
  if ((int)uVar1 == 0) {
    FUN_18001a328(param_1);
  }
  return local_18;
}




/* Library Function - Single Match
    _exception_enabled
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool _exception_enabled(uint param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || (-1 < (char)param_2)) {
    if (((param_1 & 4) == 0) || ((param_2 >> 9 & 1) == 0)) {
      if (((param_1 & 1) == 0) || ((param_2 >> 10 & 1) == 0)) {
        if (((param_1 & 2) != 0) && ((param_2 >> 0xb & 1) != 0)) {
          if ((param_1 & 0x10) != 0) {
            _set_statfp(0x10);
          }
          uVar1 = param_1 & 0x1d;
        }
      }
      else {
        _set_statfp(8);
        uVar1 = param_1 & 0x1e;
      }
    }
    else {
      _set_statfp(4);
      uVar1 = param_1 & 0x1b;
    }
  }
  else {
    _set_statfp(1);
    uVar1 = param_1 & 0x17;
  }
  if (((param_1 & 0x10) != 0) && ((param_2 >> 0xc & 1) != 0)) {
    _set_statfp(0x20);
    uVar1 = uVar1 & 0xffffffef;
  }
  return uVar1 == 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180021230(undefined8 param_1,uint param_2,undefined8 param_3,int param_4,uint param_5,
             uint param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 extraout_var_00;
  undefined7 extraout_var;
  undefined8 uVar4;
  undefined1 auStackY_108 [32];
  undefined8 local_c8;
  ulonglong local_c0;
  uint local_b8 [12];
  undefined8 local_88;
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_180034040 ^ (ulonglong)auStackY_108;
  uVar3 = _ctrlfp(0x1f80,0xffc0);
  local_c0 = CONCAT44(extraout_var_00,uVar3);
  local_c8 = param_3;
  bVar2 = _exception_enabled(param_5,local_c0);
  uVar1 = param_8;
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = local_78 & 0xffffffe3 | 3;
    }
    FUN_180019ff8(local_b8,&local_c0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)&local_c8);
  }
  uVar4 = FUN_18001c414();
  if (((char)uVar4 == '\0') || (param_4 == 0)) {
    FUN_18001a328(param_4);
    _ctrlfp((uint)local_c0,0xffc0);
  }
  else {
    local_c8 = FUN_18002110c(param_4,(ulonglong)param_6,param_1,param_7,uVar1,local_c8,
                             (uint)local_c0);
  }
  return local_c8;
}




/* WARNING: Removing unreachable block (ram,0x000180021379) */
/* Library Function - Single Match
    __acrt_initialize_fma3
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_fma3(void)

{
  longlong lVar1;
  byte in_XCR0;
  
  DAT_1800595dc = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    DAT_1800595dc = (uint)((in_XCR0 & 6) == 6);
  }
  DAT_1800595e0 = DAT_1800595dc;
  return 0;
}




void FUN_1800213d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_1800213f0(param_1,param_2,param_3,0x1b,"log10");
  return;
}




undefined8
FUN_1800213f0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_180021230(param_5,param_4,param_2,iVar1,uVar2,uVar3,param_1,0,1);
  return param_2;
}




/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  PIMAGE_SECTION_HEADER p_Var3;
  
  bVar1 = FUN_180021530((short *)&IMAGE_DOS_HEADER_180000000);
  uVar2 = 0;
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    p_Var3 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_180000000,(DWORD_PTR)(pTarget + -0x180000000));
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = ~(p_Var3->Characteristics >> 0x1f) & 1;
    }
  }
  return uVar2;
}




bool FUN_180021530(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}




/* Library Function - Single Match
    __GSHandlerCheck_SEH
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __GSHandlerCheck_SEH
               (PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_4[7];
  uVar1 = *puVar2;
  __GSHandlerCheckCommon(param_2,(longlong)param_4);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    FUN_180009d90(param_1,param_2,param_3,param_4);
  }
  return;
}




/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (EHExceptionRecord *param_1,__uint64 param_2,_CONTEXT *param_3,
               _xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,(longlong)param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    FUN_18000995c(param_1,param_2,param_3,param_4);
  }
  return;
}




void FUN_180021664(PVOID param_1,PVOID param_2)

{
  RtlUnwind(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}




void FUN_180021690(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180009d90(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    lVar2 = FUN_18000a0dc();
    *(PEXCEPTION_RECORD *)(lVar2 + 0x20) = param_1;
    lVar2 = FUN_18000a0dc();
    *(longlong *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_180012564();
  }
  return;
}




ushort * FUN_1800216dc(ushort *param_1,ushort param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ushort uVar7;
  ushort uVar8;
  
  auVar5 = pshuflw(in_XMM1,ZEXT216(param_2),0);
  do {
    if (((uint)param_1 & 0xfff) < 0xff1) {
      auVar6._0_2_ = -(ushort)(*param_1 == 0);
      auVar6._2_2_ = -(ushort)(param_1[1] == 0);
      auVar6._4_2_ = -(ushort)(param_1[2] == 0);
      auVar6._6_2_ = -(ushort)(param_1[3] == 0);
      auVar6._8_2_ = -(ushort)(param_1[4] == 0);
      auVar6._10_2_ = -(ushort)(param_1[5] == 0);
      auVar6._12_2_ = -(ushort)(param_1[6] == 0);
      auVar6._14_2_ = -(ushort)(param_1[7] == 0);
      uVar7 = auVar5._0_2_;
      auVar4._0_2_ = -(ushort)(*param_1 == uVar7);
      uVar8 = auVar5._2_2_;
      auVar4._2_2_ = -(ushort)(param_1[1] == uVar8);
      auVar4._4_2_ = -(ushort)(param_1[2] == uVar7);
      auVar4._6_2_ = -(ushort)(param_1[3] == uVar8);
      auVar4._8_2_ = -(ushort)(param_1[4] == uVar7);
      auVar4._10_2_ = -(ushort)(param_1[5] == uVar8);
      auVar4._12_2_ = -(ushort)(param_1[6] == uVar7);
      auVar4._14_2_ = -(ushort)(param_1[7] == uVar8);
      auVar6 = auVar6 | auVar4;
      uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
      if (uVar7 != 0) {
        uVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        puVar3 = (ushort *)0x0;
        if (*(ushort *)((longlong)param_1 + (ulonglong)uVar1) == param_2) {
          puVar3 = (ushort *)((longlong)param_1 + (ulonglong)uVar1);
        }
        return puVar3;
      }
      lVar2 = 0x10;
    }
    else {
      if (*param_1 == param_2) {
        return param_1;
      }
      if (*param_1 == 0) {
        return (ushort *)0x0;
      }
      lVar2 = 2;
    }
    param_1 = (ushort *)((longlong)param_1 + lVar2);
  } while( true );
}




/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180021770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* WARNING: This is an inlined function */
/* WARNING: Switch with 1 destination removed at 0x000180021790 */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180021770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_1800217c0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_1800217d0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined1 (*pauVar26) [32];
  undefined1 (*pauVar27) [32];
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (puVar25 <= param_1) {
    if (DAT_180034090 < 3) {
      if ((param_3 < 0x801) || (((byte)DAT_18005836c & 2) == 0)) {
        if (0x80 < param_3) {
          lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
          puVar25 = (undefined8 *)((longlong)param_1 - lVar30);
          puVar28 = (undefined8 *)((longlong)param_2 - lVar30);
          param_3 = param_3 + lVar30;
          if (0x80 < param_3) {
            do {
              uVar10 = puVar28[1];
              uVar11 = puVar28[2];
              uVar12 = puVar28[3];
              uVar13 = puVar28[4];
              uVar32 = puVar28[5];
              uVar33 = puVar28[6];
              uVar14 = puVar28[7];
              *puVar25 = *puVar28;
              puVar25[1] = uVar10;
              puVar25[2] = uVar11;
              puVar25[3] = uVar12;
              puVar25[4] = uVar13;
              puVar25[5] = uVar32;
              puVar25[6] = uVar33;
              puVar25[7] = uVar14;
              uVar10 = puVar28[9];
              uVar11 = puVar28[10];
              uVar12 = puVar28[0xb];
              uVar13 = puVar28[0xc];
              uVar32 = puVar28[0xd];
              uVar33 = puVar28[0xe];
              uVar14 = puVar28[0xf];
              puVar25[8] = puVar28[8];
              puVar25[9] = uVar10;
              puVar25[10] = uVar11;
              puVar25[0xb] = uVar12;
              puVar25[0xc] = uVar13;
              puVar25[0xd] = uVar32;
              puVar25[0xe] = uVar33;
              puVar25[0xf] = uVar14;
              puVar25 = puVar25 + 0x10;
              puVar28 = puVar28 + 0x10;
              param_3 = param_3 - 0x80;
            } while (0x7f < param_3);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x000180021ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulonglong)*(uint *)(&DAT_18002f6f8 + (param_3 + 0xf >> 4) * 4) + 0x180000000))()
        ;
        return;
      }
    }
    else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_18005836c & 2) == 0)) {
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[3];
      puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
      uVar32 = *puVar25;
      uVar33 = puVar25[1];
      uVar14 = puVar25[2];
      uVar15 = puVar25[3];
      if (0x100 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
        pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
        pauVar26 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x100 < param_3) {
          if (0x180000 < param_3) {
            do {
              uVar29 = param_3;
              pauVar27 = pauVar26;
              pauVar24 = pauVar23;
              auVar3 = pauVar27[1];
              auVar4 = pauVar27[2];
              auVar5 = pauVar27[3];
              auVar6 = vmovntdq_avx(*pauVar27);
              *pauVar24 = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[1] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[2] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[3] = auVar3;
              auVar3 = pauVar27[5];
              auVar4 = pauVar27[6];
              auVar5 = pauVar27[7];
              auVar6 = vmovntdq_avx(pauVar27[4]);
              pauVar24[4] = auVar6;
              auVar3 = vmovntdq_avx(auVar3);
              pauVar24[5] = auVar3;
              auVar3 = vmovntdq_avx(auVar4);
              pauVar24[6] = auVar3;
              auVar3 = vmovntdq_avx(auVar5);
              pauVar24[7] = auVar3;
              pauVar23 = pauVar24 + 8;
              pauVar26 = pauVar27 + 8;
              param_3 = uVar29 - 0x100;
            } while (0xff < uVar29 - 0x100);
            uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
            switch(uVar29) {
            case 0x1e1:
            case 0x1e2:
            case 0x1e3:
            case 0x1e4:
            case 0x1e5:
            case 0x1e6:
            case 0x1e7:
            case 0x1e8:
            case 0x1e9:
            case 0x1ea:
            case 0x1eb:
            case 0x1ec:
            case 0x1ed:
            case 0x1ee:
            case 0x1ef:
            case 0x1f0:
            case 0x1f1:
            case 0x1f2:
            case 499:
            case 500:
            case 0x1f5:
            case 0x1f6:
            case 0x1f7:
            case 0x1f8:
            case 0x1f9:
            case 0x1fa:
            case 0x1fb:
            case 0x1fc:
            case 0x1fd:
            case 0x1fe:
            case 0x1ff:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar27 + uVar31));
              *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
            case 0x1c1:
            case 0x1c2:
            case 0x1c3:
            case 0x1c4:
            case 0x1c5:
            case 0x1c6:
            case 0x1c7:
            case 0x1c8:
            case 0x1c9:
            case 0x1ca:
            case 0x1cb:
            case 0x1cc:
            case 0x1cd:
            case 0x1ce:
            case 0x1cf:
            case 0x1d0:
            case 0x1d1:
            case 0x1d2:
            case 0x1d3:
            case 0x1d4:
            case 0x1d5:
            case 0x1d6:
            case 0x1d7:
            case 0x1d8:
            case 0x1d9:
            case 0x1da:
            case 0x1db:
            case 0x1dc:
            case 0x1dd:
            case 0x1de:
            case 0x1df:
            case 0x1e0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[1] + uVar31));
              *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
            case 0x1a1:
            case 0x1a2:
            case 0x1a3:
            case 0x1a4:
            case 0x1a5:
            case 0x1a6:
            case 0x1a7:
            case 0x1a8:
            case 0x1a9:
            case 0x1aa:
            case 0x1ab:
            case 0x1ac:
            case 0x1ad:
            case 0x1ae:
            case 0x1af:
            case 0x1b0:
            case 0x1b1:
            case 0x1b2:
            case 0x1b3:
            case 0x1b4:
            case 0x1b5:
            case 0x1b6:
            case 0x1b7:
            case 0x1b8:
            case 0x1b9:
            case 0x1ba:
            case 0x1bb:
            case 0x1bc:
            case 0x1bd:
            case 0x1be:
            case 0x1bf:
            case 0x1c0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[2] + uVar31));
              *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
            case 0x181:
            case 0x182:
            case 0x183:
            case 0x184:
            case 0x185:
            case 0x186:
            case 0x187:
            case 0x188:
            case 0x189:
            case 0x18a:
            case 0x18b:
            case 0x18c:
            case 0x18d:
            case 0x18e:
            case 399:
            case 400:
            case 0x191:
            case 0x192:
            case 0x193:
            case 0x194:
            case 0x195:
            case 0x196:
            case 0x197:
            case 0x198:
            case 0x199:
            case 0x19a:
            case 0x19b:
            case 0x19c:
            case 0x19d:
            case 0x19e:
            case 0x19f:
            case 0x1a0:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[3] + uVar31));
              *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
            case 0x161:
            case 0x162:
            case 0x163:
            case 0x164:
            case 0x165:
            case 0x166:
            case 0x167:
            case 0x168:
            case 0x169:
            case 0x16a:
            case 0x16b:
            case 0x16c:
            case 0x16d:
            case 0x16e:
            case 0x16f:
            case 0x170:
            case 0x171:
            case 0x172:
            case 0x173:
            case 0x174:
            case 0x175:
            case 0x176:
            case 0x177:
            case 0x178:
            case 0x179:
            case 0x17a:
            case 0x17b:
            case 0x17c:
            case 0x17d:
            case 0x17e:
            case 0x17f:
            case 0x180:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[4] + uVar31));
              *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
            case 0x141:
            case 0x142:
            case 0x143:
            case 0x144:
            case 0x145:
            case 0x146:
            case 0x147:
            case 0x148:
            case 0x149:
            case 0x14a:
            case 0x14b:
            case 0x14c:
            case 0x14d:
            case 0x14e:
            case 0x14f:
            case 0x150:
            case 0x151:
            case 0x152:
            case 0x153:
            case 0x154:
            case 0x155:
            case 0x156:
            case 0x157:
            case 0x158:
            case 0x159:
            case 0x15a:
            case 0x15b:
            case 0x15c:
            case 0x15d:
            case 0x15e:
            case 0x15f:
            case 0x160:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[5] + uVar31));
              *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
            case 0x121:
            case 0x122:
            case 0x123:
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x129:
            case 0x12a:
            case 299:
            case 300:
            case 0x12d:
            case 0x12e:
            case 0x12f:
            case 0x130:
            case 0x131:
            case 0x132:
            case 0x133:
            case 0x134:
            case 0x135:
            case 0x136:
            case 0x137:
            case 0x138:
            case 0x139:
            case 0x13a:
            case 0x13b:
            case 0x13c:
            case 0x13d:
            case 0x13e:
            case 0x13f:
            case 0x140:
              auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[6] + uVar31));
              *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
            default:
              puVar25 = (undefined8 *)(pauVar24[-1] + uVar29);
              *puVar25 = uVar32;
              puVar25[1] = uVar33;
              puVar25[2] = uVar14;
              puVar25[3] = uVar15;
            case 0x100:
              *param_1 = uVar10;
              param_1[1] = uVar11;
              param_1[2] = uVar12;
              param_1[3] = uVar13;
              return;
            }
          }
          do {
            uVar10 = *(undefined8 *)(*pauVar26 + 8);
            uVar11 = *(undefined8 *)(*pauVar26 + 0x10);
            uVar12 = *(undefined8 *)(*pauVar26 + 0x18);
            uVar13 = *(undefined8 *)pauVar26[1];
            uVar32 = *(undefined8 *)(pauVar26[1] + 8);
            uVar33 = *(undefined8 *)(pauVar26[1] + 0x10);
            uVar14 = *(undefined8 *)(pauVar26[1] + 0x18);
            uVar15 = *(undefined8 *)pauVar26[2];
            uVar16 = *(undefined8 *)(pauVar26[2] + 8);
            uVar17 = *(undefined8 *)(pauVar26[2] + 0x10);
            uVar18 = *(undefined8 *)(pauVar26[2] + 0x18);
            uVar19 = *(undefined8 *)pauVar26[3];
            uVar20 = *(undefined8 *)(pauVar26[3] + 8);
            uVar21 = *(undefined8 *)(pauVar26[3] + 0x10);
            uVar22 = *(undefined8 *)(pauVar26[3] + 0x18);
            *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar26;
            *(undefined8 *)(*pauVar23 + 8) = uVar10;
            *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
            *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
            *(undefined8 *)pauVar23[1] = uVar13;
            *(undefined8 *)(pauVar23[1] + 8) = uVar32;
            *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[2] = uVar15;
            *(undefined8 *)(pauVar23[2] + 8) = uVar16;
            *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[3] = uVar19;
            *(undefined8 *)(pauVar23[3] + 8) = uVar20;
            *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
            uVar10 = *(undefined8 *)(pauVar26[4] + 8);
            uVar11 = *(undefined8 *)(pauVar26[4] + 0x10);
            uVar12 = *(undefined8 *)(pauVar26[4] + 0x18);
            uVar13 = *(undefined8 *)pauVar26[5];
            uVar32 = *(undefined8 *)(pauVar26[5] + 8);
            uVar33 = *(undefined8 *)(pauVar26[5] + 0x10);
            uVar14 = *(undefined8 *)(pauVar26[5] + 0x18);
            uVar15 = *(undefined8 *)pauVar26[6];
            uVar16 = *(undefined8 *)(pauVar26[6] + 8);
            uVar17 = *(undefined8 *)(pauVar26[6] + 0x10);
            uVar18 = *(undefined8 *)(pauVar26[6] + 0x18);
            uVar19 = *(undefined8 *)pauVar26[7];
            uVar20 = *(undefined8 *)(pauVar26[7] + 8);
            uVar21 = *(undefined8 *)(pauVar26[7] + 0x10);
            uVar22 = *(undefined8 *)(pauVar26[7] + 0x18);
            *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar26[4];
            *(undefined8 *)(pauVar23[4] + 8) = uVar10;
            *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
            *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
            *(undefined8 *)pauVar23[5] = uVar13;
            *(undefined8 *)(pauVar23[5] + 8) = uVar32;
            *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
            *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
            *(undefined8 *)pauVar23[6] = uVar15;
            *(undefined8 *)(pauVar23[6] + 8) = uVar16;
            *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
            *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
            *(undefined8 *)pauVar23[7] = uVar19;
            *(undefined8 *)(pauVar23[7] + 8) = uVar20;
            *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
            *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
            pauVar23 = pauVar23 + 8;
            pauVar26 = pauVar26 + 8;
            param_3 = param_3 - 0x100;
          } while (0xff < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000180021a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_18002f6b0 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
      return;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  lVar30 = (longlong)param_2 - (longlong)param_1;
  puVar25 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
  uVar12 = *puVar25;
  uVar13 = puVar25[1];
  puVar28 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
  uVar29 = param_3 - 0x10;
  puVar25 = puVar28;
  uVar32 = uVar12;
  uVar33 = uVar13;
  if (((ulonglong)puVar28 & 0xf) != 0) {
    puVar25 = (undefined8 *)((ulonglong)puVar28 & 0xfffffffffffffff0);
    uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
    *puVar28 = uVar12;
    *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
    uVar29 = (longlong)puVar25 - (longlong)param_1;
  }
  uVar31 = uVar29 >> 7;
  if (uVar31 != 0) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar28 = puVar25;
    while( true ) {
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x10);
      uVar12 = puVar1[1];
      puVar25 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x20);
      uVar13 = *puVar25;
      uVar32 = puVar25[1];
      puVar25 = puVar28 + -0x10;
      puVar28[-2] = *puVar1;
      puVar28[-1] = uVar12;
      puVar28[-4] = uVar13;
      puVar28[-3] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x30);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x40);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      uVar31 = uVar31 - 1;
      puVar28[-6] = *puVar1;
      puVar28[-5] = uVar12;
      puVar28[-8] = uVar13;
      puVar28[-7] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x50);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x60);
      uVar13 = *puVar2;
      uVar32 = puVar2[1];
      puVar28[-10] = *puVar1;
      puVar28[-9] = uVar12;
      puVar28[-0xc] = uVar13;
      puVar28[-0xb] = uVar32;
      puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x70);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
      if (uVar31 == 0) break;
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      *puVar25 = uVar32;
      puVar28[-0xf] = uVar33;
      puVar28 = puVar25;
    }
    puVar28[-0xe] = uVar12;
    puVar28[-0xd] = uVar13;
    uVar29 = uVar29 & 0x7f;
  }
  for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    puVar25 = puVar25 + -2;
    uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
    uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
  }
  if ((uVar29 & 0xf) != 0) {
    *param_1 = uVar10;
    param_1[1] = uVar11;
  }
  *puVar25 = uVar32;
  puVar25[1] = uVar33;
  return;
}




undefined8 FUN_180021e60(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}




undefined1 (*) [32] FUN_180021e70(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined2 uVar9;
  undefined4 uVar10;
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_180034090 < 3) {
    if ((param_3 <= DAT_180034098) || (((byte)DAT_18005836c & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x0001800221b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_18002f7a8 + (uVar6 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_180034098) || (DAT_1800340a0 < param_3)) ||
          (((byte)DAT_18005836c & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_1800340a0 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar6) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar6) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar6) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar6) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar6) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar6) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x000180022004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_18002f760 + (uVar6 + 0x1f >> 5) * 4) +
                        0x180000000))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}




/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    for (; ((ulonglong)_Buf1 & 7) != 0; _Buf1 = (void *)((longlong)_Buf1 + 1)) {
      bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
      if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) goto LAB_180022263;
      _Size = _Size - 1;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) goto LAB_1800222d4;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 8)) {
LAB_1800222d0:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_1800222d4;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x10)) {
LAB_1800222cc:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_1800222d0;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x18)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_1800222cc;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) {
LAB_1800222d4:
            uVar4 = *(ulonglong *)(lVar3 + (longlong)_Buf1);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                           (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                           (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
    bVar5 = (byte)*(ulonglong *)_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
    if ((byte)*(ulonglong *)_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_180022263:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}




void FUN_180022310(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180010434(*(LPVOID *)(param_2 + 0xd0));
  return;
}




void FUN_1800223e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_180010434(*(LPVOID *)(param_2 + 0xb0));
  return;
}




void FUN_180022400(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    FUN_180005190((ios_base *)(*(longlong *)(param_2 + 0x30) + 0x10));
  }
  return;
}




void FUN_180022488(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),
                  *(__uint64 *)(param_2 + 0x70),*(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}




undefined4 FUN_1800224b4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
  puVar2 = (undefined8 *)FUN_180009cb4();
  *puVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
  puVar2 = (undefined8 *)FUN_180009cc8();
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_180012564();
}




bool FUN_180022513(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




void FUN_18002252b(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x40));
  return;
}




void FUN_180022542(undefined8 param_1,longlong param_2)

{
  __scrt_release_startup_lock(*(char *)(param_2 + 0x20));
  return;
}




void FUN_18002255b(void)

{
  FUN_180007ff8();
  return;
}




void FUN_18002256f(undefined8 *param_1,longlong param_2)

{
  __scrt_dllmain_exception_filter
            (*(undefined8 *)(param_2 + 0x60),*(int *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70),FUN_18000823c,*(int *)*param_1,param_1);
  return;
}




undefined8 FUN_1800225a5(undefined8 param_1,longlong param_2)

{
  _xDISPATCHER_CONTEXT *p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x50) = param_1;
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  p_Var1 = *(_xDISPATCHER_CONTEXT **)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(p_Var1 + 8);
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x68) = uVar2;
  thunk_FUN_18000bd1c((EHExceptionRecord *)**(undefined8 **)(param_2 + 0x48),
                      *(__uint64 **)(param_2 + 0x88),*(_CONTEXT **)(param_2 + 0x90),p_Var1,
                      *(_s_FuncInfo **)(param_2 + 0xa0),0,(__uint64 *)0x0,1);
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  return 1;
}




undefined8 FUN_180022648(undefined8 param_1,longlong param_2)

{
  _xDISPATCHER_CONTEXT *p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x50) = param_1;
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  p_Var1 = *(_xDISPATCHER_CONTEXT **)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(p_Var1 + 8);
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x60) = uVar2;
  uVar2 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x68) = uVar2;
  lVar3 = FUN_18000a0dc();
  *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_2 + 0xb8);
  FUN_18000c1f0((EHExceptionRecord *)**(undefined8 **)(param_2 + 0x48),
                *(__uint64 **)(param_2 + 0x88),*(_CONTEXT **)(param_2 + 0x90),p_Var1,
                *(FuncInfo4 **)(param_2 + 0xa0),0,(__uint64 *)0x0,1);
  lVar3 = FUN_18000a0dc();
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  return 1;
}




undefined4 FUN_1800226f9(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    lVar2 = FUN_18000a0dc();
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    lVar2 = FUN_18000a0dc();
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180012564();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}




void FUN_18002278f(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  *(undefined4 *)(lVar1 + 0x78) = 0xfffffffe;
  return;
}




void FUN_1800227ab(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x58) = param_1;
  FUN_18000c9d0(param_1,*(longlong *)(param_2 + 0xb8),(undefined4 *)(param_2 + 0x20));
  return;
}




void FUN_1800227d0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1800098b0(*(longlong *)(param_2 + 0x38));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xb8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar1 + 10));
    if (iVar3 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0xc0);
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x40);
  return;
}




void FUN_180022856(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  *(_EXCEPTION_POINTERS **)(param_2 + 0x80) = param_1;
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0xf8),*(int *)(param_2 + 0xe8),
                     (int *)(param_2 + 0x20));
  return;
}




void FUN_180022885(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1800098b0(*(longlong *)(param_2 + 0x48));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xf8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = _IsExceptionObjectToBeDestroyed(*(longlong *)(piVar1 + 10));
    if (iVar3 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  lVar2 = FUN_18000a0dc();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x38);
  lVar2 = FUN_18000a0dc();
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_2 + 0xe0);
  return;
}




void FUN_180022916(undefined8 *param_1)

{
  FUN_180009c4c(param_1);
  return;
}




void FUN_18002292c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_18000a0dc();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}




void FUN_18002294f(undefined8 *param_1)

{
  FUN_180009c4c(param_1);
  return;
}




void FUN_180022965(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000a0dc();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_18000a0dc();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}




void FUN_180022988(undefined8 param_1,longlong param_2)

{
  FUN_18000fc74(*(longlong *)(param_2 + 0x58));
  return;
}




void FUN_1800229a2(undefined8 param_1,longlong param_2)

{
  FUN_18000fc74(**(longlong **)(param_2 + 0x48));
  return;
}




void FUN_1800229bd(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x98));
  return;
}




void FUN_1800229da(undefined8 param_1,longlong param_2)

{
  FUN_18000fc74(*(longlong *)(param_2 + 0x40));
  return;
}




void FUN_1800229f2(undefined8 param_1,longlong param_2)

{
  FUN_18000fc74(*(longlong *)(param_2 + 0x40));
  return;
}




void FUN_180022a0c(undefined8 param_1,longlong param_2)

{
  FUN_18000fc74(*(longlong *)(param_2 + 0x38));
  return;
}




void FUN_180022a24(undefined8 param_1,longlong param_2)

{
  FUN_18000fc74(*(longlong *)(param_2 + 0x60));
  return;
}




void FUN_180022a3c(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x48));
  return;
}




undefined4 FUN_180022a56(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}




void FUN_180022a83(void)

{
  __acrt_unlock(0);
  return;
}




void FUN_180022a99(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x58));
  return;
}




void FUN_180022ab3(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)**(undefined8 **)(param_2 + 0x48) + 0x3a8);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}




void FUN_180022ad4(void)

{
  __acrt_unlock(7);
  return;
}




void FUN_180022aed(undefined8 param_1,longlong param_2)

{
  FUN_18001c640(**(uint **)(param_2 + 0x48));
  return;
}




void FUN_180022b07(undefined8 param_1,longlong param_2)

{
  FUN_18001c640(*(uint *)(param_2 + 0x60));
  return;
}




void FUN_180022b1e(void)

{
  __acrt_unlock(8);
  return;
}




void FUN_180022b37(undefined8 param_1,longlong param_2)

{
  FUN_18001c640(*(uint *)(param_2 + 0x40));
  return;
}




undefined8 FUN_180022b4e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_180022b7a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}




void FUN_180022b9b(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(int **)(param_2 + 0x68));
  return;
}




void FUN_180022bb5(void)

{
  __acrt_unlock(5);
  return;
}




void FUN_180022bce(void)

{
  __acrt_unlock(4);
  return;
}




bool FUN_180022bf0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022c10(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057488) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057470._1_7_,(undefined1)DAT_180057470);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057488 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057480 = _DAT_18002f500;
  DAT_180057488 = _UNK_18002f508;
  DAT_180057470._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022c80(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059638) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059620._1_7_,(undefined1)DAT_180059620);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059638 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180059630 = _DAT_18002f500;
  DAT_180059638 = _UNK_18002f508;
  DAT_180059620._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022cf0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800574c8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800574b0._1_7_,(undefined1)DAT_1800574b0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800574c8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800574c0 = _DAT_18002f500;
  DAT_1800574c8 = _UNK_18002f508;
  DAT_1800574b0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022d60(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059618) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059600._1_7_,(undefined1)DAT_180059600);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059618 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059610 = _DAT_18002f500;
  DAT_180059618 = _UNK_18002f508;
  DAT_180059600._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022dd0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800574a8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057490._1_7_,(undefined1)DAT_180057490);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800574a8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_1800574a0 = _DAT_18002f500;
  DAT_1800574a8 = _UNK_18002f508;
  DAT_180057490._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022e40(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800574e8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800574d0._1_7_,(undefined1)DAT_1800574d0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800574e8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800574e0 = _DAT_18002f500;
  DAT_1800574e8 = _UNK_18002f508;
  DAT_1800574d0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022eb0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059678) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059660._1_7_,(undefined1)DAT_180059660);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059678 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180059670 = _DAT_18002f500;
  DAT_180059678 = _UNK_18002f508;
  DAT_180059660._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022f20(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057528) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057510._1_7_,(undefined1)DAT_180057510);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057528 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057520 = _DAT_18002f500;
  DAT_180057528 = _UNK_18002f508;
  DAT_180057510._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180022f90(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059658) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059640._1_7_,(undefined1)DAT_180059640);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059658 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059650 = _DAT_18002f500;
  DAT_180059658 = _UNK_18002f508;
  DAT_180059640._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023000(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057508) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800574f0._1_7_,(undefined1)DAT_1800574f0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057508 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180057500 = _DAT_18002f500;
  DAT_180057508 = _UNK_18002f508;
  DAT_1800574f0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023070(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057548) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057530._1_7_,(undefined1)DAT_180057530);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057548 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057540 = _DAT_18002f500;
  DAT_180057548 = _UNK_18002f508;
  DAT_180057530._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800230e0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800596b8) {
    pvVar1 = (LPVOID)CONCAT71(ram0x0001800596a1,(undefined1)DAT_1800596a0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800596b8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800596b0 = _DAT_18002f500;
  DAT_1800596b8 = _UNK_18002f508;
  DAT_1800596a0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023150(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057588) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057570._1_7_,(undefined1)DAT_180057570);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057588 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057580 = _DAT_18002f500;
  DAT_180057588 = _UNK_18002f508;
  DAT_180057570._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800231c0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059698) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059680._1_7_,(undefined1)DAT_180059680);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059698 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059690 = _DAT_18002f500;
  DAT_180059698 = _UNK_18002f508;
  DAT_180059680._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023230(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057568) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057550._1_7_,(undefined1)DAT_180057550);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057568 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180057560 = _DAT_18002f500;
  DAT_180057568 = _UNK_18002f508;
  DAT_180057550._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800232a0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800575a8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057590._1_7_,(undefined1)DAT_180057590);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800575a8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800575a0 = _DAT_18002f500;
  DAT_1800575a8 = _UNK_18002f508;
  DAT_180057590._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023310(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800596f8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800596e0._1_7_,(undefined1)DAT_1800596e0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800596f8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800596f0 = _DAT_18002f500;
  DAT_1800596f8 = _UNK_18002f508;
  DAT_1800596e0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023380(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800575e8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800575d0._1_7_,(undefined1)DAT_1800575d0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800575e8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800575e0 = _DAT_18002f500;
  DAT_1800575e8 = _UNK_18002f508;
  DAT_1800575d0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800233f0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800596d8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800596c0._1_7_,(undefined1)DAT_1800596c0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800596d8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_1800596d0 = _DAT_18002f500;
  DAT_1800596d8 = _UNK_18002f508;
  DAT_1800596c0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023460(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800575c8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800575b0._1_7_,(undefined1)DAT_1800575b0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800575c8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_1800575c0 = _DAT_18002f500;
  DAT_1800575c8 = _UNK_18002f508;
  DAT_1800575b0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800234d0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057608) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800575f0._1_7_,(undefined1)DAT_1800575f0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057608 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057600 = _DAT_18002f500;
  DAT_180057608 = _UNK_18002f508;
  DAT_1800575f0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023540(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059738) {
    pvVar1 = (LPVOID)CONCAT71(ram0x000180059721,(undefined1)DAT_180059720);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059738 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180059730 = _DAT_18002f500;
  DAT_180059738 = _UNK_18002f508;
  DAT_180059720._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800235b0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057708) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800576f0._1_7_,(undefined1)DAT_1800576f0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057708 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057700 = _DAT_18002f500;
  DAT_180057708 = _UNK_18002f508;
  DAT_1800576f0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023620(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059718) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059700._1_7_,(undefined1)DAT_180059700);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059718 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059710 = _DAT_18002f500;
  DAT_180059718 = _UNK_18002f508;
  DAT_180059700._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023690(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800576e8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800576d0._1_7_,(undefined1)DAT_1800576d0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800576e8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_1800576e0 = _DAT_18002f500;
  DAT_1800576e8 = _UNK_18002f508;
  DAT_1800576d0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023720(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057728) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057710._1_7_,(undefined1)DAT_180057710);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057728 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057720 = _DAT_18002f500;
  DAT_180057728 = _UNK_18002f508;
  DAT_180057710._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023790(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059778) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059760._1_7_,(undefined1)DAT_180059760);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059778 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180059770 = _DAT_18002f500;
  DAT_180059778 = _UNK_18002f508;
  DAT_180059760._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023800(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057768) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057750._1_7_,(undefined1)DAT_180057750);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057768 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057760 = _DAT_18002f500;
  DAT_180057768 = _UNK_18002f508;
  DAT_180057750._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023870(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059758) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059740._1_7_,(undefined1)DAT_180059740);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059758 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059750 = _DAT_18002f500;
  DAT_180059758 = _UNK_18002f508;
  DAT_180059740._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800238e0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057748) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057730._1_7_,(undefined1)DAT_180057730);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057748 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180057740 = _DAT_18002f500;
  DAT_180057748 = _UNK_18002f508;
  DAT_180057730._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023950(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057788) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057770._1_7_,(undefined1)DAT_180057770);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057788 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057780 = _DAT_18002f500;
  DAT_180057788 = _UNK_18002f508;
  DAT_180057770._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800239c0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800597b8) {
    pvVar1 = (LPVOID)CONCAT71(ram0x0001800597a1,(undefined1)DAT_1800597a0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800597b8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800597b0 = _DAT_18002f500;
  DAT_1800597b8 = _UNK_18002f508;
  DAT_1800597a0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023a30(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800577c8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800577b0._1_7_,(undefined1)DAT_1800577b0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800577c8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800577c0 = _DAT_18002f500;
  DAT_1800577c8 = _UNK_18002f508;
  DAT_1800577b0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023aa0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059798) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059780._1_7_,(undefined1)DAT_180059780);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059798 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059790 = _DAT_18002f500;
  DAT_180059798 = _UNK_18002f508;
  DAT_180059780._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023b10(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800577a8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057790._1_7_,(undefined1)DAT_180057790);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800577a8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_1800577a0 = _DAT_18002f500;
  DAT_1800577a8 = _UNK_18002f508;
  DAT_180057790._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023b80(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800577e8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800577d0._1_7_,(undefined1)DAT_1800577d0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800577e8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800577e0 = _DAT_18002f500;
  DAT_1800577e8 = _UNK_18002f508;
  DAT_1800577d0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023bf0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800597f8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800597e0._1_7_,(undefined1)DAT_1800597e0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800597f8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800597f0 = _DAT_18002f500;
  DAT_1800597f8 = _UNK_18002f508;
  DAT_1800597e0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023c60(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057828) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057810._1_7_,(undefined1)DAT_180057810);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057828 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057820 = _DAT_18002f500;
  DAT_180057828 = _UNK_18002f508;
  DAT_180057810._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023cd0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800597d8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800597c0._1_7_,(undefined1)DAT_1800597c0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800597d8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_1800597d0 = _DAT_18002f500;
  DAT_1800597d8 = _UNK_18002f508;
  DAT_1800597c0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023d40(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057808) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800577f0._1_7_,(undefined1)DAT_1800577f0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057808 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180057800 = _DAT_18002f500;
  DAT_180057808 = _UNK_18002f508;
  DAT_1800577f0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023db0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057848) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057830._1_7_,(undefined1)DAT_180057830);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057848 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057840 = _DAT_18002f500;
  DAT_180057848 = _UNK_18002f508;
  DAT_180057830._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023e20(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059838) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059820._1_7_,(undefined1)DAT_180059820);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059838 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180059830 = _DAT_18002f500;
  DAT_180059838 = _UNK_18002f508;
  DAT_180059820._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023e90(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057888) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057870._1_7_,(undefined1)DAT_180057870);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057888 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180057880 = _DAT_18002f500;
  DAT_180057888 = _UNK_18002f508;
  DAT_180057870._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023f00(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059818) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059800._1_7_,(undefined1)DAT_180059800);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059818 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059810 = _DAT_18002f500;
  DAT_180059818 = _UNK_18002f508;
  DAT_180059800._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023f70(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180057868) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057850._1_7_,(undefined1)DAT_180057850);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180057868 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180057860 = _DAT_18002f500;
  DAT_180057868 = _UNK_18002f508;
  DAT_180057850._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180023fe0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800578a8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180057890._1_7_,(undefined1)DAT_180057890);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800578a8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800578a0 = _DAT_18002f500;
  DAT_1800578a8 = _UNK_18002f508;
  DAT_180057890._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180024050(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059878) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059860._1_7_,(undefined1)DAT_180059860);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059878 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_180059870 = _DAT_18002f500;
  DAT_180059878 = _UNK_18002f508;
  DAT_180059860._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800240c0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800578e8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800578d0._1_7_,(undefined1)DAT_1800578d0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800578e8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  DAT_1800578e0 = _DAT_18002f500;
  DAT_1800578e8 = _UNK_18002f508;
  DAT_1800578d0._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180024130(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_180059858) {
    pvVar1 = (LPVOID)CONCAT71(DAT_180059840._1_7_,(undefined1)DAT_180059840);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_180059858 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_180059850 = _DAT_18002f500;
  DAT_180059858 = _UNK_18002f508;
  DAT_180059840._0_1_ = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800241a0(void)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  
  if (0xf < DAT_1800578c8) {
    pvVar1 = (LPVOID)CONCAT71(DAT_1800578b0._1_7_,(undefined1)DAT_1800578b0);
    pvVar2 = pvVar1;
    if ((0xfff < DAT_1800578c8 + 1) &&
       (pvVar2 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      FUN_180010fcc();
    }
    thunk_FUN_180010434(pvVar2);
  }
  _DAT_1800578c0 = _DAT_18002f500;
  DAT_1800578c8 = _UNK_18002f508;
  DAT_1800578b0._0_1_ = 0;
  return;
}




/* Library Function - Single Match
    public: __cdecl std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  while (puVar1 = DAT_180057fb8, DAT_180057fb8 != (undefined8 *)0x0) {
    DAT_180057fb8 = (undefined8 *)*DAT_180057fb8;
    lVar2 = (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    if (lVar2 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1800252e0)(lVar2,1);
    }
    thunk_FUN_180010434(puVar1);
  }
  return;
}




void FUN_18002426c(void)

{
  longlong lVar1;
  
  if (DAT_180057fa8 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_1800252e0)(lVar1,1);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800242ac(void)

{
  *(undefined ***)((longlong)&DAT_180058060 + (longlong)*(int *)(DAT_180058060 + 4)) =
       std::basic_ostream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(&DAT_18005805c + *(int *)(DAT_180058060 + 4)) = *(int *)(DAT_180058060 + 4) + -0x10;
  _DAT_180058070 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)&DAT_180058070);
  return;
}




/* Library Function - Single Match
    public: __cdecl _Init_atexit::~_Init_atexit(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall _Init_atexit::~_Init_atexit(_Init_atexit *this)

{
  longlong lVar1;
  PVOID pvVar2;
  
  while (DAT_180034008 < 10) {
    lVar1 = DAT_180034008 * 8;
    DAT_180034008 = DAT_180034008 + 1;
    pvVar2 = DecodePointer(*(PVOID *)(&DAT_1800581e0 + lVar1));
    if (pvVar2 != (PVOID)0x0) {
      (*(code *)PTR__guard_dispatch_icall_1800252e0)();
    }
  }
  return;
}



