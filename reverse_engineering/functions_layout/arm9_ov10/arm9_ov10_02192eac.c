
void FUN_02192eac(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x70) = 0;
    bVar4 = true;
    cVar1 = *(char *)(param_1 + 0x73);
    if ((cVar1 != '\0') && (cVar1 != '\x04')) {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_02192e3c(*(undefined4 *)(param_1 + 0x68));
      FUN_02192e3c(*(undefined4 *)(param_1 + 100));
    }
    else if (cVar1 == '\x01') {
      piVar2 = *(int **)(*(int *)(param_1 + 100) + 0x104);
      while (piVar2 != (int *)0x0) {
        piVar2 = (int *)*piVar2;
        (**(code **)(DAT_021a9d20 + 0x1c))();
      }
      *(undefined2 *)(*(int *)(param_1 + 100) + 0x108) = 0;
      *(undefined4 *)(*(int *)(param_1 + 100) + 0x100) = 0;
      *(undefined4 *)(*(int *)(param_1 + 100) + 0x104) = 0;
      FUN_02053210(*(int *)(param_1 + 100) + 0x10c);
      FUN_02192e3c(*(undefined4 *)(param_1 + 100));
    }
    else if (cVar1 == '\x02') {
      FUN_02192e3c(*(undefined4 *)(param_1 + 0x68));
    }
    uVar3 = OS_DisableInterrupts();
    FUN_021934d4(param_1);
    FUN_02193494(param_1);
    (**(code **)(DAT_021a9d20 + 0x1c))(param_1);
    OS_RestoreInterrupts(uVar3);
  }
  return;
}

