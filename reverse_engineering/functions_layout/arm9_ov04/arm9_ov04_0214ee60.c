
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0214ee60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  uVar1 = ALWidgetImp::Create(param_1,_DAT_021d5154);
  uVar2 = FUN_0214e9f0(param_2,param_3,param_4,param_5);
  FUN_0214e478(uVar1,uVar2);
  local_20 = param_5 << 0xc;
  FUN_0214ea78(uVar1,&local_20);
  local_28 = param_6[1] << 0xc;
  local_24 = *param_6 << 0xc;
  FUN_0214e1b8(uVar1,&local_24,&local_28);
  return uVar1;
}

