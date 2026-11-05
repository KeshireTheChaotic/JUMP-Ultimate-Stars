
void FUN_0215a868(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort local_3c [20];
  
  iVar5 = param_1 * 0x2a;
  iVar1 = FUN_02167538(*DAT_0216e774 + iVar5,0x20);
  param_2 = param_2 * 0x1c;
  if (param_1 < (int)(uint)*(byte *)((int)DAT_0216e774 + 0x51)) {
    if (iVar1 < 0x11) {
      param_2 = param_2 + 6;
    }
    FUN_020517fc(local_3c,0,0x22);
    if (iVar1 < 0x11) {
      iVar2 = iVar1;
    }
    else {
      iVar2 = 0x10;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      puVar3 = local_3c;
      do {
        *puVar3 = (ushort)*(byte *)(iVar4 + iVar5 + *DAT_0216e774);
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    FUN_02166428(DAT_0216e774[3],10,param_2,2,10,local_3c,1);
    if (0x10 < iVar1) {
      FUN_020517fc(local_3c,0,0x22);
      iVar2 = 0;
      if (0 < iVar1 + -0x10) {
        puVar3 = local_3c;
        do {
          *puVar3 = (ushort)*(byte *)(iVar2 + 0x10 + iVar5 + *DAT_0216e774);
          puVar3 = puVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1 + -0x10);
      }
      FUN_02166428(DAT_0216e774[3],10,param_2 + 0xc,2,10,local_3c,1);
    }
  }
  return;
}

