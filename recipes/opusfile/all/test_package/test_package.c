#include <opusfile.h>
#include <stdio.h>

int main()
{
    OpusHead head;
    static const unsigned char opus_data[] = {
        0x4f, 0x67, 0x67, 0x53, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xd4,
        0xd3, 0x35, 0x00, 0x00, 0x00, 0x00, 0x89, 0xe8, 0x55, 0x88, 0x01, 0x13, 0x4f, 0x70, 0x75, 0x73,
        0x48, 0x65, 0x61, 0x64, 0x00, 0x01, 0x38, 0x01, 0x80, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4f,
        0x67, 0x67, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xd4, 0xd3
    };
    printf("opus test result: %s\n", (op_test(&head, opus_data, sizeof(opus_data)) == 0) ? "success" : "fail");
    return 0;
}