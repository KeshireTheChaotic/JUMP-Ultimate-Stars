
void FUN_02161170(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_38;
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  iVar1 = FUN_0214d37c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  local_18 = (int)*(short *)(*(int *)(iVar1 + 4) + 0xcc) << 0xc;
  local_1c = 0x4000;
  FUN_021511c8(param_1,&local_18,&local_1c);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x90;
  uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
  iVar1 = jus_AllocDebug(0xb4,s_ALWidget_inl_0216bd54,s_Create_0216cbb0,0x226);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    piVar3 = (int *)func_0x021af494(iVar1,*(undefined4 *)(param_1 + 4),uVar4,(uVar2 & 1) == 1,
                                    FUN_02161358,0);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  func_0x021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(piVar3[6] + 4));
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02160d54(0x800003,0x800000,*(undefined4 *)(iVar1 + 0x88),0x20);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_24 = 0xc000;
  local_20 = 0xffff8000;
  FUN_021511c8(iVar1,&local_20,&local_24);
  FUN_0214e688(param_1,iVar1);
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02160d54(0x800007,0x800000,*(undefined4 *)(iVar1 + 0x88),0x20);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_2c = 0x84000;
  local_28 = 0xffff8000;
  FUN_021511c8(iVar1,&local_28,&local_2c);
  FUN_0214e688(param_1,iVar1);
  FUN_0214dc98(auStack_34,0xfffffff1,0,0,0x90);
  uVar4 = FUN_02150a40(0,auStack_34,&DAT_02093c8c);
  FUN_02020e98(param_1,uVar4);
  local_38 = 0x59000;
  FUN_0214e6c0(param_1,&local_38);
  return;
}

