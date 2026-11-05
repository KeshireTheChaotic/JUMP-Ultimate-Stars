
int FUN_02058e64(undefined4 param_1,ushort *param_2,int param_3,undefined4 param_4,
                undefined2 param_5)

{
  int iVar1;
  undefined2 auStack_40 [2];
  ushort *puStack_3c;
  undefined1 auStack_38 [24];
  undefined4 uStack_20;
  undefined2 uStack_1a;
  
  iVar1 = FUN_02057f40(1,2);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 == (ushort *)0x0) {
    return 6;
  }
  DC_StoreRange(param_2,(uint)*param_2 << 1);
  iVar1 = FUN_02058060();
  *(undefined2 *)(iVar1 + 0x150) = 0;
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  FUN_02058214(0xc,param_1);
  auStack_40[0] = 0xc;
  puStack_3c = param_2;
  if (param_3 == 0) {
    FUN_020517fc(auStack_38,0,0x18);
  }
  else {
    FUN_02051890(param_3,auStack_38,0x18);
  }
  uStack_1a = param_5;
  uStack_20 = param_4;
  iVar1 = FUN_02058070(auStack_40,0x28);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

