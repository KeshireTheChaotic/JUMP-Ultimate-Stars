
/* JUS-GAME Copyright::Copyright_Add [source-string] __FILE__="Copyright.cpp"
   __FUNCTION__="Copyright_Add" lines=[35] passed to 1 source-location call(s) */

int Copyright::Copyright_Add(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x18,&DAT_02160b50,&DAT_02160b40,0x23);
  FUN_020517fc(piVar1,0,0x18);
  FUN_0206dcdc(0);
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  local_18 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_0214d174);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  puVar3 = (undefined4 *)FUN_02028920(0);
  piVar1[2] = (int)puVar3;
  FUN_02029284(*puVar3);
  iVar2 = FUN_020208ec(0);
  piVar1[3] = iVar2;
  FUN_02020c44(*(undefined4 *)(iVar2 + 4));
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  iVar2 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
  iVar2 = FUN_0203b424(0);
  piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x2000);
  iVar2 = FUN_0203b424(0);
  local_20 = 0;
  piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_20);
  iVar2 = FUN_0203b424(0);
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  uVar5 = FUN_0214d0dc(&DAT_02160b60);
  iVar2 = FUN_0214d108();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))
            (*(int **)(iVar2 + 4),s_copyright_ganbari_atm_02160b78);
  FUN_0214d134(iVar2,uVar5,0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02034d7c(uVar5);
  iVar2 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
  iVar2 = FUN_0203b414(1);
  piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar2 = FUN_0203b414(1);
  local_1c = 0;
  piVar4 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_1c);
  iVar2 = FUN_0203b414(1);
  DAT_020a0dd0 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  uVar5 = FUN_0214d0dc(s_copyright_nintendo_dig_02160b90);
  iVar2 = FUN_0214d108();
  (**(code **)(**(int **)(iVar2 + 4) + 0x130))(*(int **)(iVar2 + 4),&DAT_02160ba8);
  FUN_0214d134(iVar2,uVar5,0);
  piVar4 = *(int **)(*(int *)(iVar2 + 4) + 0x50);
  piVar4[3] = 0;
  piVar4[4] = 0;
  if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
    (**(code **)(*piVar4 + 0x18))();
  }
  *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_02034d7c(uVar5);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  FUN_02073ebc(0,1);
  return *piVar1;
}

