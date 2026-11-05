
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02084d60(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
                    /* JUS-TAG strings=["stage/SuddenDeath.bin"] */
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = FUN_0203b414(1);
  FUN_0206c498(*(undefined4 *)(iVar2 + 0x88));
  FUN_02032a4c(*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  iVar2 = FUN_02011b38();
  FUN_020796b8(iVar2,0x1b);
  iVar5 = (int)_DAT_021723b6;
  uVar1 = param_2[1];
  FUN_02084e90(&local_2c,uVar4);
  local_28 = ((uint)uVar1 * 0x1000 - local_2c) + iVar5 * -0x1000 + -0x8000;
  iVar5 = (int)_DAT_021723b4;
  uVar1 = *param_2;
  FUN_02084e7c(&local_24,uVar4);
  local_20 = ((uint)uVar1 * 0x1000 - local_24) + iVar5 * -0x1000;
  FUN_0206c9f8(iVar2,&local_20,&local_28);
  FUN_0206c514(iVar2,uVar4);
  local_30 = 0x14000;
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_30);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  *(int *)(param_1 + 0x28) = iVar2;
  FUN_0206c54c();
  uVar4 = FUN_02084ea4(*(undefined4 *)(param_1 + 0xc));
  uVar4 = CommonPaletteAnime::CommonPaletteAnime_Load(uVar4,s_stage_SuddenDeath_bin_020a0078,0x8a);
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  return;
}

