
/* JUS-SCENE jus_Scene28_CreateImpl [scene-map] called by scene 28 create wrapper 0206fb1c while
   overlay 1 is resident */

undefined4
jus_Scene28_CreateImpl(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_020734e0(0x34);
  FUN_0207361c(0x34,0);
  iVar1 = jus_AllocDebug(0x268,0x216c3d4,0x216c2d4,0x141);
  FUN_0214ff80(iVar1,0x268);
  uVar2 = FUN_020310f4();
  *(undefined4 *)(iVar1 + 4) = uVar2;
  FUN_0214ff94();
  uVar2 = FUN_02020d90();
  FUN_0214dc10(auStack_18,0x85);
  FUN_0214ffd0(uVar2,auStack_18);
  func_0x0214fff4(uVar2,0x2154271);
  FUN_02150004(uVar2,iVar1);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(uint *)(iVar1 + 0xf4) = param_1 & 0xff;
  *(uint *)(iVar1 + 0xf8) = (param_1 & 0xff00) >> 8;
  func_0x02156fb4(iVar1);
  uVar2 = FUN_02028920(0);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  uVar2 = PopularNameData::PopularNameData_Create();
  *(undefined4 *)(iVar1 + 0xe8) = uVar2;
  FUN_0215447c();
  func_0x021546fc(iVar1);
  func_0x0215475c(iVar1);
  func_0x02154a6c(iVar1);
  FUN_02156270(iVar1);
  func_0x02154d50(iVar1);
  func_0x021560b4(iVar1);
  func_0x0215001c(0x214fdfc);
  func_0x0215002c(0x30078);
  func_0x02150074(0x10078);
  func_0x02150088(0x10000,0x30078);
  FUN_02073ebc(2,1);
  FUN_02150094(*(undefined4 *)(iVar1 + 0x38));
  *(uint *)(iVar1 + 0xec) = *(uint *)(iVar1 + 0xec) | 0x70;
  DAT_0216de44 = iVar1;
  return *(undefined4 *)(iVar1 + 4);
}

