
void FUN_02015328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((DAT_020a1080 & 1) == 0) {
    PropBindInstance_02095200::PropBindInstance_02095200
              (&DAT_020a1b04,DAT_020a0ed4,param_3,param_4,param_4);
    FUN_0200f2b0(&DAT_020a1b04,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a1614);
    DAT_020a1080 = DAT_020a1080 | 1;
  }
  DAT_020a106c = &DAT_020a1b04;
  FUN_02023cd0(0x20204c44,FUN_02015300);
  return;
}

