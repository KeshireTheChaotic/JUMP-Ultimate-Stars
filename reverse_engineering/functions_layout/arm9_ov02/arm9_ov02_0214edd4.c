
/* JUS-GAME ALNodeImp::Create [source-string] __FILE__="ALNodeImp.h" __FUNCTION__="Create"
   lines=[1219] passed to 1 source-location call(s) */

void ALNodeImp::Create(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = thunk_FUN_0201a228(0x78,&DAT_0215bfa4,s_Create_0215bea0,0x4c3);
  if (iVar1 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar1,FUN_02024a30,1);
  }
  iVar1 = FUN_0214d498();
  FUN_0214d6b0(*(undefined4 *)(param_1 + 8),iVar1);
  FUN_02023940(*(undefined4 *)(iVar1 + 4));
  FUN_0214ef10(&local_18,iVar1,s_Position_0215c048);
  piVar2 = *(int **)(*(int *)(iVar1 + 4) + 0x68);
  (**(code **)(*piVar2 + 0xac))(piVar2,0);
  local_1c = 0x100000;
  FUN_0214ef60(iVar1,&local_1c);
  FUN_02023c60(*(undefined4 *)(iVar1 + 4),local_18,0,local_14);
  local_20 = 0;
  FUN_0214ef60(iVar1,&local_20);
  FUN_02023c60(*(undefined4 *)(iVar1 + 4),local_18,8,local_14);
  FUN_02023c80(*(undefined4 *)(iVar1 + 4),local_18,0x494c,local_14);
  local_24 = 0x100000;
  FUN_0214ef60(iVar1,&local_24);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x70))();
  local_28 = 0x4c000;
  FUN_0214d650(iVar1,&local_28);
  *(int *)(param_1 + 4) = iVar1;
  return;
}

