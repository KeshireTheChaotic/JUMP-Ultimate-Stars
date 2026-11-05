
void FUN_02191578(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = DAT_021a8538 != 0;
  DAT_021a8538 = 0;
  DAT_021a8504 = 0;
  DAT_021a8514 = 0;
  DAT_021a8550 = 0;
  DAT_021a8554 = 0;
  DAT_021a8508 = 0;
  DAT_021a84f4 = param_1;
  if (bVar4) {
    FUN_020517fc(&DAT_021a85ac,0,0x60);
    for (iVar3 = DAT_020aab7c; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x68)) {
      piVar1 = *(int **)(iVar3 + 0xa4);
      if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
        if (((char)piVar1[2] != '\n') && ((char)piVar1[2] != '\v')) {
          *(undefined1 *)(piVar1 + 2) = 0;
        }
        if (piVar1[1] != 0) {
          piVar1[1] = 0;
          FUN_020531dc(*piVar1);
        }
      }
    }
    iVar3 = 0;
    puVar2 = &DAT_021a8b54;
    do {
      if (*(short *)(puVar2 + 1) != 0) {
        (*DAT_021a8528)(puVar2[0xd]);
        *(undefined2 *)(puVar2 + 1) = 0;
      }
      puVar2 = puVar2 + 0xe;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    FUN_02193ba8();
  }
  return;
}

