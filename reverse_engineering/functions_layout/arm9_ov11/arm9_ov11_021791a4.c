
bool FUN_021791a4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (7 < uVar1) {
LAB_021791e4:
      return (*(uint *)(param_1 + 0x38) & 0xff) <= (uint)*(byte *)(uVar2 + 0x21812c4);
    }
    if (*(short *)((7 - uVar1) * 2 + 0x2181214) <= *(short *)(param_1 + 8)) {
      uVar2 = 7 - uVar1 & 0xff;
      goto LAB_021791e4;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while( true );
}

