
void FUN_02159aa4(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_0214ed84(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  local_30 = (int)*(short *)(*(int *)(iVar1 + 4) + 0xcc) << 0xc;
  local_34 = 0xffffa000;
  FUN_0214f418(param_1,&local_30,&local_34);
  local_38 = 0x81000;
  FUN_0214eed0(param_1,&local_38);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x87;
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
  iVar1 = jus_AllocDebug(0xb4,s_ALWidget_inl_021615d8,s_Create_021615d0,0x226);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)func_0x021af494(iVar1,*(undefined4 *)(param_1 + 4),uVar4,(uVar2 & 1) == 1,
                                    FUN_02159d0c,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  func_0x021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(piVar3[6] + 4));
  local_44 = 0;
  local_40 = 0xd000;
  local_3c = 0;
  FUN_02151038(auStack_20,&local_3c,&local_40,&local_44);
  iVar1 = FUN_0203b404();
  FUN_021583dc(0xb10000,0xb10000,*(undefined4 *)(iVar1 + 0x88),auStack_20,param_1,0x81);
  local_50 = 0;
  local_48 = 0;
  local_4c = 0x7a000;
  FUN_02151038(auStack_2c,&local_48,&local_4c,&local_50);
  iVar1 = FUN_0203b404();
  FUN_021583dc(0xb10004,0xb10000,*(undefined4 *)(iVar1 + 0x88),auStack_2c,param_1,0x81);
  FUN_02158e5c(auStack_58,0xfffffff7,0,9,0x87);
  uVar4 = FUN_02159c80(0,auStack_58,&DAT_02093c8c);
  FUN_02020e98(param_1,uVar4);
  return;
}

