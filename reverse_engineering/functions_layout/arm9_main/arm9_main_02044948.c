
void FUN_02044948(int param_1,undefined4 param_2)

{
  ushort uVar1;
  
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  FUN_02043980(param_1,param_2);
  uVar1 = *(ushort *)(param_1 + 0x2c);
  if (uVar1 < 0x41) {
    if (uVar1 < 0x40) {
      if (uVar1 < 0x11) {
        if (uVar1 < 0x10) {
          if (uVar1 == 8) {
            *(undefined4 *)(param_1 + 0x74) = 0;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x74) = 1;
        }
      }
      else if (uVar1 == 0x20) {
        *(undefined4 *)(param_1 + 0x74) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 3;
    }
  }
  else if (uVar1 < 0x101) {
    if (uVar1 < 0x100) {
      if (uVar1 == 0x80) {
        *(undefined4 *)(param_1 + 0x74) = 4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 5;
    }
  }
  else if (uVar1 < 0x201) {
    if (uVar1 == 0x200) {
      *(undefined4 *)(param_1 + 0x74) = 6;
    }
  }
  else if (uVar1 == 0x400) {
    *(undefined4 *)(param_1 + 0x74) = 7;
  }
  uVar1 = *(ushort *)(param_1 + 0x2e);
  if (uVar1 < 0x201) {
    if (uVar1 < 0x101) {
      if (uVar1 < 0x81) {
        if (uVar1 < 0x41) {
          if (uVar1 < 0x21) {
            if (uVar1 < 0x11) {
              if (uVar1 < 9) {
                *(undefined4 *)(param_1 + 0x78) = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0x78) = 1;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x78) = 2;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x78) = 3;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x78) = 4;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 5;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 6;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 7;
  }
  FUN_02044aa4(param_1,3);
  return;
}

