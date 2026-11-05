
/* JUS-SCENE jus_Scene41_Create [scene-map] scene table 0209e32c row 41 create; slot-1 overlay 8 */

undefined4 jus_Scene41_Create(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_r3;
  int iVar6;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  iVar2 = jus_AllocDebug(uRam02167a50,uRam02167a4c,PTR_s_WiFi_ConnectionAdd_02167a54,0x2b);
  FUN_020517fc(iVar2,0,uRam02167a50);
  uVar3 = func_0x021ba49c(1,3,1);
  *(undefined4 *)(iVar2 + 0x40008) = uVar3;
  iVar4 = FUN_02026f94();
  *(int *)(iVar2 + 0x40004) = iVar4;
  uStack_10 = 0x80000;
  (**(code **)(**(int **)(iVar4 + 4) + 0xa0))(*(int **)(iVar4 + 4),&uStack_10);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar2 + 0x40004) + 4),PTR_FUN_02167a58);
  piVar5 = *(int **)(*(int *)(iVar2 + 0x40004) + 4);
  (**(code **)(*piVar5 + 0x24))(piVar5,iVar2);
  iVar4 = FUN_020310f4();
  *(int *)(iVar2 + 0x40000) = iVar4;
  puVar1 = PTR_DAT_02167a64;
  iVar6 = *(int *)PTR_DAT_02167a5c;
  uVar3 = *(undefined4 *)PTR_DAT_02167a60;
  *(int *)PTR_DAT_02167a5c = iVar6 + -1;
  *(undefined4 *)(puVar1 + (iVar6 + -1) * 4) = uVar3;
  FUN_020314a0(*(undefined4 *)(iVar4 + 4));
  FUN_02073ebc(1,1);
  return *(undefined4 *)(iVar2 + 0x40000);
}

