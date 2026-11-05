
void FUN_02195134(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_40 [48];
  
  iVar1 = param_1 + 0x3a4;
  if (*(byte *)(param_1 + 0x454) == param_3) {
    FUN_02196474(iVar1,&DAT_021a6f70,4);
  }
  else {
    FUN_02196474(iVar1,&DAT_021a6f68,4);
  }
  FUN_02196474(iVar1,param_1,0x30);
  FUN_020517fc(auStack_40,0x36,0x30);
  FUN_02196474(iVar1,auStack_40,0x30);
  FUN_02196420(iVar1,param_2);
  FUN_02196500(iVar1);
  FUN_02196474(iVar1,param_1,0x30);
  FUN_020517fc(auStack_40,0x5c,0x30);
  FUN_02196474(iVar1,auStack_40,0x30);
  FUN_02196474(iVar1,param_2,0x10);
  FUN_02196420(iVar1,param_2);
  return;
}

