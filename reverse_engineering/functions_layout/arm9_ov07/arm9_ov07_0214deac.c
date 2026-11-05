
void FUN_0214deac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = piVar2[2];
  if ((iVar1 == 0) || (*(int *)(*(int *)(iVar1 + 4) + 0x224) != 0)) {
    uStack_10 = param_4;
    if (iVar1 != 0) {
      FUN_0214ddc0(4);
      FUN_0214ddc0(2);
      iVar1 = FUN_0203b3e4();
      FUN_0214ddf0(*(undefined4 *)(iVar1 + 0x88),0x3f,0);
      iVar1 = FUN_0203b3f4();
      FUN_0214ddf0(*(undefined4 *)(iVar1 + 0x88),0x3f,0);
      iVar1 = FUN_0203b3e4();
      FUN_0214de1c(*(undefined4 *)(iVar1 + 0x88),0xfffffff0);
      iVar1 = FUN_0203b3f4();
      FUN_0214de1c(*(undefined4 *)(iVar1 + 0x88),0xfffffff0);
      local_20 = 0;
      local_24 = 0;
      local_28 = 0;
      iVar1 = FUN_0203b3e4();
      FUN_0214de30(*(undefined4 *)(iVar1 + 0x88),&local_28,&local_24,&local_20);
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      iVar1 = FUN_0203b3f4();
      FUN_0214de30(*(undefined4 *)(iVar1 + 0x88),&local_1c,&local_18,&local_14);
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
      FUN_0214ddc0(2);
    }
    iVar1 = func_0x021a3264();
    if (iVar1 != 0) {
      piVar2[4] = 0x18;
    }
    if (*(code **)(&DAT_021689b4 + piVar2[4] * 4) == (code *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(&DAT_021689b4 + piVar2[4] * 4))();
    }
    piVar2[2] = iVar1;
    if (piVar2[2] == 0) {
      iVar1 = piVar2[3];
      (**(code **)(*(int *)piVar2[1] + 8))();
      DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
      DAT_02093c04 = DAT_02093c04 + 1;
      DAT_020afcb8 = piVar2[3];
      (**(code **)(**(int **)(*piVar2 + 4) + 0xc))();
      DAT_0216ad68 = 0;
      FUN_0201b244(piVar2);
      if ((iVar1 != 9 && iVar1 != 0xe) && iVar1 != 0xf) {
        func_0x02199fd8();
      }
      FUN_0201ad30(DAT_020a0dd8,1,1);
    }
    else {
      piVar2[4] = 0;
    }
  }
  return;
}

