
void FUN_02195094(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_38 [40];
  
  iVar1 = param_1 + 0x2ec;
  if (*(byte *)(param_1 + 0x454) == param_3) {
    FUN_021969fc(iVar1,&DAT_021a6f70,4);
  }
  else {
    FUN_021969fc(iVar1,&DAT_021a6f68,4);
  }
  FUN_021969fc(iVar1,param_1,0x30);
  FUN_020517fc(auStack_38,0x36,0x28);
  FUN_021969fc(iVar1,auStack_38,0x28);
  FUN_021969a8(iVar1,param_2);
  FUN_02196a88(iVar1);
  FUN_021969fc(iVar1,param_1,0x30);
  FUN_020517fc(auStack_38,0x5c,0x28);
  FUN_021969fc(iVar1,auStack_38,0x28);
  FUN_021969fc(iVar1,param_2,0x14);
  FUN_021969a8(iVar1,param_2);
  return;
}

