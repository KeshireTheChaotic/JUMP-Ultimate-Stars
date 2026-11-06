
void FUN_0215f4d8(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (DAT_0216e7b0 < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(DAT_0216e7b0) {
    case 0:
      *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 0;
      if (param_1 == 0) {
        DAT_0216e7b0 = 2;
      }
      else if (param_1 == 2) {
        DAT_0216e7b0 = 1;
      }
      else if (param_1 == 1) {
        DAT_0216e7b0 = 3;
      }
      else {
        DAT_0216e7b0 = 4;
      }
      break;
    case 1:
      *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 1;
      if (param_1 == 0) {
        DAT_0216e7b0 = 0;
      }
      else if (param_1 == 2) {
        DAT_0216e7b0 = 2;
      }
      else if (param_1 == 1) {
        DAT_0216e7b0 = 3;
      }
      else {
        DAT_0216e7b0 = 5;
      }
      break;
    case 2:
      *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 2;
      if (param_1 == 0) {
        DAT_0216e7b0 = 1;
      }
      else if (param_1 == 2) {
        DAT_0216e7b0 = 0;
      }
      else if (param_1 == 1) {
        DAT_0216e7b0 = 3;
      }
      else {
        DAT_0216e7b0 = 6;
      }
      break;
    case 3:
      if (param_1 == 1) {
        DAT_0216e7b0 = *(byte *)(DAT_0216e7b4 + 0x1c) + 4;
      }
      else if (param_1 == 3) {
        DAT_0216e7b0 = *(byte *)(DAT_0216e7b4 + 0x1c);
      }
      else {
        bVar1 = false;
      }
      break;
    case 4:
      *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 0;
      if (param_1 == 0) {
        DAT_0216e7b0 = 6;
      }
      else if (param_1 == 2) {
        DAT_0216e7b0 = 5;
      }
      else if (param_1 == 1) {
        DAT_0216e7b0 = 0;
      }
      else {
        DAT_0216e7b0 = 3;
      }
      break;
    case 5:
      *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 1;
      if (param_1 == 0) {
        DAT_0216e7b0 = 4;
      }
      else if (param_1 == 2) {
        DAT_0216e7b0 = 6;
      }
      else if (param_1 == 1) {
        DAT_0216e7b0 = 1;
      }
      else {
        DAT_0216e7b0 = 3;
      }
      break;
    case 6:
      *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 2;
      if (param_1 == 0) {
        DAT_0216e7b0 = 5;
      }
      else if (param_1 == 2) {
        DAT_0216e7b0 = 4;
      }
      else if (param_1 == 1) {
        DAT_0216e7b0 = 2;
      }
      else {
        DAT_0216e7b0 = 3;
      }
    }
  }
  if (bVar1) {
    FUN_02162378(8);
    FUN_0215f62c();
  }
  return;
}

