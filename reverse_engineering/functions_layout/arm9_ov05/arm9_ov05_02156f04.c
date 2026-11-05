
undefined4 FUN_02156f04(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x18,1,0x80,6,0);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x19,0x80,7,0);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x29,0x80,6,0);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x39,0x80,6,0);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x59,0x80,7,0);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x69,0x80,6,0);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x78,0x80,6,0);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x89,0x80,7,0);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0x99,0x80,6,0);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,0x10,0xa8,0x80,6,0);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  iVar2 = FUN_0203b404();
  uVar1 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0xa00000,0,0x10,8,0x80);
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  iVar2 = FUN_0203b404();
  uVar1 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x830000,0,0xee,0x61,0x80);
  *(undefined4 *)(param_2 + 0x48) = uVar1;
  iVar2 = FUN_0203b404();
  uVar1 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x830000,0,0xee,0x91,0x80);
  *(undefined4 *)(param_2 + 0x4c) = uVar1;
  return 1;
}

