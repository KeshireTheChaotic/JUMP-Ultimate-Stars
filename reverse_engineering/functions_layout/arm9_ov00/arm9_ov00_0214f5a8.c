
void FUN_0214f5a8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 local_10;
  
  iVar2 = 0;
  if ((char)param_1[7] == '\0') {
    if (*param_1 != 0) {
      FUN_0214f464(*param_1,1);
      FUN_0214f768(*param_1,0);
      FUN_0214f70c(&local_1c,*(undefined4 *)(*param_1 + 8));
      FUN_02019db8(local_1c);
      FUN_0214f70c(auStack_18,*(undefined4 *)(*param_1 + 8));
      iVar2 = FUN_0214f724(auStack_18);
    }
  }
  else {
    if (param_1[3] != 0) {
      piVar1 = *(int **)(param_1[3] + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      FUN_0214f70c(&local_10,param_1[3]);
      FUN_02019db8(local_10);
      FUN_0214f70c(auStack_14,param_1[3]);
      iVar2 = FUN_0214f724(auStack_14);
    }
    if (param_1[4] != 0) {
      piVar1 = *(int **)(param_1[4] + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
    if (param_1[5] != 0) {
      piVar1 = *(int **)(param_1[5] + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
  }
  if (iVar2 != 0) {
    iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create
                      (iVar2,1,*(short *)(*(int *)(iVar2 + 4) + 8) - 1U & 0xff,9,0x81);
    param_1[6] = iVar2;
    *(undefined2 *)(iVar2 + 0x16) = 0xffff;
    *(undefined1 *)(iVar2 + 0x18) = 0x10;
    *(undefined1 *)(iVar2 + 0x11) = 0x10;
    *(undefined1 *)(iVar2 + 0x19) = 0xff;
  }
  return;
}

