package MyTools;

use strict;
use warnings;
use Exporter 'import';
our @EXPORT_OK = ('hello', 'topla');

sub hello {
    my $isim = shift || 'Dünya';
    return "Merhaba, $isim!\n";
}

sub topla {
    my ($a, $b) = @_;
    return $a + $b;
}

1; 
