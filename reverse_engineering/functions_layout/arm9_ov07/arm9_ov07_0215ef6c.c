
void FUN_0215ef6c(short *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_18 [12];
  
  iVar1 = DAT_0216ad84;
  if ((param_1 != (short *)0x0) && (iVar2 = FUN_0215fc84(DAT_0216ad84,param_1), iVar2 == 0)) {
    return;
  }
  if (param_1 == (short *)0x0) {
    FUN_02051890(iVar1 + 0x512c,auStack_18,6);
    if (*(code **)(iVar1 + 0x50f8) != (code *)0x0) {
      (**(code **)(iVar1 + 0x50f8))(9,iVar1 + 0x5120);
    }
    FUN_02051890(iVar1 + 0x5134,iVar1 + 0x5624,0x18);
    FUN_02051890(auStack_18,iVar1 + 0x512c,6);
    *(undefined4 *)(iVar1 + 0x50f0) = 1;
    uVar3 = FUN_02058e64(FUN_0215f110,iVar1 + 0x5120,iVar1 + 0x5624);
    FUN_0215fcb8(iVar1,0xc,uVar3);
    return;
  }
  if (*param_1 == 0xc) {
    *(short *)(iVar1 + 0x50e4) = param_1[5];
    uVar3 = FUN_02059864(FUN_0215ef6c,iVar1 + 0x1120,*(undefined2 *)(iVar1 + 0x50ea),iVar1 + 0xf00);
    FUN_0215fcb8(iVar1,0xe,uVar3);
    return;
  }
  if (*param_1 != 0xe) {
    return;
  }
  if (param_1[2] == 10) {
    FUN_0215f994(iVar1,5,param_1);
    return;
  }
  return;
}

