
void FUN_0203d4e4(void)

{
  uint uVar1;
  int *piVar2;
  int local_40 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_40[3] = DAT_0208dc70;
  iStack_30 = DAT_0208dc74;
  iStack_2c = DAT_0208dc78;
  iStack_28 = DAT_0208dc7c;
  uVar1 = 0;
  do {
    if (uVar1 < 4) {
      piVar2 = (int *)(&DAT_020a1700)[uVar1];
    }
    else {
      piVar2 = (int *)(&DAT_020a1710)[uVar1 - 4];
    }
    if (uVar1 == 0) {
      FUN_0203d0b4(piVar2,0);
    }
    else {
      FUN_0203d0b4(piVar2,1);
      FUN_0203d478(piVar2,4);
      FUN_0203cfbc(piVar2,0x20,0x20);
      (**(code **)(*piVar2 + 0x90))(piVar2,0);
      *(undefined1 *)((int)piVar2 + 0x956) = 0;
      *(undefined1 *)(piVar2 + 0x25d) = 0;
    }
    local_40[1] = 0;
    local_40[2] = 0;
    FUN_0203d658(piVar2,local_40 + 2,local_40 + 1);
    local_40[0] = (uVar1 & 3) << 0xc;
    (**(code **)(*piVar2 + 0x10))(piVar2,local_40);
    *(undefined1 *)(piVar2 + 0x256) = 0;
    (**(code **)(*piVar2 + 0x98))(piVar2,0);
    (**(code **)(*piVar2 + 0x9c))(piVar2,8,8);
    (**(code **)(*piVar2 + 0x94))(piVar2,0);
    piVar2[0x248] = 0;
    piVar2[0x249] = 0;
    *(undefined1 *)(piVar2 + 0x263) = 1;
    uVar1 = uVar1 + 1;
    piVar2[0x24c] = local_40[3];
    piVar2[0x24d] = iStack_30;
    piVar2[0x24e] = iStack_2c;
    piVar2[0x24f] = iStack_28;
    *(undefined1 *)(piVar2 + 0x263) = 1;
  } while (uVar1 < 8);
  FUN_020461fc(DAT_020a0e64);
  FUN_020461fc(DAT_020a0ed0);
  return;
}

