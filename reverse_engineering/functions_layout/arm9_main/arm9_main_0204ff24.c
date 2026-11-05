
void FUN_0204ff24(int param_1,int param_2,int param_3,byte *param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte abStack_118 [64];
  byte abStack_d8 [64];
  byte abStack_98 [20];
  undefined1 auStack_84 [104];
  
  pbVar2 = abStack_118;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_4 == (byte *)0x0) {
    return;
  }
  if (param_5 == 0) {
    return;
  }
  if (0x40 < param_5) {
    FUN_02050408(auStack_84);
    FUN_020502ac(auStack_84,param_4,param_5);
    FUN_020500b0(auStack_84,abStack_98);
    param_5 = 0x14;
    param_4 = abStack_98;
  }
  iVar1 = 0;
  if (0 < param_5) {
    pbVar3 = abStack_d8;
    do {
      iVar1 = iVar1 + 1;
      *pbVar2 = *param_4 ^ 0x36;
      pbVar2 = pbVar2 + 1;
      *pbVar3 = *param_4 ^ 0x5c;
      pbVar3 = pbVar3 + 1;
      param_4 = param_4 + 1;
    } while (iVar1 < param_5);
  }
  if (iVar1 < 0x40) {
    pbVar3 = abStack_118 + iVar1;
    pbVar2 = abStack_d8 + iVar1;
    do {
      *pbVar3 = 0x36;
      iVar1 = iVar1 + 1;
      *pbVar2 = 0x5c;
      pbVar3 = pbVar3 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar1 < 0x40);
  }
  FUN_02050408(auStack_84);
  FUN_020502ac(auStack_84,abStack_118,0x40);
  FUN_020502ac(auStack_84,param_2,param_3);
  FUN_020500b0(auStack_84,abStack_98);
  FUN_02050408(auStack_84);
  FUN_020502ac(auStack_84,abStack_d8,0x40);
  FUN_020502ac(auStack_84,abStack_98,0x14);
  FUN_020500b0(auStack_84,param_1);
  return;
}

