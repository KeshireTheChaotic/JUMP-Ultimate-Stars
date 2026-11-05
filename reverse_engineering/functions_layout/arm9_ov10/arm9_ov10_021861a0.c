
void FUN_021861a0(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    FUN_02189478(param_2 + 8,*param_1,0x1f);
  }
  if (param_1[1] == 0) {
    *(undefined1 *)(param_2 + 0x27) = 0;
  }
  else {
    FUN_02189478(param_2 + 0x27,param_1[1],0x15);
  }
  if (param_1[2] == 0) {
    *(undefined1 *)(param_2 + 0x3c) = 0;
  }
  else {
    FUN_02189478(param_2 + 0x3c,param_1[2],0x33);
  }
  if (param_1[3] == 0) {
    *(undefined1 *)(param_2 + 0x6f) = 0;
  }
  else {
    FUN_02189478(param_2 + 0x6f,param_1[3],0x1f);
  }
  if (param_1[4] == 0) {
    *(undefined1 *)(param_2 + 0x8e) = 0;
  }
  else {
    FUN_02189478(param_2 + 0x8e,param_1[4],0x1f);
  }
  if (param_1[5] == 0) {
    *(undefined1 *)(param_2 + 0xad) = 0;
  }
  else {
    FUN_02189478(param_2 + 0xad,param_1[5],0x4c);
  }
  *(int *)(param_2 + 0xfc) = param_1[6];
  FUN_02189478(param_2 + 0x100,param_1 + 7,0xb);
  FUN_02189478(param_2 + 0x10b,(int)param_1 + 0x27,3);
  *(int *)(param_2 + 0x110) = param_1[0xb];
  *(int *)(param_2 + 0x114) = param_1[0xc];
  if (param_1 + 0xd == (int *)0x0) {
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  else {
    FUN_02189478(param_2 + 0x118,param_1 + 0xd,0x80);
  }
  *(int *)(param_2 + 0x198) = param_1[0x2d];
  *(int *)(param_2 + 0x19c) = param_1[0x2e];
  *(int *)(param_2 + 0x1a0) = param_1[0x2f];
  *(int *)(param_2 + 0x1a4) = param_1[0x30];
  *(int *)(param_2 + 0x1a8) = param_1[0x31];
  if (param_1[0x32] == 0) {
    *(undefined1 *)(param_2 + 0x1ac) = 0;
  }
  else {
    FUN_02189478(param_2 + 0x1ac,param_1[0x32],0x33);
  }
  *(int *)(param_2 + 0xfc) = param_1[6];
  *(int *)(param_2 + 0x110) = param_1[0xb];
  *(int *)(param_2 + 0x114) = param_1[0xc];
  *(int *)(param_2 + 0x198) = param_1[0x2d];
  *(int *)(param_2 + 0x19c) = param_1[0x2e];
  *(int *)(param_2 + 0x1a0) = param_1[0x2f];
  *(int *)(param_2 + 0x1a4) = param_1[0x30];
  *(int *)(param_2 + 0x1a8) = param_1[0x31];
  *(int *)(param_2 + 0x1e0) = param_1[0x33];
  *(int *)(param_2 + 0x1e4) = param_1[0x34];
  *(int *)(param_2 + 0x1e8) = param_1[0x35];
  *(int *)(param_2 + 0x1ec) = param_1[0x36];
  *(int *)(param_2 + 0x1f0) = param_1[0x37];
  *(int *)(param_2 + 500) = param_1[0x38];
  *(int *)(param_2 + 0x1f8) = param_1[0x39];
  *(int *)(param_2 + 0x1fc) = param_1[0x3a];
  *(int *)(param_2 + 0x200) = param_1[0x3b];
  return;
}

