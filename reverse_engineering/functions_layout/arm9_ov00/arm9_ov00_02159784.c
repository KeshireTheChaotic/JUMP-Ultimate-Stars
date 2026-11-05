
/* WARNING: Removing unreachable block (ram,0x02159820) */

int FUN_02159784(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_48;
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  func_0x021ae3a4(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  iVar1 = FUN_0214ed84();
  local_2c = 0xa2000;
  FUN_0214eed0(iVar1,&local_2c);
  func_0x021c5fb4(*(undefined4 *)(param_2 + 4));
  iVar2 = FUN_0214ed84();
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x68))(piVar3,param_3);
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0xa8))(piVar3,6);
  *(code **)(*(int *)(iVar1 + 4) + 0xdc) = FUN_02159ee4;
  func_0x021b5898(*(undefined4 *)(iVar1 + 4));
  piVar3 = *(int **)(iVar2 + 4);
  (**(code **)(**(int **)(iVar1 + 4) + 0xb4))(*(int **)(iVar1 + 4),piVar3);
  (**(code **)(*piVar3 + 0xc))();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  local_30 = 0x83000;
  FUN_0214eed0(iVar2,&local_30);
  piVar3 = *(int **)(iVar2 + 4);
  if (iVar1 == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(iVar1 + 4));
  }
  local_3c = 0;
  local_38 = 0x8000;
  local_34 = 0x4c000;
  FUN_02151038(auStack_28,&local_34,&local_38,&local_3c);
  iVar2 = FUN_0203b404();
  FUN_021583dc(0xb20000,0xb20000,*(undefined4 *)(iVar2 + 0x88),auStack_28,iVar1,0x84);
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  FUN_02158e5c(auStack_44,0,0,0x88,0x10);
  iVar2 = ALWidgetImp::Create(param_1,iVar1,&DAT_02093c8c,auStack_44);
  local_48 = 0xa2000;
  FUN_0214eed0(iVar2,&local_48);
  func_0x021b65e8(*(undefined4 *)(iVar2 + 4),4,FUN_02159f98);
  *(code **)(*(int *)(iVar2 + 4) + 0xdc) = FUN_02159f18;
  *(undefined1 **)(*(int *)(iVar2 + 4) + 0xe0) = &LAB_02159ed0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x124) = param_4;
  func_0x021b6214(*(undefined4 *)(iVar2 + 4),0);
  func_0x021b6214(*(undefined4 *)(iVar1 + 4),0);
  return iVar1;
}

