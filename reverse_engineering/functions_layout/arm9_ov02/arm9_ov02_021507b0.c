
void FUN_021507b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0xfffec000;
  local_14 = 0x74000;
  FUN_0214d4c0(param_1,&local_14,&local_18);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x7f;
  iVar1 = FUN_0203b3f4();
  uVar2 = FUN_0214d53c(0x1200e,0x12000,*(undefined4 *)(iVar1 + 0x88),param_1,0x61);
  local_1c = 0x8000;
  FUN_0214f244(uVar2,&local_1c);
  iVar1 = FUN_0203b3f4();
  uVar2 = FUN_0214d53c(0x12010,0x12000,*(undefined4 *)(iVar1 + 0x88),param_1,0x61);
  local_20 = 0x77000;
  FUN_0214f244(uVar2,&local_20);
  local_24 = 0xc8000;
  FUN_0214d650(param_1,&local_24);
  FUN_0214edbc(auStack_2c,0xffffffec,0,0x14,0x7f);
  piVar3 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_0215bc1c,s_Create_0215beb8,0x1b2);
  if (piVar3 != (int *)0x0) {
    func_0x021b054c(piVar3,0,&DAT_02093c8c);
    *piVar3 = (int)&jus_Class_0215bde0::vftable;
    FUN_0214da38(piVar3 + 0x1a,auStack_2c);
    *piVar3 = 0x21d1c58;
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  FUN_02020e98(param_1,piVar3[6]);
  return;
}

