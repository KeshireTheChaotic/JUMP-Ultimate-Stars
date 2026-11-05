
void FUN_0214ff74(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar5 + 0x544) != '\0') {
    *(undefined1 *)(iVar5 + 0x544) = 0;
    piVar2 = *(int **)(*(int *)(iVar5 + 0x68) + 4);
    if (piVar2[0x52] != 0) {
      uVar3 = (**(code **)(*piVar2 + 0x194))();
      puVar4 = (undefined2 *)
               FUN_0214ff0c(*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x68) + 4) + 0x15c),uVar3);
      if (*(int *)(iVar5 + 0x3f0) == 1) {
        FUN_0214e084(*puVar4);
      }
    }
    FUN_02151888(iVar5,(int)*(char *)(iVar5 + 0x438));
    if (*(char *)(iVar5 + 0x545) != '\0') {
      sVar1 = (**(code **)(**(int **)(*(int *)(iVar5 + 0x68) + 4) + 0x194))();
      (**(code **)(iVar5 + 0x2c))(iVar5,*(undefined4 *)(iVar5 + 0x30),1,(int)sVar1,0);
    }
  }
  FUN_0215224c(iVar5);
  return;
}

