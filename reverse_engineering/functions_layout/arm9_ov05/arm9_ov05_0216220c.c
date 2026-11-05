
bool FUN_0216220c(int param_1,int param_2,undefined2 param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_r8;
  undefined1 auStack_7ffffffe [2147483646];
  
  while( true ) {
    param_1 = param_1 + 1;
    *(undefined2 *)(param_2 + 0x14) = param_3;
    if (0xf < param_1) break;
    param_3 = *(undefined2 *)(param_4 + param_1 * 2 + 0x14);
    param_2 = unaff_r8 + param_1 * 2;
  }
  FUN_02051890((int)register0x00000054 + 0x588);
  uVar3 = LocationData::LocationData_Create();
  uVar4 = FUN_02075670();
  if (*(byte *)(unaff_r8 + 0x35) < uVar4) {
    if (*(ushort *)(unaff_r8 + 0x38) < 9999) {
      if (*(ushort *)(unaff_r8 + 0x3a) < 9999) {
        if (*(ushort *)(unaff_r8 + 0x38) < *(ushort *)(unaff_r8 + 0x3a)) {
          FUN_02075648(uVar3);
          bVar1 = false;
        }
        else if (*(byte *)(unaff_r8 + 0x34) < 0x51) {
          FUN_02075648(uVar3);
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        FUN_02075648(uVar3);
        bVar1 = false;
      }
    }
    else {
      FUN_02075648(uVar3);
      bVar1 = false;
    }
  }
  else {
    FUN_02075648(uVar3);
    bVar1 = false;
  }
  uVar3 = ComicDeck::ComicDeckCreate(1,1);
  uVar5 = FUN_02076908();
  FUN_020769cc();
  uVar4 = FUN_0207879c(uVar5);
  if (((uVar4 & 0x1f) == 0) && (iVar6 = FUN_02078814(uVar5), iVar6 != 0)) {
    FUN_02076bbc(uVar5);
    FUN_0207698c(uVar5);
    FUN_020763e0(uVar3);
    bVar2 = true;
  }
  else {
    FUN_0207698c(uVar5);
    FUN_020763e0(uVar3);
    bVar2 = false;
  }
  return bVar1 && bVar2;
}

