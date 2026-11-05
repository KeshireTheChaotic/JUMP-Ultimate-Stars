
void FUN_021953d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  iVar2 = param_3 + 0x348;
  FUN_02196a88(iVar2);
  uVar1 = FUN_02004b04(param_2);
  FUN_021969fc(iVar2,param_2,uVar1);
  FUN_021969fc(iVar2,param_3,0x30);
  FUN_021969fc(iVar2,param_3 + 0x34,0x40);
  FUN_021969a8(iVar2,auStack_28);
  iVar2 = param_3 + 0x3fc;
  FUN_02196500(iVar2);
  FUN_02196474(iVar2,param_3,0x30);
  FUN_02196474(iVar2,auStack_28,0x14);
  FUN_02196420(iVar2,param_1);
  return;
}

