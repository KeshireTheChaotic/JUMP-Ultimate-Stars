
void FUN_0214cf9c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = piVar2[2];
  if ((iVar1 == 0) || (*(int *)(*(int *)(iVar1 + 4) + 0x224) != 0)) {
    if (iVar1 != 0) {
      FUN_0214ceb0(4);
      FUN_0214ceb0(2);
      iVar1 = FUN_0203b3e4();
      FUN_0214cee0(*(undefined4 *)(iVar1 + 0x88),0x3f,0);
      iVar1 = FUN_0203b3f4();
      FUN_0214cee0(*(undefined4 *)(iVar1 + 0x88),0x3f,0);
      iVar1 = FUN_0203b3e4();
      FUN_0214cf0c(*(undefined4 *)(iVar1 + 0x88),0xfffffff0);
      iVar1 = FUN_0203b3f4();
      FUN_0214cf0c(*(undefined4 *)(iVar1 + 0x88),0xfffffff0);
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      iVar1 = FUN_0203b3e4();
      FUN_0214cf20(*(undefined4 *)(iVar1 + 0x88),&local_20,&local_1c,&local_18);
      local_c = 0;
      local_10 = 0;
      local_14 = 0;
      iVar1 = FUN_0203b3f4();
      FUN_0214cf20(*(undefined4 *)(iVar1 + 0x88),&local_14,&local_10,&local_c);
      FUN_02043264(0);
      FUN_02041f7c(DAT_020a0f64,0);
      FUN_0203d4e4();
      iVar1 = FUN_0203b424(0);
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x958) = 0;
      iVar1 = FUN_0203b424(1);
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x958) = 0;
      iVar1 = FUN_0203b424(2);
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x958) = 0;
      iVar1 = FUN_0203b424(3);
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x958) = 0;
      iVar1 = FUN_0203b414(1);
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x958) = 0;
      iVar1 = FUN_0203b414(2);
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x958) = 0;
      iVar1 = FUN_0203b414(3);
      *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x958) = 0;
      FUN_0214ceb0(2);
    }
    if (*(code **)(&DAT_0216038c + piVar2[5] * 4) == (code *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(&DAT_0216038c + piVar2[5] * 4))();
    }
    piVar2[2] = iVar1;
    if (piVar2[2] == 0) {
      (**(code **)(*(int *)piVar2[1] + 8))();
      FUN_0214f108(*piVar2);
      DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
      DAT_02093c04 = DAT_02093c04 + 1;
      DAT_020afcb8 = piVar2[3];
      (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
      DAT_02161de0 = 0;
      FUN_0201b244(piVar2);
    }
    else {
      piVar2[5] = 0;
    }
  }
  return;
}

