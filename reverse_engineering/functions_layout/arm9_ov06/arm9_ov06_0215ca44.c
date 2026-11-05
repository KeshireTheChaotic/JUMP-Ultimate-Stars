
void FUN_0215ca44(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int unaff_r4;
  bool bVar4;
  
  iVar2 = FUN_0215b158();
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x1e6) = 0;
    *(undefined1 *)(param_1 + 0xdb) = 0;
    FUN_0215aed0(*(undefined4 *)(param_1 + 0x1a4),7);
    FUN_0215b520(param_1,0);
    *(undefined1 *)(param_1 + 0x1e8) = 0x55;
    *(undefined1 *)(param_1 + 0x1e7) = 1;
  }
  iVar2 = FUN_0215c824(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_02078660(*(undefined4 *)(param_1 + 0x1b4),1,0);
  if (iVar2 != 0) {
    FUN_02157494(param_1,0x19,FUN_0215cc54,FUN_0215ccb0,0x10);
    return;
  }
  if (*(char *)(param_1 + 0x1e7) == '\0') {
    return;
  }
  iVar2 = FUN_02078660(*(undefined4 *)(param_1 + 0x1b4),0,1);
  if (iVar2 == 0) {
    unaff_r4 = 1;
  }
  *(undefined1 *)(param_1 + 0x1e7) = 0;
  if (iVar2 != 0) {
    unaff_r4 = 0;
  }
  bVar4 = *(char *)(DAT_02172960 + 200) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(DAT_02172960 + 0xcb);
  }
  if (bVar4 && cVar1 != '\0') {
    if (unaff_r4 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 6;
    }
    FUN_0215f744(param_1,uVar3);
  }
  uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar3,3);
  for (iVar2 = extraout_r1 + 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_0215d258(param_1,0x1c,iVar2);
  }
  FUN_0215b520(param_1,0x3c);
  iVar2 = FUN_02150318(DAT_02172960);
  if (iVar2 == 0) {
    FUN_0215cc04(DAT_02172960,(int)*(char *)(param_1 + 0x1e0),-(unaff_r4 + 1));
    FUN_0215cc2c(DAT_02172960,(int)*(char *)(param_1 + 0x1e0),-(unaff_r4 + 1));
    FUN_020785b8(*(undefined4 *)(param_1 + 0x1b4),100);
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x1b4) + 0x56c);
  *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffefff;
  return;
}

