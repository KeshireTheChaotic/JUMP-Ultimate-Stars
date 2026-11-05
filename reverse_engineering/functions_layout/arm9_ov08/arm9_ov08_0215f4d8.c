
void FUN_0215f4d8(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  switch(DAT_0216e7b0) {
  case '\0':
    *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 0;
    if (param_1 == 0) {
      DAT_0216e7b0 = '\x02';
    }
    else if (param_1 == 2) {
      DAT_0216e7b0 = '\x01';
    }
    else if (param_1 == 1) {
      DAT_0216e7b0 = '\x03';
    }
    else {
      DAT_0216e7b0 = '\x04';
    }
    break;
  case '\x01':
    *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 1;
    if (param_1 == 0) {
      DAT_0216e7b0 = '\0';
    }
    else if (param_1 == 2) {
      DAT_0216e7b0 = '\x02';
    }
    else if (param_1 == 1) {
      DAT_0216e7b0 = '\x03';
    }
    else {
      DAT_0216e7b0 = '\x05';
    }
    break;
  case '\x02':
    *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 2;
    if (param_1 == 0) {
      DAT_0216e7b0 = '\x01';
    }
    else if (param_1 == 2) {
      DAT_0216e7b0 = '\0';
    }
    else if (param_1 == 1) {
      DAT_0216e7b0 = '\x03';
    }
    else {
      DAT_0216e7b0 = '\x06';
    }
    break;
  case '\x03':
    if (param_1 == 1) {
      DAT_0216e7b0 = *(char *)(DAT_0216e7b4 + 0x1c) + '\x04';
    }
    else if (param_1 == 3) {
      DAT_0216e7b0 = *(char *)(DAT_0216e7b4 + 0x1c);
    }
    else {
      bVar1 = false;
    }
    break;
  case '\x04':
    *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 0;
    if (param_1 == 0) {
      DAT_0216e7b0 = '\x06';
    }
    else if (param_1 == 2) {
      DAT_0216e7b0 = '\x05';
    }
    else if (param_1 == 1) {
      DAT_0216e7b0 = '\0';
    }
    else {
      DAT_0216e7b0 = '\x03';
    }
    break;
  case '\x05':
    *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 1;
    if (param_1 == 0) {
      DAT_0216e7b0 = '\x04';
    }
    else if (param_1 == 2) {
      DAT_0216e7b0 = '\x06';
    }
    else if (param_1 == 1) {
      DAT_0216e7b0 = '\x01';
    }
    else {
      DAT_0216e7b0 = '\x03';
    }
    break;
  case '\x06':
    *(undefined1 *)(DAT_0216e7b4 + 0x1c) = 2;
    if (param_1 == 0) {
      DAT_0216e7b0 = '\x05';
    }
    else if (param_1 == 2) {
      DAT_0216e7b0 = '\x04';
    }
    else if (param_1 == 1) {
      DAT_0216e7b0 = '\x02';
    }
    else {
      DAT_0216e7b0 = '\x03';
    }
  }
  if (bVar1) {
    FUN_02162378(8);
    FUN_0215f62c();
  }
  return;
}

