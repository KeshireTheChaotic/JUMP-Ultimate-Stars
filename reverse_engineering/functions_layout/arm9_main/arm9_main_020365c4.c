
int * FUN_020365c4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  piVar1 = (int *)(**(code **)(*DAT_020a0dfc + 8))();
  iVar2 = (**(code **)(*param_2 + 0x2c))(param_2,0);
  iVar3 = (**(code **)(*param_2 + 0x1c))();
  iVar8 = *(int *)(iVar2 + 8) + iVar2;
  iVar4 = FUN_0201a228(0x30);
  if (iVar4 != 0) {
    ALStreamImp::ALStreamImp(iVar4,iVar8,iVar3 - (iVar8 - iVar2),0,param_4);
  }
  iVar3 = FUN_0200fac4();
  if ((*(byte *)(iVar2 + 5) & 2) == 0) {
    piVar5 = (int *)FUN_02016628(*(undefined4 *)(iVar3 + 4),0);
  }
  else {
    iVar4 = **(int **)(iVar3 + 4);
    if ((*(byte *)(iVar2 + 5) & 4) == 0) {
      puVar9 = (undefined4 *)(**(code **)(iVar4 + 0x2c))(*(int **)(iVar3 + 4),0);
      piVar5 = (int *)FUN_020165dc(*puVar9);
    }
    else {
      (**(code **)(iVar4 + 0x2c))();
      piVar5 = (int *)FUN_02016594();
    }
  }
  (**(code **)(*piVar1 + 0x28))(piVar1,piVar5);
  (**(code **)(*piVar5 + 0xc))();
  (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
  iVar3 = iVar2 + (uint)*(ushort *)(iVar2 + 0xc);
  uVar7 = (uint)*(ushort *)(iVar3 + 4);
  if (uVar7 != 0) {
    if ((*(byte *)(iVar3 + 6) & 3) >> 1 == 0) {
      FUN_020360d0(piVar1,uVar7,iVar3 + 8);
    }
    else {
      FUN_0203616c(piVar1,uVar7,iVar3 + 8,iVar3 + 8 + uVar7 * 8);
    }
  }
  if (1 < *(ushort *)(iVar2 + 6)) {
    iVar4 = 0;
    iVar3 = 0;
    while (iVar4 < (int)(uint)*(ushort *)(iVar2 + 6)) {
      puVar9 = (undefined4 *)(iVar2 + (uint)*(ushort *)(iVar2 + 0xc + iVar4 * 2));
      iVar6 = FUN_0201a228(0x48);
      iVar8 = 0;
      if (iVar6 != 0) {
        iVar8 = jus_Class_02095ba4::jus_Class_02095ba4(iVar6,piVar1);
      }
      *(undefined4 *)(iVar8 + 8) = *puVar9;
      FUN_020324dc(&DAT_020a1d78,iVar8);
      if ((*(byte *)((int)puVar9 + 6) & 1) != 0) {
        FUN_0203263c(iVar8,puVar9 + -8);
        FUN_020324dc(&DAT_020a1d78,iVar8);
      }
      FUN_020324dc(&DAT_020a1d78,iVar8);
      uVar7 = (uint)*(ushort *)(puVar9 + 1);
      if ((*(byte *)((int)puVar9 + 6) & 3) >> 1 == 0) {
        FUN_020360d0(iVar8,uVar7,puVar9 + 2);
      }
      else {
        FUN_0203616c(iVar8,uVar7,puVar9 + 2,puVar9 + 2 + uVar7 * 2);
      }
      iVar4 = iVar4 + 1;
      if (piVar1[9] == 0) {
        piVar1[9] = iVar8;
      }
      else {
        *(int *)(iVar3 + 0x44) = iVar8;
      }
      iVar3 = iVar8;
    }
  }
  return piVar1;
}

