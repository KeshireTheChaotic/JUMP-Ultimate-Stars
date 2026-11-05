
void FUN_021502d8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_20;
  
                    /* JUS-TAG source_file_inferred="JArenaMissionTry.cpp" */
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(uint *)(iVar8 + 0x150) & 4) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x134) + 4) + 0x194))();
    if (*(int *)(iVar8 + 0xfc) != 0) {
      iVar2 = FUN_02152748(*(undefined4 *)(iVar8 + 0x140),
                           *(undefined1 *)(*(int *)(iVar8 + 0x14c) + iVar2));
      if (iVar2 < 0x2a) {
        puVar6 = (undefined *)FUN_0207452c(*(undefined4 *)(iVar8 + 0x148));
      }
      else {
        puVar6 = &DAT_02169d08;
      }
      piVar3 = *(int **)(*(int *)(iVar8 + 0xfc) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
      FUN_021511f0(*(undefined4 *)(iVar8 + 0xfc));
      piVar3 = *(int **)(*(int *)(*(int *)(iVar8 + 0xfc) + 4) + 100);
      (**(code **)(*piVar3 + 0x68))(piVar3,puVar6);
    }
    *(uint *)(iVar8 + 0x150) = *(uint *)(iVar8 + 0x150) & 0xfffffffb;
  }
  if ((*(uint *)(iVar8 + 0x150) & 0x10) != 0) {
    iVar2 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x134) + 4) + 0x194))();
    uVar7 = (uint)*(byte *)(*(int *)(iVar8 + 0x14c) + iVar2);
    if (*(int *)(iVar8 + 0x100) != 0) {
      piVar3 = *(int **)(*(int *)(iVar8 + 0x100) + 4);
      iVar2 = *(int *)(*(int *)(iVar8 + 0x140) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
      FUN_021511f0(*(undefined4 *)(iVar8 + 0x100));
      piVar3 = *(int **)(*(int *)(*(int *)(iVar8 + 0x100) + 4) + 100);
      (**(code **)(*piVar3 + 0x68))(piVar3,iVar2 + uVar7 * 0xa4);
    }
    iVar9 = uVar7 * 0xa4;
    bVar1 = true;
    iVar2 = *(int *)(*(int *)(iVar8 + 0x140) + 4) + iVar9;
    if ((*(char *)(iVar2 + 0x20) == '\0') && (*(char *)(iVar2 + 0x48) == '\0')) {
      bVar1 = false;
    }
    piVar3 = (int *)(iVar8 + 0x104);
    uVar7 = 0;
    do {
      if (*piVar3 != 0) {
        if (bVar1) {
          if ((int)uVar7 < 2) {
            local_20 = *(int *)(*(int *)(iVar8 + 0x140) + 4) + iVar9 + 0x20 + (uVar7 & 0xff) * 0x28;
          }
          else {
            local_20 = FUN_02164454(*(undefined4 *)(iVar8 + 0x144),
                                    *(undefined1 *)
                                     (iVar9 + *(int *)(*(int *)(iVar8 + 0x140) + 4) + 0x76),
                                    uVar7 - 2);
          }
          FUN_021511f0(*piVar3);
          (**(code **)(**(int **)(*piVar3 + 4) + 0xd8))(*(int **)(*piVar3 + 4),1);
          piVar4 = *(int **)(*(int *)(*piVar3 + 4) + 100);
          (**(code **)(*piVar4 + 0x68))(piVar4,local_20);
        }
        else if ((int)uVar7 < 3) {
          uVar5 = FUN_02164454(*(undefined4 *)(iVar8 + 0x144),
                               *(undefined1 *)(iVar9 + *(int *)(*(int *)(iVar8 + 0x140) + 4) + 0x76)
                               ,uVar7);
          FUN_021511f0(*piVar3);
          (**(code **)(**(int **)(*piVar3 + 4) + 0xd8))(*(int **)(*piVar3 + 4),1);
          piVar4 = *(int **)(*(int *)(*piVar3 + 4) + 100);
          (**(code **)(*piVar4 + 0x68))(piVar4,uVar5);
        }
        else {
          FUN_021511f0();
          (**(code **)(**(int **)(*piVar3 + 4) + 0xd8))(*(int **)(*piVar3 + 4),1);
          piVar4 = *(int **)(*(int *)(*piVar3 + 4) + 100);
          (**(code **)(*piVar4 + 0x68))(piVar4,&DAT_0216c008);
        }
      }
      uVar7 = uVar7 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar7 < 5);
    *(uint *)(iVar8 + 0x150) = *(uint *)(iVar8 + 0x150) & 0xffffffef;
  }
  return;
}

