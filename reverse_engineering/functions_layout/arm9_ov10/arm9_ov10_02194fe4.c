
void FUN_02194fe4(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [20];
  
  FUN_02051890(param_1 + 0x3a4,param_1 + 0x3fc,0x58);
  FUN_02195134(param_1,auStack_20,1);
  FUN_02051890(param_1 + 0x3fc,param_1 + 0x3a4,0x58);
  iVar1 = FUN_020024cc(param_2,auStack_20,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x455) = 9;
    return;
  }
  FUN_02051890(param_1 + 0x2ec,param_1 + 0x348,0x5c);
  FUN_02195094(param_1,auStack_20,1);
  FUN_02051890(param_1 + 0x348,param_1 + 0x2ec,0x5c);
  iVar1 = FUN_020024cc(param_2 + 0x10,auStack_20,0x14);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x455) = 6;
    return;
  }
  *(undefined1 *)(param_1 + 0x455) = 9;
  return;
}

