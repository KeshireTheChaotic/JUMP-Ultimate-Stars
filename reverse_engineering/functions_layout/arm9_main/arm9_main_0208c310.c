
void FUN_0208c310(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
                    /* JUS-TAG strings=["Commu/error_2d.aar"] */
  FUN_0208b784(1);
  FUN_02086c24();
  FUN_02043264(1);
  iVar2 = FUN_0203b3e4();
  DAT_02093c08 = DAT_02093c08 + -1;
  uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar1;
  piVar3 = (int *)FUN_020101f4(s_Commu_error_2d_aar_020a0590,0);
  piVar4 = (int *)FUN_020329ec(0x8ff000);
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  piVar4 = (int *)piVar4[6];
  FUN_02023894(piVar4[1],0x8ff002,0);
  (**(code **)(**(int **)(piVar4[1] + 0x68) + 0x6c))();
  piVar6 = *(int **)(piVar4[1] + 0x50);
  piVar6[3] = 0x80000;
  piVar6[4] = 0x60000;
  if (*(byte *)(piVar6 + 9) != (*(byte *)(piVar6 + 9) | 1)) {
    (**(code **)(*piVar6 + 0x18))();
  }
  *(byte *)(piVar6 + 9) = *(byte *)(piVar6 + 9) | 0x31;
  (**(code **)(*(int *)piVar4[1] + 0xd8))((int *)piVar4[1],1);
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  FUN_0207342c(0x78,0xb);
  FUN_02073ebc(2,1);
  while (iVar2 = FUN_0207382c(), iVar2 == 0) {
    (*DAT_020a0e18)();
  }
  while( true ) {
    FUN_02028920(0);
    uVar5 = FUN_0208bcc4();
    if ((uVar5 & 0x10) != 0) break;
    iVar2 = FUN_020208ec(0);
    iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x128))();
    if (iVar2 != 0) break;
    (*DAT_020a0e18)();
  }
  FUN_02073ebc(3,1);
  while (iVar2 = FUN_0207382c(), iVar2 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_02043264(0);
  (**(code **)(*piVar4 + 8))();
  (**(code **)(*piVar3 + 0xc))();
  return;
}

